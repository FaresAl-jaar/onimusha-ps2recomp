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

// Function: sub_002530F0
// Address: 0x2530f0 - 0x25315c
void sub_002530F0_0x2530f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002530F0_0x2530f0");
#endif

    switch (ctx->pc) {
        case 0x2530f0u: goto label_2530f0;
        case 0x2530f4u: goto label_2530f4;
        case 0x2530f8u: goto label_2530f8;
        case 0x2530fcu: goto label_2530fc;
        case 0x253100u: goto label_253100;
        case 0x253104u: goto label_253104;
        case 0x253108u: goto label_253108;
        case 0x25310cu: goto label_25310c;
        case 0x253110u: goto label_253110;
        case 0x253114u: goto label_253114;
        case 0x253118u: goto label_253118;
        case 0x25311cu: goto label_25311c;
        case 0x253120u: goto label_253120;
        case 0x253124u: goto label_253124;
        case 0x253128u: goto label_253128;
        case 0x25312cu: goto label_25312c;
        case 0x253130u: goto label_253130;
        case 0x253134u: goto label_253134;
        case 0x253138u: goto label_253138;
        case 0x25313cu: goto label_25313c;
        case 0x253140u: goto label_253140;
        case 0x253144u: goto label_253144;
        case 0x253148u: goto label_253148;
        case 0x25314cu: goto label_25314c;
        case 0x253150u: goto label_253150;
        case 0x253154u: goto label_253154;
        case 0x253158u: goto label_253158;
        default: break;
    }

    ctx->pc = 0x2530f0u;

label_2530f0:
    // 0x2530f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2530f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2530f4:
    // 0x2530f4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x2530f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2530f8:
    // 0x2530f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2530f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2530fc:
    // 0x2530fc: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2530fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
label_253100:
    // 0x253100: 0x26100758  addiu       $s0, $s0, 0x758
    ctx->pc = 0x253100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1880));
label_253104:
    // 0x253104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_253108:
    // 0x253108: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x253108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25310c:
    // 0x25310c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_253110:
    // 0x253110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_253114:
    // 0x253114: 0xc04a040  jal         func_128100
label_253118:
    if (ctx->pc == 0x253118u) {
        ctx->pc = 0x253118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253114u;
        // 0x253118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25311Cu;
        goto label_25311c;
    }
    ctx->pc = 0x253114u;
    SET_GPR_U32(ctx, 31, 0x25311Cu);
    ctx->pc = 0x253118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253114u;
    // 0x253118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x253114u, 0x25311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25311Cu;
label_25311c:
    // 0x25311c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253120:
    // 0x253120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_253124:
    // 0x253124: 0xc049f66  jal         func_127D98
label_253128:
    if (ctx->pc == 0x253128u) {
        ctx->pc = 0x253128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253124u;
        // 0x253128: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25312Cu;
        goto label_25312c;
    }
    ctx->pc = 0x253124u;
    SET_GPR_U32(ctx, 31, 0x25312Cu);
    ctx->pc = 0x253128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253124u;
    // 0x253128: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D98u, 0x253124u, 0x25312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25312Cu;
label_25312c:
    // 0x25312c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x25312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_253130:
    // 0x253130: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x253130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
label_253134:
    // 0x253134: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_253138:
    // 0x253138: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25313c:
    if (ctx->pc == 0x25313Cu) {
        ctx->pc = 0x25313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253138u;
        // 0x25313c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253140u;
        goto label_253140;
    }
    ctx->pc = 0x253138u;
    {
        const bool branch_taken_0x253138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253138u;
        // 0x25313c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253138) {
            ctx->pc = 0x253148u;
            goto label_253148;
        }
    }
    ctx->pc = 0x253140u;
label_253140:
    // 0x253140: 0x60f809  jalr        $v1
label_253144:
    if (ctx->pc == 0x253144u) {
        ctx->pc = 0x253144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253140u;
        // 0x253144: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253148u;
        goto label_253148;
    }
    ctx->pc = 0x253140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x253148u);
        ctx->pc = 0x253144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253140u;
        // 0x253144: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253140u, 0x253148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253148u;
label_253148:
    // 0x253148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25314c:
    // 0x25314c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25314cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_253150:
    // 0x253150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_253154:
    // 0x253154: 0x3e00008  jr          $ra
label_253158:
    if (ctx->pc == 0x253158u) {
        ctx->pc = 0x253158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253154u;
        // 0x253158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25315Cu;
        goto label_fallthrough_0x253154;
    }
    ctx->pc = 0x253154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253154u;
        // 0x253158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253154:
    ctx->pc = 0x25315Cu;
}
