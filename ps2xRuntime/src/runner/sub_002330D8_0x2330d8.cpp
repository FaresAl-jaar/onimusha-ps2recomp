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

// Function: sub_002330D8
// Address: 0x2330d8 - 0x233168
void sub_002330D8_0x2330d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002330D8_0x2330d8");
#endif

    switch (ctx->pc) {
        case 0x2330f0u: goto label_2330f0;
        case 0x233130u: goto label_233130;
        case 0x233140u: goto label_233140;
        case 0x233150u: goto label_233150;
        case 0x233158u: goto label_233158;
        default: break;
    }

    ctx->pc = 0x2330d8u;

    // 0x2330d8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2330d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2330dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2330dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2330e0: 0x8c44fc08  lw          $a0, -0x3F8($v0)
    ctx->pc = 0x2330e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BFC08u));
    // 0x2330e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2330e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2330e8: 0xc08ccc6  jal         func_233318
    ctx->pc = 0x2330E8u;
    SET_GPR_U32(ctx, 31, 0x2330F0u);
    ctx->pc = 0x233318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233318u, 0x2330E8u, 0x2330F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330F0u;
label_2330f0:
    // 0x2330f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2330f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2330f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2330f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2330F8u;
    {
        const bool branch_taken_0x2330f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2330FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330F8u;
        // 0x2330fc: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330f8) {
            ctx->pc = 0x233128u;
            goto label_233128;
        }
    }
    ctx->pc = 0x233100u;
    // 0x233100: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x233100u;
    {
        const bool branch_taken_0x233100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x233104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233100u;
        // 0x233104: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233100) {
            ctx->pc = 0x23315Cu;
            goto label_23315c;
        }
    }
    ctx->pc = 0x233108u;
    // 0x233108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23310c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23310Cu;
    {
        const bool branch_taken_0x23310c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23310Cu;
        // 0x233110: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23310c) {
            ctx->pc = 0x233138u;
            goto label_233138;
        }
    }
    ctx->pc = 0x233114u;
    // 0x233114: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233114u;
    {
        const bool branch_taken_0x233114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233114u;
        // 0x233118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233114) {
            ctx->pc = 0x233148u;
            goto label_233148;
        }
    }
    ctx->pc = 0x23311Cu;
    // 0x23311c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23311Cu;
    {
        const bool branch_taken_0x23311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23311c) {
            ctx->pc = 0x233160u;
            goto label_233160;
        }
    }
    ctx->pc = 0x233124u;
    // 0x233124: 0x0  nop
    ctx->pc = 0x233124u;
    // NOP
label_233128:
    // 0x233128: 0xc08cc80  jal         func_233200
    ctx->pc = 0x233128u;
    SET_GPR_U32(ctx, 31, 0x233130u);
    ctx->pc = 0x233200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233200u, 0x233128u, 0x233130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233130u;
label_233130:
    // 0x233130: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x233130u;
    {
        const bool branch_taken_0x233130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233130u;
        // 0x233134: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233130) {
            ctx->pc = 0x23315Cu;
            goto label_23315c;
        }
    }
    ctx->pc = 0x233138u;
label_233138:
    // 0x233138: 0xc094e62  jal         func_253988
    ctx->pc = 0x233138u;
    SET_GPR_U32(ctx, 31, 0x233140u);
    ctx->pc = 0x253988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253988u, 0x233138u, 0x233140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233140u;
label_233140:
    // 0x233140: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x233140u;
    {
        const bool branch_taken_0x233140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233140u;
        // 0x233144: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233140) {
            ctx->pc = 0x23315Cu;
            goto label_23315c;
        }
    }
    ctx->pc = 0x233148u;
label_233148:
    // 0x233148: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x233148u;
    SET_GPR_U32(ctx, 31, 0x233150u);
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x233148u, 0x233150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233150u;
label_233150:
    // 0x233150: 0xc094e6e  jal         func_2539B8
    ctx->pc = 0x233150u;
    SET_GPR_U32(ctx, 31, 0x233158u);
    ctx->pc = 0x2539B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539B8u, 0x233150u, 0x233158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233158u;
label_233158:
    // 0x233158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23315c:
    // 0x23315c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23315cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233160:
    // 0x233160: 0x3e00008  jr          $ra
    ctx->pc = 0x233160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233160u;
        // 0x233164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233168u;
}
