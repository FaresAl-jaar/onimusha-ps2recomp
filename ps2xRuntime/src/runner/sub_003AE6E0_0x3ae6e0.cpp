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

// Function: sub_003AE6E0
// Address: 0x3ae6e0 - 0x3ae7e0
void sub_003AE6E0_0x3ae6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE6E0_0x3ae6e0");
#endif

    switch (ctx->pc) {
        case 0x3ae774u: goto label_3ae774;
        case 0x3ae7a0u: goto label_3ae7a0;
        default: break;
    }

    ctx->pc = 0x3ae6e0u;

    // 0x3ae6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ae6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ae6e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ae6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ae6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ae6f0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ae6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ae6f4: 0x10670022  beq         $v1, $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x3AE6F4u;
    {
        const bool branch_taken_0x3ae6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x3AE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6F4u;
        // 0x3ae6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6f4) {
            ctx->pc = 0x3AE780u;
            goto label_3ae780;
        }
    }
    ctx->pc = 0x3AE6FCu;
    // 0x3ae6fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE6FCu;
    {
        const bool branch_taken_0x3ae6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae6fc) {
            ctx->pc = 0x3AE710u;
            goto label_3ae710;
        }
    }
    ctx->pc = 0x3AE704u;
    // 0x3ae704: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3AE704u;
    {
        const bool branch_taken_0x3ae704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae704) {
            ctx->pc = 0x3AE7D0u;
            goto label_3ae7d0;
        }
    }
    ctx->pc = 0x3AE70Cu;
    // 0x3ae70c: 0x0  nop
    ctx->pc = 0x3ae70cu;
    // NOP
label_3ae710:
    // 0x3ae710: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ae710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ae714: 0x2442dd80  addiu       $v0, $v0, -0x2280
    ctx->pc = 0x3ae714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958464));
    // 0x3ae718: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ae718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae71c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3ae71cu;
    { uint32_t bits = FAST_READ32(0x65DD80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae720: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x3ae720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x3ae724: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3ae724u;
    { uint32_t bits = FAST_READ32(0x65DD84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae728: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ae728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ae72c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3ae72cu;
    { uint32_t bits = FAST_READ32(0x65DD88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ae730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae734: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3ae734u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ae738: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae73c: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3ae73cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ae740: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ae740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ae744: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3ae744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ae748: 0xa20629d1  sb          $a2, 0x29D1($s0)
    ctx->pc = 0x3ae748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ae74c: 0x9606078c  lhu         $a2, 0x78C($s0)
    ctx->pc = 0x3ae74cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ae750: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x3ae750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x3ae754: 0xa606078c  sh          $a2, 0x78C($s0)
    ctx->pc = 0x3ae754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 6));
    // 0x3ae758: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ae758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae75c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ae75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae760: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3ae760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ae764: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ae764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ae768: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ae768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3ae76c: 0xc0d0434  jal         func_3410D0
    ctx->pc = 0x3AE76Cu;
    SET_GPR_U32(ctx, 31, 0x3AE774u);
    ctx->pc = 0x3AE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE76Cu;
    // 0x3ae770: 0xa2070821  sb          $a3, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410D0u, 0x3AE76Cu, 0x3AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE774u;
label_3ae774:
    // 0x3ae774: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3AE774u;
    {
        const bool branch_taken_0x3ae774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae774) {
            ctx->pc = 0x3AE7D0u;
            goto label_3ae7d0;
        }
    }
    ctx->pc = 0x3AE77Cu;
    // 0x3ae77c: 0x0  nop
    ctx->pc = 0x3ae77cu;
    // NOP
label_3ae780:
    // 0x3ae780: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x3ae780u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3ae784: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3ae784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3ae788: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AE788u;
    {
        const bool branch_taken_0x3ae788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae788) {
            ctx->pc = 0x3AE7D0u;
            goto label_3ae7d0;
        }
    }
    ctx->pc = 0x3AE790u;
    // 0x3ae790: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3ae790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ae794: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3ae794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3ae798: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3AE798u;
    SET_GPR_U32(ctx, 31, 0x3AE7A0u);
    ctx->pc = 0x3AE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE798u;
    // 0x3ae79c: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3AE798u, 0x3AE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE7A0u;
label_3ae7a0:
    // 0x3ae7a0: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x3ae7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x3ae7a4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3ae7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ae7a8: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x3ae7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x3ae7ac: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x3ae7acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3ae7b0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x3ae7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3ae7b4: 0x8e0429c0  lw          $a0, 0x29C0($s0)
    ctx->pc = 0x3ae7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3ae7b8: 0x0  nop
    ctx->pc = 0x3ae7b8u;
    // NOP
    // 0x3ae7bc: 0x2810  mfhi        $a1
    ctx->pc = 0x3ae7bcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3ae7c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ae7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae7c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ae7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3ae7c8: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x3ae7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ae7cc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ae7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ae7d0:
    // 0x3ae7d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ae7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7D8u;
        // 0x3ae7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE7E0u;
}
