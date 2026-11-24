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

// Function: sub_00244120
// Address: 0x244120 - 0x244188
void sub_00244120_0x244120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244120_0x244120");
#endif

    switch (ctx->pc) {
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        default: break;
    }

    ctx->pc = 0x244120u;

label_244120:
    // 0x244120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_244124:
    // 0x244124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244128:
    // 0x244128: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_24412c:
    if (ctx->pc == 0x24412Cu) {
        ctx->pc = 0x24412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244128u;
        // 0x24412c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244130u;
        goto label_244130;
    }
    ctx->pc = 0x244128u;
    {
        const bool branch_taken_0x244128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244128u;
        // 0x24412c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244128) {
            ctx->pc = 0x244148u;
            goto label_244148;
        }
    }
    ctx->pc = 0x244130u;
label_244130:
    // 0x244130: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244134:
    // 0x244134: 0xc090d8a  jal         func_243628
label_244138:
    if (ctx->pc == 0x244138u) {
        ctx->pc = 0x244138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244134u;
        // 0x244138: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24413Cu;
        goto label_24413c;
    }
    ctx->pc = 0x244134u;
    SET_GPR_U32(ctx, 31, 0x24413Cu);
    ctx->pc = 0x244138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244134u;
    // 0x244138: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244134u, 0x24413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24413Cu;
label_24413c:
    // 0x24413c: 0x1000000e  b           . + 4 + (0xE << 2)
label_244140:
    if (ctx->pc == 0x244140u) {
        ctx->pc = 0x244140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24413Cu;
        // 0x244140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244144u;
        goto label_244144;
    }
    ctx->pc = 0x24413Cu;
    {
        const bool branch_taken_0x24413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24413Cu;
        // 0x244140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24413c) {
            ctx->pc = 0x244178u;
            goto label_244178;
        }
    }
    ctx->pc = 0x244144u;
label_244144:
    // 0x244144: 0x0  nop
    ctx->pc = 0x244144u;
    // NOP
label_244148:
    // 0x244148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24414c:
    // 0x24414c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_244150:
    // 0x244150: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244154:
    if (ctx->pc == 0x244154u) {
        ctx->pc = 0x244154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244150u;
        // 0x244154: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244158u;
        goto label_244158;
    }
    ctx->pc = 0x244150u;
    {
        const bool branch_taken_0x244150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244150) {
            ctx->pc = 0x244154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244150u;
            // 0x244154: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244168u;
            goto label_244168;
        }
    }
    ctx->pc = 0x244158u;
label_244158:
    // 0x244158: 0x40f809  jalr        $v0
label_24415c:
    if (ctx->pc == 0x24415Cu) {
        ctx->pc = 0x24415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244158u;
        // 0x24415c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244160u;
        goto label_244160;
    }
    ctx->pc = 0x244158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244160u);
        ctx->pc = 0x24415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244158u;
        // 0x24415c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244158u, 0x244160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244160u;
label_244160:
    // 0x244160: 0x10000004  b           . + 4 + (0x4 << 2)
label_244164:
    if (ctx->pc == 0x244164u) {
        ctx->pc = 0x244164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244160u;
        // 0x244164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244168u;
        goto label_244168;
    }
    ctx->pc = 0x244160u;
    {
        const bool branch_taken_0x244160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244160u;
        // 0x244164: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244160) {
            ctx->pc = 0x244174u;
            goto label_244174;
        }
    }
    ctx->pc = 0x244168u;
label_244168:
    // 0x244168: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24416c:
    // 0x24416c: 0xc090d8a  jal         func_243628
label_244170:
    if (ctx->pc == 0x244170u) {
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24416Cu;
        // 0x244170: 0x2484bd68  addiu       $a0, $a0, -0x4298 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244174u;
        goto label_244174;
    }
    ctx->pc = 0x24416Cu;
    SET_GPR_U32(ctx, 31, 0x244174u);
    ctx->pc = 0x244170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24416Cu;
    // 0x244170: 0x2484bd68  addiu       $a0, $a0, -0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x24416Cu, 0x244174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244174u;
label_244174:
    // 0x244174: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x244174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244178:
    // 0x244178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24417c:
    // 0x24417c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_244180:
    // 0x244180: 0x3e00008  jr          $ra
label_244184:
    if (ctx->pc == 0x244184u) {
        ctx->pc = 0x244184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244180u;
        // 0x244184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244188u;
        goto label_fallthrough_0x244180;
    }
    ctx->pc = 0x244180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244180u;
        // 0x244184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244180:
    ctx->pc = 0x244188u;
}
