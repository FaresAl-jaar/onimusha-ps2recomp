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

// Function: sub_002BA7F0
// Address: 0x2ba7f0 - 0x2ba870
void sub_002BA7F0_0x2ba7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA7F0_0x2ba7f0");
#endif

    switch (ctx->pc) {
        case 0x2ba828u: goto label_2ba828;
        default: break;
    }

    ctx->pc = 0x2ba7f0u;

    // 0x2ba7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba7f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba7fc: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x2ba7fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2ba800: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA800u;
    {
        const bool branch_taken_0x2ba800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA800u;
        // 0x2ba804: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba800) {
            ctx->pc = 0x2BA820u;
            goto label_2ba820;
        }
    }
    ctx->pc = 0x2BA808u;
    // 0x2ba808: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ba808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ba80c: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x2ba80cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ba810: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ba810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ba814: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA814u;
    {
        const bool branch_taken_0x2ba814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba814) {
            ctx->pc = 0x2BA848u;
            goto label_2ba848;
        }
    }
    ctx->pc = 0x2BA81Cu;
    // 0x2ba81c: 0x0  nop
    ctx->pc = 0x2ba81cu;
    // NOP
label_2ba820:
    // 0x2ba820: 0xc06039c  jal         func_180E70
    ctx->pc = 0x2BA820u;
    SET_GPR_U32(ctx, 31, 0x2BA828u);
    ctx->pc = 0x2BA824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA820u;
    // 0x2ba824: 0x8ca40054  lw          $a0, 0x54($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x2BA820u, 0x2BA828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA828u;
label_2ba828:
    // 0x2ba828: 0x86040086  lh          $a0, 0x86($s0)
    ctx->pc = 0x2ba828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x2ba82c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2ba82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba830: 0x9203005e  lbu         $v1, 0x5E($s0)
    ctx->pc = 0x2ba830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x2ba834: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x2ba834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x2ba838: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2ba838u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ba83c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2ba83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x2ba840: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA840u;
    {
        const bool branch_taken_0x2ba840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba840) {
            ctx->pc = 0x2BA860u;
            goto label_2ba860;
        }
    }
    ctx->pc = 0x2BA848u;
label_2ba848:
    // 0x2ba848: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2ba848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ba84c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2ba84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba850: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2ba850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba854: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2ba854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2ba858: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2ba858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2ba85c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2ba85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ba860:
    // 0x2ba860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba868: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA868u;
        // 0x2ba86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA870u;
}
