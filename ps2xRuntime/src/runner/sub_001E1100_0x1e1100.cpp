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

// Function: sub_001E1100
// Address: 0x1e1100 - 0x1e1154
void sub_001E1100_0x1e1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1100_0x1e1100");
#endif

    switch (ctx->pc) {
        case 0x1e1100u: goto label_1e1100;
        case 0x1e1104u: goto label_1e1104;
        case 0x1e1108u: goto label_1e1108;
        case 0x1e110cu: goto label_1e110c;
        case 0x1e1110u: goto label_1e1110;
        case 0x1e1114u: goto label_1e1114;
        case 0x1e1118u: goto label_1e1118;
        case 0x1e111cu: goto label_1e111c;
        case 0x1e1120u: goto label_1e1120;
        case 0x1e1124u: goto label_1e1124;
        case 0x1e1128u: goto label_1e1128;
        case 0x1e112cu: goto label_1e112c;
        case 0x1e1130u: goto label_1e1130;
        case 0x1e1134u: goto label_1e1134;
        case 0x1e1138u: goto label_1e1138;
        case 0x1e113cu: goto label_1e113c;
        case 0x1e1140u: goto label_1e1140;
        case 0x1e1144u: goto label_1e1144;
        case 0x1e1148u: goto label_1e1148;
        case 0x1e114cu: goto label_1e114c;
        case 0x1e1150u: goto label_1e1150;
        default: break;
    }

    ctx->pc = 0x1e1100u;

label_1e1100:
    // 0x1e1100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1104:
    // 0x1e1104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1108:
    // 0x1e1108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e110c:
    // 0x1e110c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e110cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1110:
    // 0x1e1110: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e1114:
    if (ctx->pc == 0x1E1114u) {
        ctx->pc = 0x1E1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1110u;
        // 0x1e1114: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1118u;
        goto label_1e1118;
    }
    ctx->pc = 0x1E1110u;
    {
        const bool branch_taken_0x1e1110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1110u;
        // 0x1e1114: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1110) {
            ctx->pc = 0x1E1140u;
            goto label_1e1140;
        }
    }
    ctx->pc = 0x1E1118u;
label_1e1118:
    // 0x1e1118: 0x244266f0  addiu       $v0, $v0, 0x66F0
    ctx->pc = 0x1e1118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
label_1e111c:
    // 0x1e111c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e111cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e1120:
    // 0x1e1120: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1124:
    // 0x1e1124: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e1124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e1128:
    // 0x1e1128: 0x320f809  jalr        $t9
label_1e112c:
    if (ctx->pc == 0x1E112Cu) {
        ctx->pc = 0x1E1130u;
        goto label_1e1130;
    }
    ctx->pc = 0x1E1128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1130u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1128u, 0x1E1130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1130u;
label_1e1130:
    // 0x1e1130: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e1134:
    if (ctx->pc == 0x1E1134u) {
        ctx->pc = 0x1E1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1130u;
        // 0x1e1134: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1138u;
        goto label_1e1138;
    }
    ctx->pc = 0x1E1130u;
    {
        const bool branch_taken_0x1e1130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1130u;
        // 0x1e1134: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1130) {
            ctx->pc = 0x1E1140u;
            goto label_1e1140;
        }
    }
    ctx->pc = 0x1E1138u;
label_1e1138:
    // 0x1e1138: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e1138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e113c:
    // 0x1e113c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e113cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e1140:
    // 0x1e1140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1144:
    // 0x1e1144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1148:
    // 0x1e1148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e114c:
    // 0x1e114c: 0x3e00008  jr          $ra
label_1e1150:
    if (ctx->pc == 0x1E1150u) {
        ctx->pc = 0x1E1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E114Cu;
        // 0x1e1150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1154u;
        goto label_fallthrough_0x1e114c;
    }
    ctx->pc = 0x1E114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E114Cu;
        // 0x1e1150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e114c:
    ctx->pc = 0x1E1154u;
}
