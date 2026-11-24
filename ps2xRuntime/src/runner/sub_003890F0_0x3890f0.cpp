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

// Function: sub_003890F0
// Address: 0x3890f0 - 0x3891a8
void sub_003890F0_0x3890f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003890F0_0x3890f0");
#endif

    switch (ctx->pc) {
        case 0x389104u: goto label_389104;
        case 0x389138u: goto label_389138;
        case 0x389148u: goto label_389148;
        case 0x389158u: goto label_389158;
        case 0x389168u: goto label_389168;
        case 0x389188u: goto label_389188;
        case 0x389198u: goto label_389198;
        default: break;
    }

    ctx->pc = 0x3890f0u;

    // 0x3890f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3890f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3890f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3890f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3890f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3890f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3890fc: 0xc0e2304  jal         func_388C10
    ctx->pc = 0x3890FCu;
    SET_GPR_U32(ctx, 31, 0x389104u);
    ctx->pc = 0x389100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3890FCu;
    // 0x389100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388C10u, 0x3890FCu, 0x389104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389104u;
label_389104:
    // 0x389104: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x389104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x389108: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x389108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x38910c: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x38910cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x389110: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x389110u;
    {
        const bool branch_taken_0x389110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x389114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389110u;
        // 0x389114: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389110) {
            ctx->pc = 0x389170u;
            goto label_389170;
        }
    }
    ctx->pc = 0x389118u;
    // 0x389118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x389118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38911c: 0x24631fa0  addiu       $v1, $v1, 0x1FA0
    ctx->pc = 0x38911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8096));
    // 0x389120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x389120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x389124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x389124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x389128: 0x400008  jr          $v0
    ctx->pc = 0x389128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x389130u: goto label_389130;
            case 0x389140u: goto label_389140;
            case 0x389150u: goto label_389150;
            case 0x389160u: goto label_389160;
            case 0x389170u: goto label_389170;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389128u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x389130u;
label_389130:
    // 0x389130: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x389130u;
    SET_GPR_U32(ctx, 31, 0x389138u);
    ctx->pc = 0x389134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389130u;
    // 0x389134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x389130u, 0x389138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389138u;
label_389138:
    // 0x389138: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x389138u;
    {
        const bool branch_taken_0x389138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389138) {
            ctx->pc = 0x389198u;
            goto label_389198;
        }
    }
    ctx->pc = 0x389140u;
label_389140:
    // 0x389140: 0xc0e2190  jal         func_388640
    ctx->pc = 0x389140u;
    SET_GPR_U32(ctx, 31, 0x389148u);
    ctx->pc = 0x389144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389140u;
    // 0x389144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388640u, 0x389140u, 0x389148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389148u;
label_389148:
    // 0x389148: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x389148u;
    {
        const bool branch_taken_0x389148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389148) {
            ctx->pc = 0x389198u;
            goto label_389198;
        }
    }
    ctx->pc = 0x389150u;
label_389150:
    // 0x389150: 0xc0e2214  jal         func_388850
    ctx->pc = 0x389150u;
    SET_GPR_U32(ctx, 31, 0x389158u);
    ctx->pc = 0x389154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389150u;
    // 0x389154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388850u, 0x389150u, 0x389158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389158u;
label_389158:
    // 0x389158: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x389158u;
    {
        const bool branch_taken_0x389158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389158) {
            ctx->pc = 0x389198u;
            goto label_389198;
        }
    }
    ctx->pc = 0x389160u;
label_389160:
    // 0x389160: 0xc0e2298  jal         func_388A60
    ctx->pc = 0x389160u;
    SET_GPR_U32(ctx, 31, 0x389168u);
    ctx->pc = 0x389164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389160u;
    // 0x389164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388A60u, 0x389160u, 0x389168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389168u;
label_389168:
    // 0x389168: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x389168u;
    {
        const bool branch_taken_0x389168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389168) {
            ctx->pc = 0x389198u;
            goto label_389198;
        }
    }
    ctx->pc = 0x389170u;
label_389170:
    // 0x389170: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x389170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x389174: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x389174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x389178: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x389178u;
    {
        const bool branch_taken_0x389178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389178u;
        // 0x38917c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389178) {
            ctx->pc = 0x389190u;
            goto label_389190;
        }
    }
    ctx->pc = 0x389180u;
    // 0x389180: 0xc0e2298  jal         func_388A60
    ctx->pc = 0x389180u;
    SET_GPR_U32(ctx, 31, 0x389188u);
    ctx->pc = 0x388A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388A60u, 0x389180u, 0x389188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389188u;
label_389188:
    // 0x389188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x389188u;
    {
        const bool branch_taken_0x389188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389188) {
            ctx->pc = 0x389198u;
            goto label_389198;
        }
    }
    ctx->pc = 0x389190u;
label_389190:
    // 0x389190: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x389190u;
    SET_GPR_U32(ctx, 31, 0x389198u);
    ctx->pc = 0x389194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389190u;
    // 0x389194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x389190u, 0x389198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389198u;
label_389198:
    // 0x389198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38919c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38919cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3891a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3891A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3891A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891A0u;
        // 0x3891a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3891A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3891A8u;
}
