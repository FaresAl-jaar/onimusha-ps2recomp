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

// Function: sub_00340280
// Address: 0x340280 - 0x34034c
void sub_00340280_0x340280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340280_0x340280");
#endif

    switch (ctx->pc) {
        case 0x3402dcu: goto label_3402dc;
        case 0x340310u: goto label_340310;
        case 0x340340u: goto label_340340;
        default: break;
    }

    ctx->pc = 0x340280u;

    // 0x340280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x340280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x340284: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x340284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340288: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x340288u;
    {
        const bool branch_taken_0x340288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340288u;
        // 0x34028c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340288) {
            ctx->pc = 0x340318u;
            goto label_340318;
        }
    }
    ctx->pc = 0x340290u;
    // 0x340290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x340290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340294: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x340294u;
    {
        const bool branch_taken_0x340294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x340298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340294u;
        // 0x340298: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340294) {
            ctx->pc = 0x3402E8u;
            goto label_3402e8;
        }
    }
    ctx->pc = 0x34029Cu;
    // 0x34029c: 0x10a70012  beq         $a1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x34029Cu;
    {
        const bool branch_taken_0x34029c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x34029c) {
            ctx->pc = 0x3402E8u;
            goto label_3402e8;
        }
    }
    ctx->pc = 0x3402A4u;
    // 0x3402a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3402A4u;
    {
        const bool branch_taken_0x3402a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3402a4) {
            ctx->pc = 0x3402B8u;
            goto label_3402b8;
        }
    }
    ctx->pc = 0x3402ACu;
    // 0x3402ac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3402ACu;
    {
        const bool branch_taken_0x3402ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3402ac) {
            ctx->pc = 0x340340u;
            goto label_340340;
        }
    }
    ctx->pc = 0x3402B4u;
    // 0x3402b4: 0x0  nop
    ctx->pc = 0x3402b4u;
    // NOP
label_3402b8:
    // 0x3402b8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3402b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3402bc: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x3402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x3402c0: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3402c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3402c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3402c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657710u));
    // 0x3402c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3402c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3402cc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x3402ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3402d0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3402d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3402d4: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x3402D4u;
    SET_GPR_U32(ctx, 31, 0x3402DCu);
    ctx->pc = 0x3402D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3402D4u;
    // 0x3402d8: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x3402D4u, 0x3402DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3402DCu;
label_3402dc:
    // 0x3402dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3402DCu;
    {
        const bool branch_taken_0x3402dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3402dc) {
            ctx->pc = 0x340340u;
            goto label_340340;
        }
    }
    ctx->pc = 0x3402E4u;
    // 0x3402e4: 0x0  nop
    ctx->pc = 0x3402e4u;
    // NOP
label_3402e8:
    // 0x3402e8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3402e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3402ec: 0x24427720  addiu       $v0, $v0, 0x7720
    ctx->pc = 0x3402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30496));
    // 0x3402f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3402f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3402f4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657720u));
    // 0x3402f8: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x3402f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3402fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3402fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340300: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x340300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x340304: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x340304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340308: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x340308u;
    SET_GPR_U32(ctx, 31, 0x340310u);
    ctx->pc = 0x34030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340308u;
    // 0x34030c: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x340308u, 0x340310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340310u;
label_340310:
    // 0x340310: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x340310u;
    {
        const bool branch_taken_0x340310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340310) {
            ctx->pc = 0x340340u;
            goto label_340340;
        }
    }
    ctx->pc = 0x340318u;
label_340318:
    // 0x340318: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x340318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34031c: 0x24427730  addiu       $v0, $v0, 0x7730
    ctx->pc = 0x34031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30512));
    // 0x340320: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340324: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x340324u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657730u));
    // 0x340328: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x340328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34032c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340330: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x340330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x340334: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x340334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340338: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x340338u;
    SET_GPR_U32(ctx, 31, 0x340340u);
    ctx->pc = 0x34033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340338u;
    // 0x34033c: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x340338u, 0x340340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340340u;
label_340340:
    // 0x340340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340344: 0x3e00008  jr          $ra
    ctx->pc = 0x340344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340344u;
        // 0x340348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34034Cu;
}
