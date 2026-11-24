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

// Function: sub_00261570
// Address: 0x261570 - 0x261690
void sub_00261570_0x261570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261570_0x261570");
#endif

    switch (ctx->pc) {
        case 0x261600u: goto label_261600;
        default: break;
    }

    ctx->pc = 0x261570u;

    // 0x261570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x261578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26157c: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x26157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x261580: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261584: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x261584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x261588: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261588u;
    {
        const bool branch_taken_0x261588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261588u;
        // 0x26158c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261588) {
            ctx->pc = 0x26159Cu;
            goto label_26159c;
        }
    }
    ctx->pc = 0x261590u;
    // 0x261590: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x261590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x261594: 0x384200fb  xori        $v0, $v0, 0xFB
    ctx->pc = 0x261594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)251);
    // 0x261598: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x261598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26159c:
    // 0x26159c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26159Cu;
    {
        const bool branch_taken_0x26159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26159c) {
            ctx->pc = 0x2615B0u;
            goto label_2615b0;
        }
    }
    ctx->pc = 0x2615A4u;
    // 0x2615a4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2615A4u;
    {
        const bool branch_taken_0x2615a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615A4u;
        // 0x2615a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615a4) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x2615ACu;
    // 0x2615ac: 0x0  nop
    ctx->pc = 0x2615acu;
    // NOP
label_2615b0:
    // 0x2615b0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2615b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2615b4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2615b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2615b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2615B8u;
    {
        const bool branch_taken_0x2615b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2615BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615B8u;
        // 0x2615bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615b8) {
            ctx->pc = 0x2615C8u;
            goto label_2615c8;
        }
    }
    ctx->pc = 0x2615C0u;
    // 0x2615c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2615C0u;
    {
        const bool branch_taken_0x2615c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2615c0) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x2615C8u;
label_2615c8:
    // 0x2615c8: 0x8e0229cc  lw          $v0, 0x29CC($s0)
    ctx->pc = 0x2615c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10700)));
    // 0x2615cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2615CCu;
    {
        const bool branch_taken_0x2615cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2615cc) {
            ctx->pc = 0x2615DCu;
            goto label_2615dc;
        }
    }
    ctx->pc = 0x2615D4u;
    // 0x2615d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2615D4u;
    {
        const bool branch_taken_0x2615d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615D4u;
        // 0x2615d8: 0x90420010  lbu         $v0, 0x10($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615d4) {
            ctx->pc = 0x2615E0u;
            goto label_2615e0;
        }
    }
    ctx->pc = 0x2615DCu;
label_2615dc:
    // 0x2615dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2615dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2615e0:
    // 0x2615e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2615e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2615e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2615E4u;
    {
        const bool branch_taken_0x2615e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2615e4) {
            ctx->pc = 0x2615F8u;
            goto label_2615f8;
        }
    }
    ctx->pc = 0x2615ECu;
    // 0x2615ec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2615ECu;
    {
        const bool branch_taken_0x2615ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615ECu;
        // 0x2615f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615ec) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x2615F4u;
    // 0x2615f4: 0x0  nop
    ctx->pc = 0x2615f4u;
    // NOP
label_2615f8:
    // 0x2615f8: 0xc0a522c  jal         func_2948B0
    ctx->pc = 0x2615F8u;
    SET_GPR_U32(ctx, 31, 0x261600u);
    ctx->pc = 0x2615FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615F8u;
    // 0x2615fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948B0u, 0x2615F8u, 0x261600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261600u;
label_261600:
    // 0x261600: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261604: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261604u;
    {
        const bool branch_taken_0x261604 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x261604) {
            ctx->pc = 0x261618u;
            goto label_261618;
        }
    }
    ctx->pc = 0x26160Cu;
    // 0x26160c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26160Cu;
    {
        const bool branch_taken_0x26160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26160Cu;
        // 0x261610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26160c) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x261614u;
    // 0x261614: 0x0  nop
    ctx->pc = 0x261614u;
    // NOP
label_261618:
    // 0x261618: 0x8e022ab0  lw          $v0, 0x2AB0($s0)
    ctx->pc = 0x261618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x26161c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26161Cu;
    {
        const bool branch_taken_0x26161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26161c) {
            ctx->pc = 0x261640u;
            goto label_261640;
        }
    }
    ctx->pc = 0x261624u;
    // 0x261624: 0x9042065c  lbu         $v0, 0x65C($v0)
    ctx->pc = 0x261624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x261628: 0x2442ff0e  addiu       $v0, $v0, -0xF2
    ctx->pc = 0x261628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967054));
    // 0x26162c: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x26162cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x261630: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x261630u;
    {
        const bool branch_taken_0x261630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x261630) {
            ctx->pc = 0x261640u;
            goto label_261640;
        }
    }
    ctx->pc = 0x261638u;
    // 0x261638: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x261638u;
    {
        const bool branch_taken_0x261638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261638u;
        // 0x26163c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261638) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x261640u;
label_261640:
    // 0x261640: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x261640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x261644: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261648u;
    {
        const bool branch_taken_0x261648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261648u;
        // 0x26164c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261648) {
            ctx->pc = 0x261658u;
            goto label_261658;
        }
    }
    ctx->pc = 0x261650u;
    // 0x261650: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x261650u;
    {
        const bool branch_taken_0x261650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261650) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x261658u;
label_261658:
    // 0x261658: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x261658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x26165c: 0x284200b0  slti        $v0, $v0, 0xB0
    ctx->pc = 0x26165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x261660: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261660u;
    {
        const bool branch_taken_0x261660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261660u;
        // 0x261664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261660) {
            ctx->pc = 0x261670u;
            goto label_261670;
        }
    }
    ctx->pc = 0x261668u;
    // 0x261668: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x261668u;
    {
        const bool branch_taken_0x261668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261668) {
            ctx->pc = 0x261680u;
            goto label_261680;
        }
    }
    ctx->pc = 0x261670u;
label_261670:
    // 0x261670: 0x920207d4  lbu         $v0, 0x7D4($s0)
    ctx->pc = 0x261670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2004)));
    // 0x261674: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x261678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26167c: 0x0  nop
    ctx->pc = 0x26167cu;
    // NOP
label_261680:
    // 0x261680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x261684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261688: 0x3e00008  jr          $ra
    ctx->pc = 0x261688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261688u;
        // 0x26168c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261690u;
}
