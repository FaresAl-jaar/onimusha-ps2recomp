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

// Function: sub_002900E0
// Address: 0x2900e0 - 0x2901cc
void sub_002900E0_0x2900e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002900E0_0x2900e0");
#endif

    switch (ctx->pc) {
        case 0x29010cu: goto label_29010c;
        case 0x290144u: goto label_290144;
        case 0x29016cu: goto label_29016c;
        case 0x29018cu: goto label_29018c;
        case 0x2901acu: goto label_2901ac;
        default: break;
    }

    ctx->pc = 0x2900e0u;

    // 0x2900e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2900e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2900e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2900e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2900e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2900ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2900ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2900f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2900f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2900f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2900f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2900fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290100: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x290100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290104: 0xc0a4094  jal         func_290250
    ctx->pc = 0x290104u;
    SET_GPR_U32(ctx, 31, 0x29010Cu);
    ctx->pc = 0x290108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290104u;
    // 0x290108: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290250u, 0x290104u, 0x29010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29010Cu;
label_29010c:
    // 0x29010c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29010Cu;
    {
        const bool branch_taken_0x29010c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29010c) {
            ctx->pc = 0x290120u;
            goto label_290120;
        }
    }
    ctx->pc = 0x290114u;
    // 0x290114: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x290114u;
    {
        const bool branch_taken_0x290114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290114u;
        // 0x290118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290114) {
            ctx->pc = 0x2901B0u;
            goto label_2901b0;
        }
    }
    ctx->pc = 0x29011Cu;
    // 0x29011c: 0x0  nop
    ctx->pc = 0x29011cu;
    // NOP
label_290120:
    // 0x290120: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x290120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x290124: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x290124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x290128: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290128u;
    {
        const bool branch_taken_0x290128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290128) {
            ctx->pc = 0x290150u;
            goto label_290150;
        }
    }
    ctx->pc = 0x290130u;
    // 0x290130: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x290130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x290134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290138: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x290138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x29013c: 0xc0a4074  jal         func_2901D0
    ctx->pc = 0x29013Cu;
    SET_GPR_U32(ctx, 31, 0x290144u);
    ctx->pc = 0x290140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29013Cu;
    // 0x290140: 0x26470040  addiu       $a3, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2901D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2901D0u, 0x29013Cu, 0x290144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290144u;
label_290144:
    // 0x290144: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x290144u;
    {
        const bool branch_taken_0x290144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290144u;
        // 0x290148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290144) {
            ctx->pc = 0x2901B0u;
            goto label_2901b0;
        }
    }
    ctx->pc = 0x29014Cu;
    // 0x29014c: 0x0  nop
    ctx->pc = 0x29014cu;
    // NOP
label_290150:
    // 0x290150: 0x24021389  addiu       $v0, $zero, 0x1389
    ctx->pc = 0x290150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
    // 0x290154: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290154u;
    {
        const bool branch_taken_0x290154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290154u;
        // 0x290158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290154) {
            ctx->pc = 0x290178u;
            goto label_290178;
        }
    }
    ctx->pc = 0x29015Cu;
    // 0x29015c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29015cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290164: 0xc0a4014  jal         func_290050
    ctx->pc = 0x290164u;
    SET_GPR_U32(ctx, 31, 0x29016Cu);
    ctx->pc = 0x290168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290164u;
    // 0x290168: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290050u, 0x290164u, 0x29016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29016Cu;
label_29016c:
    // 0x29016c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29016Cu;
    {
        const bool branch_taken_0x29016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29016c) {
            ctx->pc = 0x2901B0u;
            goto label_2901b0;
        }
    }
    ctx->pc = 0x290174u;
    // 0x290174: 0x0  nop
    ctx->pc = 0x290174u;
    // NOP
label_290178:
    // 0x290178: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x290178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29017c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29017Cu;
    {
        const bool branch_taken_0x29017c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29017Cu;
        // 0x290180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29017c) {
            ctx->pc = 0x290198u;
            goto label_290198;
        }
    }
    ctx->pc = 0x290184u;
    // 0x290184: 0xc0a40b4  jal         func_2902D0
    ctx->pc = 0x290184u;
    SET_GPR_U32(ctx, 31, 0x29018Cu);
    ctx->pc = 0x290188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290184u;
    // 0x290188: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2902D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2902D0u, 0x290184u, 0x29018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29018Cu;
label_29018c:
    // 0x29018c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29018Cu;
    {
        const bool branch_taken_0x29018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29018Cu;
        // 0x290190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29018c) {
            ctx->pc = 0x2901B0u;
            goto label_2901b0;
        }
    }
    ctx->pc = 0x290194u;
    // 0x290194: 0x0  nop
    ctx->pc = 0x290194u;
    // NOP
label_290198:
    // 0x290198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29019c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2901a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901a4: 0xc0a414c  jal         func_290530
    ctx->pc = 0x2901A4u;
    SET_GPR_U32(ctx, 31, 0x2901ACu);
    ctx->pc = 0x2901A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901A4u;
    // 0x2901a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290530u, 0x2901A4u, 0x2901ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901ACu;
label_2901ac:
    // 0x2901ac: 0x0  nop
    ctx->pc = 0x2901acu;
    // NOP
label_2901b0:
    // 0x2901b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2901b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2901b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2901b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2901b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2901b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2901bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2901bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2901c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2901c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2901c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2901C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2901C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901C4u;
        // 0x2901c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2901C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2901CCu;
}
