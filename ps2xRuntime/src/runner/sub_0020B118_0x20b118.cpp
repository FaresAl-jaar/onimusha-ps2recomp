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

// Function: sub_0020B118
// Address: 0x20b118 - 0x20b174
void sub_0020B118_0x20b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B118_0x20b118");
#endif

    switch (ctx->pc) {
        case 0x20b118u: goto label_20b118;
        case 0x20b11cu: goto label_20b11c;
        case 0x20b120u: goto label_20b120;
        case 0x20b124u: goto label_20b124;
        case 0x20b128u: goto label_20b128;
        case 0x20b12cu: goto label_20b12c;
        case 0x20b130u: goto label_20b130;
        case 0x20b134u: goto label_20b134;
        case 0x20b138u: goto label_20b138;
        case 0x20b13cu: goto label_20b13c;
        case 0x20b140u: goto label_20b140;
        case 0x20b144u: goto label_20b144;
        case 0x20b148u: goto label_20b148;
        case 0x20b14cu: goto label_20b14c;
        case 0x20b150u: goto label_20b150;
        case 0x20b154u: goto label_20b154;
        case 0x20b158u: goto label_20b158;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b160u: goto label_20b160;
        case 0x20b164u: goto label_20b164;
        case 0x20b168u: goto label_20b168;
        case 0x20b16cu: goto label_20b16c;
        case 0x20b170u: goto label_20b170;
        default: break;
    }

    ctx->pc = 0x20b118u;

label_20b118:
    // 0x20b118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b11c:
    // 0x20b11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b120:
    // 0x20b120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b124:
    // 0x20b124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20b128:
    // 0x20b128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b12c:
    // 0x20b12c: 0xc082d4c  jal         func_20B530
label_20b130:
    if (ctx->pc == 0x20B130u) {
        ctx->pc = 0x20B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B12Cu;
        // 0x20b130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B134u;
        goto label_20b134;
    }
    ctx->pc = 0x20B12Cu;
    SET_GPR_U32(ctx, 31, 0x20B134u);
    ctx->pc = 0x20B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B12Cu;
    // 0x20b130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B12Cu, 0x20B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B134u;
label_20b134:
    // 0x20b134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b138:
    // 0x20b138: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_20b13c:
    if (ctx->pc == 0x20B13Cu) {
        ctx->pc = 0x20B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B138u;
        // 0x20b13c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B140u;
        goto label_20b140;
    }
    ctx->pc = 0x20B138u;
    {
        const bool branch_taken_0x20b138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b138) {
            ctx->pc = 0x20B13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B138u;
            // 0x20b13c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B140u;
label_20b140:
    // 0x20b140: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b144:
    // 0x20b144: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20b148:
    if (ctx->pc == 0x20B148u) {
        ctx->pc = 0x20B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B144u;
        // 0x20b148: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B14Cu;
        goto label_20b14c;
    }
    ctx->pc = 0x20B144u;
    {
        const bool branch_taken_0x20b144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B144u;
        // 0x20b148: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b144) {
            ctx->pc = 0x20B160u;
            goto label_20b160;
        }
    }
    ctx->pc = 0x20B14Cu;
label_20b14c:
    // 0x20b14c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_20b150:
    // 0x20b150: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20b154:
    if (ctx->pc == 0x20B154u) {
        ctx->pc = 0x20B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B150u;
        // 0x20b154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B158u;
        goto label_20b158;
    }
    ctx->pc = 0x20B150u;
    {
        const bool branch_taken_0x20b150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b150) {
            ctx->pc = 0x20B154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B150u;
            // 0x20b154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B164u;
            goto label_20b164;
        }
    }
    ctx->pc = 0x20B158u;
label_20b158:
    // 0x20b158: 0x40f809  jalr        $v0
label_20b15c:
    if (ctx->pc == 0x20B15Cu) {
        ctx->pc = 0x20B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B158u;
        // 0x20b15c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B160u;
        goto label_20b160;
    }
    ctx->pc = 0x20B158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B160u);
        ctx->pc = 0x20B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B158u;
        // 0x20b15c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B158u, 0x20B160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B160u;
label_20b160:
    // 0x20b160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b164:
    // 0x20b164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b168:
    // 0x20b168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b16c:
    // 0x20b16c: 0x3e00008  jr          $ra
label_20b170:
    if (ctx->pc == 0x20B170u) {
        ctx->pc = 0x20B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B16Cu;
        // 0x20b170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B174u;
        goto label_fallthrough_0x20b16c;
    }
    ctx->pc = 0x20B16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B16Cu;
        // 0x20b170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b16c:
    ctx->pc = 0x20B174u;
}
