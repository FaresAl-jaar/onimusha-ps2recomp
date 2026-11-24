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

// Function: sub_003F00D0
// Address: 0x3f00d0 - 0x3f0164
void sub_003F00D0_0x3f00d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F00D0_0x3f00d0");
#endif

    switch (ctx->pc) {
        case 0x3f00fcu: goto label_3f00fc;
        case 0x3f011cu: goto label_3f011c;
        case 0x3f0134u: goto label_3f0134;
        case 0x3f0140u: goto label_3f0140;
        case 0x3f0150u: goto label_3f0150;
        default: break;
    }

    ctx->pc = 0x3f00d0u;

    // 0x3f00d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f00d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f00d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f00d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f00d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f00d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f00dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f00dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f00e0: 0x90822be4  lbu         $v0, 0x2BE4($a0)
    ctx->pc = 0x3f00e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11236)));
    // 0x3f00e4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F00E4u;
    {
        const bool branch_taken_0x3f00e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F00E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F00E4u;
        // 0x3f00e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f00e4) {
            ctx->pc = 0x3F0148u;
            goto label_3f0148;
        }
    }
    ctx->pc = 0x3F00ECu;
    // 0x3f00ec: 0x8e252b28  lw          $a1, 0x2B28($s1)
    ctx->pc = 0x3f00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11048)));
    // 0x3f00f0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f00f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f00f4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3F00F4u;
    SET_GPR_U32(ctx, 31, 0x3F00FCu);
    ctx->pc = 0x3F00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F00F4u;
    // 0x3f00f8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3F00F4u, 0x3F00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F00FCu;
label_3f00fc:
    // 0x3f00fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f00fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f0100: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F0100u;
    {
        const bool branch_taken_0x3f0100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f0100) {
            ctx->pc = 0x3F0138u;
            goto label_3f0138;
        }
    }
    ctx->pc = 0x3F0108u;
    // 0x3f0108: 0x82252b55  lb          $a1, 0x2B55($s1)
    ctx->pc = 0x3f0108u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11093)));
    // 0x3f010c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F010Cu;
    {
        const bool branch_taken_0x3f010c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3F0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F010Cu;
        // 0x3f0110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f010c) {
            ctx->pc = 0x3F0120u;
            goto label_3f0120;
        }
    }
    ctx->pc = 0x3F0114u;
    // 0x3f0114: 0xc0fa5e4  jal         func_3E9790
    ctx->pc = 0x3F0114u;
    SET_GPR_U32(ctx, 31, 0x3F011Cu);
    ctx->pc = 0x3E9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9790u, 0x3F0114u, 0x3F011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F011Cu;
label_3f011c:
    // 0x3f011c: 0x0  nop
    ctx->pc = 0x3f011cu;
    // NOP
label_3f0120:
    // 0x3f0120: 0x82252b54  lb          $a1, 0x2B54($s1)
    ctx->pc = 0x3f0120u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11092)));
    // 0x3f0124: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F0124u;
    {
        const bool branch_taken_0x3f0124 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3F0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0124u;
        // 0x3f0128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0124) {
            ctx->pc = 0x3F0138u;
            goto label_3f0138;
        }
    }
    ctx->pc = 0x3F012Cu;
    // 0x3f012c: 0xc0fa620  jal         func_3E9880
    ctx->pc = 0x3F012Cu;
    SET_GPR_U32(ctx, 31, 0x3F0134u);
    ctx->pc = 0x3E9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9880u, 0x3F012Cu, 0x3F0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0134u;
label_3f0134:
    // 0x3f0134: 0x0  nop
    ctx->pc = 0x3f0134u;
    // NOP
label_3f0138:
    // 0x3f0138: 0xc0fb61c  jal         func_3ED870
    ctx->pc = 0x3F0138u;
    SET_GPR_U32(ctx, 31, 0x3F0140u);
    ctx->pc = 0x3F013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0138u;
    // 0x3f013c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED870u, 0x3F0138u, 0x3F0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0140u;
label_3f0140:
    // 0x3f0140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f0144: 0xa2222be4  sb          $v0, 0x2BE4($s1)
    ctx->pc = 0x3f0144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11236), (uint8_t)GPR_U32(ctx, 2));
label_3f0148:
    // 0x3f0148: 0xc0a4d18  jal         func_293460
    ctx->pc = 0x3F0148u;
    SET_GPR_U32(ctx, 31, 0x3F0150u);
    ctx->pc = 0x3F014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0148u;
    // 0x3f014c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293460u, 0x3F0148u, 0x3F0150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0150u;
label_3f0150:
    // 0x3f0150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f0150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f0154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f0158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f0158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f015c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F015Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F015Cu;
        // 0x3f0160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F015Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0164u;
}
