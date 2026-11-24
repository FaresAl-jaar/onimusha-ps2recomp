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

// Function: sub_001F35D0
// Address: 0x1f35d0 - 0x1f3714
void sub_001F35D0_0x1f35d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F35D0_0x1f35d0");
#endif

    switch (ctx->pc) {
        case 0x1f3700u: goto label_1f3700;
        default: break;
    }

    ctx->pc = 0x1f35d0u;

    // 0x1f35d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f35d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f35d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f35d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f35d8: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x1f35d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f35dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35DCu;
    {
        const bool branch_taken_0x1f35dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35DCu;
        // 0x1f35e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35dc) {
            ctx->pc = 0x1F35F0u;
            goto label_1f35f0;
        }
    }
    ctx->pc = 0x1F35E4u;
    // 0x1f35e4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1F35E4u;
    {
        const bool branch_taken_0x1f35e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f35e4) {
            ctx->pc = 0x1F3708u;
            goto label_1f3708;
        }
    }
    ctx->pc = 0x1F35ECu;
    // 0x1f35ec: 0x0  nop
    ctx->pc = 0x1f35ecu;
    // NOP
label_1f35f0:
    // 0x1f35f0: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x1f35f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f35f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f35f8: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1f35f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f35fc: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x1f35fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f3600: 0x1c40003d  bgtz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F3600u;
    {
        const bool branch_taken_0x1f3600 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1f3600) {
            ctx->pc = 0x1F36F8u;
            goto label_1f36f8;
        }
    }
    ctx->pc = 0x1F3608u;
    // 0x1f3608: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1f3608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1f360c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3610: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1f3610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3614: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1f3618: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f361c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1f361cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3620: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3620u;
    {
        const bool branch_taken_0x1f3620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3620) {
            ctx->pc = 0x1F3688u;
            goto label_1f3688;
        }
    }
    ctx->pc = 0x1F3628u;
    // 0x1f3628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f362c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f362cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f3630: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f3630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f3634: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f3634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f3638: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1f3638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f363c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x1f363cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f3640: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1f3640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3644: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1f3644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1f3648: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x1f3648u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f364c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f3650: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1f3650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1f3654: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f3654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f3658: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1f3658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1f365c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1f365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1f3660: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1f3660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1f3664: 0x78e60010  lq          $a2, 0x10($a3)
    ctx->pc = 0x1f3664u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1f3668: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x1f3668u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1f366c: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x1f366cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f3670: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x1f3670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1f3674: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x1f3674u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 6));
    // 0x1f3678: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x1f3678u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 5));
    // 0x1f367c: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x1f367cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x1f3680: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F3680u;
    {
        const bool branch_taken_0x1f3680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3680u;
        // 0x1f3684: 0x7c820050  sq          $v0, 0x50($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3680) {
            ctx->pc = 0x1F3700u;
            goto label_1f3700;
        }
    }
    ctx->pc = 0x1F3688u;
label_1f3688:
    // 0x1f3688: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x1f3688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1f368c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F368Cu;
    {
        const bool branch_taken_0x1f368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f368c) {
            ctx->pc = 0x1F36E8u;
            goto label_1f36e8;
        }
    }
    ctx->pc = 0x1F3694u;
    // 0x1f3694: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1f3694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3698: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x1f3698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f369c: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1f369cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f36a0: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1f36a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1f36a4: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x1f36a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f36a8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1f36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1f36ac: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1f36acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1f36b0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1f36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f36b4: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1f36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1f36b8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1f36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1f36bc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1f36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1f36c0: 0x78e60010  lq          $a2, 0x10($a3)
    ctx->pc = 0x1f36c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1f36c4: 0x78e50020  lq          $a1, 0x20($a3)
    ctx->pc = 0x1f36c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1f36c8: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x1f36c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f36cc: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x1f36ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1f36d0: 0x7c860020  sq          $a2, 0x20($a0)
    ctx->pc = 0x1f36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 6));
    // 0x1f36d4: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x1f36d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 5));
    // 0x1f36d8: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x1f36d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x1f36dc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x1f36dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x1f36e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F36E0u;
    {
        const bool branch_taken_0x1f36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36E0u;
        // 0x1f36e4: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36e0) {
            ctx->pc = 0x1F3700u;
            goto label_1f3700;
        }
    }
    ctx->pc = 0x1F36E8u;
label_1f36e8:
    // 0x1f36e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f36ec: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x1f36ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f36f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F36F0u;
    {
        const bool branch_taken_0x1f36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36F0u;
        // 0x1f36f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36f0) {
            ctx->pc = 0x1F3708u;
            goto label_1f3708;
        }
    }
    ctx->pc = 0x1F36F8u;
label_1f36f8:
    // 0x1f36f8: 0xc07cd50  jal         func_1F3540
    ctx->pc = 0x1F36F8u;
    SET_GPR_U32(ctx, 31, 0x1F3700u);
    ctx->pc = 0x1F36FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36F8u;
    // 0x1f36fc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3540u, 0x1F36F8u, 0x1F3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3700u;
label_1f3700:
    // 0x1f3700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3704: 0x0  nop
    ctx->pc = 0x1f3704u;
    // NOP
label_1f3708:
    // 0x1f3708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f370c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F370Cu;
        // 0x1f3710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3714u;
}
