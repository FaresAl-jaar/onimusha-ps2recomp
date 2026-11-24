#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0920
// Address: 0x2e0920 - 0x2e09fc
void sub_002E0920_0x2e0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0920_0x2e0920");
#endif

    switch (ctx->pc) {
        case 0x2e09dcu: goto label_2e09dc;
        default: break;
    }

    ctx->pc = 0x2e0920u;

    // 0x2e0920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e092c: 0x94830606  lhu         $v1, 0x606($a0)
    ctx->pc = 0x2e092cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1542)));
    // 0x2e0930: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x2e0930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e0934: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0934u;
    {
        const bool branch_taken_0x2e0934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0934u;
        // 0x2e0938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0934) {
            ctx->pc = 0x2E0940u;
            goto label_2e0940;
        }
    }
    ctx->pc = 0x2E093Cu;
    // 0x2e093c: 0xa6000606  sh          $zero, 0x606($s0)
    ctx->pc = 0x2e093cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1542), (uint16_t)GPR_U32(ctx, 0));
label_2e0940:
    // 0x2e0940: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e0940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e0944: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e0944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0948: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e0948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e094c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0950: 0xa4640580  sh          $a0, 0x580($v1)
    ctx->pc = 0x2e0950u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1408), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e0954: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e0954u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e0958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e0958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e095c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e0960: 0xa0600582  sb          $zero, 0x582($v1)
    ctx->pc = 0x2e0960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1410), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0964: 0x96040606  lhu         $a0, 0x606($s0)
    ctx->pc = 0x2e0964u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e0968: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2e0968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e096c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e096cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e0970: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2e0970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e0974: 0xa0830180  sb          $v1, 0x180($a0)
    ctx->pc = 0x2e0974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 384), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0978: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2e0978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2e097c: 0xa0830181  sb          $v1, 0x181($a0)
    ctx->pc = 0x2e097cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 385), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e0980: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2e0980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0984: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2e0984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0988: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2e0988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e098c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2e098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0990: 0xe4830184  swc1        $f3, 0x184($a0)
    ctx->pc = 0x2e0990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2e0994: 0xe4820188  swc1        $f2, 0x188($a0)
    ctx->pc = 0x2e0994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2e0998: 0xe481018c  swc1        $f1, 0x18C($a0)
    ctx->pc = 0x2e0998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 396), bits); }
    // 0x2e099c: 0xe4800190  swc1        $f0, 0x190($a0)
    ctx->pc = 0x2e099cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 400), bits); }
    // 0x2e09a0: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2e09a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e09a4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2e09a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e09a8: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2e09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e09ac: 0xe4820194  swc1        $f2, 0x194($a0)
    ctx->pc = 0x2e09acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
    // 0x2e09b0: 0xe4810198  swc1        $f1, 0x198($a0)
    ctx->pc = 0x2e09b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
    // 0x2e09b4: 0xe480019c  swc1        $f0, 0x19C($a0)
    ctx->pc = 0x2e09b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 412), bits); }
    // 0x2e09b8: 0x96050606  lhu         $a1, 0x606($s0)
    ctx->pc = 0x2e09b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e09bc: 0x82030039  lb          $v1, 0x39($s0)
    ctx->pc = 0x2e09bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2e09c0: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E09C0u;
    {
        const bool branch_taken_0x2e09c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e09c0) {
            ctx->pc = 0x2E09E0u;
            goto label_2e09e0;
        }
    }
    ctx->pc = 0x2E09C8u;
    // 0x2e09c8: 0x920306b1  lbu         $v1, 0x6B1($s0)
    ctx->pc = 0x2e09c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1713)));
    // 0x2e09cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E09CCu;
    {
        const bool branch_taken_0x2e09cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09CCu;
        // 0x2e09d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e09cc) {
            ctx->pc = 0x2E09E0u;
            goto label_2e09e0;
        }
    }
    ctx->pc = 0x2E09D4u;
    // 0x2e09d4: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E09D4u;
    SET_GPR_U32(ctx, 31, 0x2E09DCu);
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E09D4u, 0x2E09DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09DCu;
label_2e09dc:
    // 0x2e09dc: 0x0  nop
    ctx->pc = 0x2e09dcu;
    // NOP
label_2e09e0:
    // 0x2e09e0: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e09e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e09e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e09e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e09e8: 0xa6030606  sh          $v1, 0x606($s0)
    ctx->pc = 0x2e09e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1542), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e09ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e09ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e09f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e09f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e09f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E09F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09F4u;
        // 0x2e09f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E09F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E09FCu;
}
