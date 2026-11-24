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

// Function: sub_003032E0
// Address: 0x3032e0 - 0x3033e4
void sub_003032E0_0x3032e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003032E0_0x3032e0");
#endif

    switch (ctx->pc) {
        case 0x303378u: goto label_303378;
        case 0x3033d4u: goto label_3033d4;
        default: break;
    }

    ctx->pc = 0x3032e0u;

label_3032e0:
    // 0x3032e0: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x3032e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3032e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3032e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3032e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3032e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3032ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3032ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3032f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3032F0u;
    {
        const bool branch_taken_0x3032f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3032F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032F0u;
        // 0x3032f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032f0) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x3032F8u;
    // 0x3032f8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3032f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3032fc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3032fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x303300: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x303300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x303304: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x303304u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x303308: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x303308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30330c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303310: 0x94630062  lhu         $v1, 0x62($v1)
    ctx->pc = 0x303310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 98)));
    // 0x303314: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x303314u;
    {
        const bool branch_taken_0x303314 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x303314) {
            ctx->pc = 0x303320u;
            goto label_303320;
        }
    }
    ctx->pc = 0x30331Cu;
    // 0x30331c: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x30331cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_303320:
    // 0x303320: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x303320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x303324: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x303324u;
    {
        const bool branch_taken_0x303324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x303328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303324u;
        // 0x303328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303324) {
            ctx->pc = 0x303340u;
            goto label_303340;
        }
    }
    ctx->pc = 0x30332Cu;
    // 0x30332c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x30332cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x303330: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x303330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x303334: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x303334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x303338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x303338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30333c: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x30333cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_303340:
    // 0x303340: 0x10e00025  beqz        $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x303340u;
    {
        const bool branch_taken_0x303340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x303340) {
            ctx->pc = 0x3033D8u;
            goto label_3033d8;
        }
    }
    ctx->pc = 0x303348u;
    // 0x303348: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x303348u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30334c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x30334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x303350: 0x30050007  andi        $a1, $zero, 0x7
    ctx->pc = 0x303350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x303354: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x303354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x303358: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x303358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30335c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x30335cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x303360: 0xa4e00062  sh          $zero, 0x62($a3)
    ctx->pc = 0x303360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x303364: 0x8c851c00  lw          $a1, 0x1C00($a0)
    ctx->pc = 0x303364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7168)));
    // 0x303368: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x303368u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x30336c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x30336Cu;
    {
        const bool branch_taken_0x30336c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30336Cu;
        // 0x303370: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30336c) {
            ctx->pc = 0x3033C0u;
            goto label_3033c0;
        }
    }
    ctx->pc = 0x303374u;
    // 0x303374: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x303374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_303378:
    // 0x303378: 0x8cc31c04  lw          $v1, 0x1C04($a2)
    ctx->pc = 0x303378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7172)));
    // 0x30337c: 0x1467000c  bne         $v1, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x30337Cu;
    {
        const bool branch_taken_0x30337c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x30337c) {
            ctx->pc = 0x3033B0u;
            goto label_3033b0;
        }
    }
    ctx->pc = 0x303384u;
    // 0x303384: 0x8c851c00  lw          $a1, 0x1C00($a0)
    ctx->pc = 0x303384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7168)));
    // 0x303388: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x303388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x30338c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303390: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x303390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x303394: 0xac851c00  sw          $a1, 0x1C00($a0)
    ctx->pc = 0x303394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7168), GPR_U32(ctx, 5));
    // 0x303398: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x303398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30339c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x30339cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3033a0: 0x8ca51c04  lw          $a1, 0x1C04($a1)
    ctx->pc = 0x3033a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7172)));
    // 0x3033a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3033A4u;
    {
        const bool branch_taken_0x3033a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3033A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033A4u;
        // 0x3033a8: 0xac651c04  sw          $a1, 0x1C04($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033a4) {
            ctx->pc = 0x3033C0u;
            goto label_3033c0;
        }
    }
    ctx->pc = 0x3033ACu;
    // 0x3033ac: 0x0  nop
    ctx->pc = 0x3033acu;
    // NOP
label_3033b0:
    // 0x3033b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3033b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3033b4: 0x105182b  sltu        $v1, $t0, $a1
    ctx->pc = 0x3033b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3033b8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3033B8u;
    {
        const bool branch_taken_0x3033b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3033BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033B8u;
        // 0x3033bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3033b8) {
            ctx->pc = 0x303378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303378;
        }
    }
    ctx->pc = 0x3033C0u;
label_3033c0:
    // 0x3033c0: 0x8ce50064  lw          $a1, 0x64($a3)
    ctx->pc = 0x3033c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
    // 0x3033c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3033C4u;
    {
        const bool branch_taken_0x3033c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033c4) {
            ctx->pc = 0x3033D8u;
            goto label_3033d8;
        }
    }
    ctx->pc = 0x3033CCu;
    // 0x3033cc: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x3033CCu;
    SET_GPR_U32(ctx, 31, 0x3033D4u);
    ctx->pc = 0x3033D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033CCu;
    // 0x3033d0: 0xace00064  sw          $zero, 0x64($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    goto label_3032e0;
    ctx->pc = 0x3033D4u;
label_3033d4:
    // 0x3033d4: 0x0  nop
    ctx->pc = 0x3033d4u;
    // NOP
label_3033d8:
    // 0x3033d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3033d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3033dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3033DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3033E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3033DCu;
        // 0x3033e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3033DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3033E4u;
}
