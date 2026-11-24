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

// Function: sub_0023B108
// Address: 0x23b108 - 0x23b170
void sub_0023B108_0x23b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B108_0x23b108");
#endif

    switch (ctx->pc) {
        case 0x23b108u: goto label_23b108;
        case 0x23b10cu: goto label_23b10c;
        case 0x23b110u: goto label_23b110;
        case 0x23b114u: goto label_23b114;
        case 0x23b118u: goto label_23b118;
        case 0x23b11cu: goto label_23b11c;
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        default: break;
    }

    ctx->pc = 0x23b108u;

label_23b108:
    // 0x23b108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23b10c:
    // 0x23b10c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_23b110:
    if (ctx->pc == 0x23B110u) {
        ctx->pc = 0x23B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B10Cu;
        // 0x23b110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B114u;
        goto label_23b114;
    }
    ctx->pc = 0x23B10Cu;
    {
        const bool branch_taken_0x23b10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B10Cu;
        // 0x23b110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b10c) {
            ctx->pc = 0x23B11Cu;
            goto label_23b11c;
        }
    }
    ctx->pc = 0x23B114u;
label_23b114:
    // 0x23b114: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
label_23b118:
    if (ctx->pc == 0x23B118u) {
        ctx->pc = 0x23B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B114u;
        // 0x23b118: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B11Cu;
        goto label_23b11c;
    }
    ctx->pc = 0x23B114u;
    {
        const bool branch_taken_0x23b114 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x23B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B114u;
        // 0x23b118: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b114) {
            ctx->pc = 0x23B130u;
            goto label_23b130;
        }
    }
    ctx->pc = 0x23B11Cu;
label_23b11c:
    // 0x23b11c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23b120:
    // 0x23b120: 0xc08baa4  jal         func_22EA90
label_23b124:
    if (ctx->pc == 0x23B124u) {
        ctx->pc = 0x23B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B120u;
        // 0x23b124: 0x2484b428  addiu       $a0, $a0, -0x4BD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B128u;
        goto label_23b128;
    }
    ctx->pc = 0x23B120u;
    SET_GPR_U32(ctx, 31, 0x23B128u);
    ctx->pc = 0x23B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B120u;
    // 0x23b124: 0x2484b428  addiu       $a0, $a0, -0x4BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B120u, 0x23B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B128u;
label_23b128:
    // 0x23b128: 0x1000000e  b           . + 4 + (0xE << 2)
label_23b12c:
    if (ctx->pc == 0x23B12Cu) {
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B130u;
        goto label_23b130;
    }
    ctx->pc = 0x23B128u;
    {
        const bool branch_taken_0x23b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b128) {
            ctx->pc = 0x23B164u;
            goto label_23b164;
        }
    }
    ctx->pc = 0x23B130u;
label_23b130:
    // 0x23b130: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23b134:
    // 0x23b134: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_23b138:
    // 0x23b138: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23b13c:
    if (ctx->pc == 0x23B13Cu) {
        ctx->pc = 0x23B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B138u;
        // 0x23b13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B140u;
        goto label_23b140;
    }
    ctx->pc = 0x23B138u;
    {
        const bool branch_taken_0x23b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B138u;
        // 0x23b13c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b138) {
            ctx->pc = 0x23B160u;
            goto label_23b160;
        }
    }
    ctx->pc = 0x23B140u;
label_23b140:
    // 0x23b140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23b144:
    // 0x23b144: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23b148:
    // 0x23b148: 0x40f809  jalr        $v0
label_23b14c:
    if (ctx->pc == 0x23B14Cu) {
        ctx->pc = 0x23B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B148u;
        // 0x23b14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B150u;
        goto label_23b150;
    }
    ctx->pc = 0x23B148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B150u);
        ctx->pc = 0x23B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B148u;
        // 0x23b14c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B148u, 0x23B150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B150u;
label_23b150:
    // 0x23b150: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_23b154:
    // 0x23b154: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b158:
    // 0x23b158: 0x10000002  b           . + 4 + (0x2 << 2)
label_23b15c:
    if (ctx->pc == 0x23B15Cu) {
        ctx->pc = 0x23B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B158u;
        // 0x23b15c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B160u;
        goto label_23b160;
    }
    ctx->pc = 0x23B158u;
    {
        const bool branch_taken_0x23b158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B158u;
        // 0x23b15c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b158) {
            ctx->pc = 0x23B164u;
            goto label_23b164;
        }
    }
    ctx->pc = 0x23B160u;
label_23b160:
    // 0x23b160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b164:
    // 0x23b164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b168:
    // 0x23b168: 0x3e00008  jr          $ra
label_23b16c:
    if (ctx->pc == 0x23B16Cu) {
        ctx->pc = 0x23B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B168u;
        // 0x23b16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B170u;
        goto label_fallthrough_0x23b168;
    }
    ctx->pc = 0x23B168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B168u;
        // 0x23b16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b168:
    ctx->pc = 0x23B170u;
}
