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

// Function: sub_0020D4F8
// Address: 0x20d4f8 - 0x20d614
void sub_0020D4F8_0x20d4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D4F8_0x20d4f8");
#endif

    switch (ctx->pc) {
        case 0x20d558u: goto label_20d558;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d588u: goto label_20d588;
        case 0x20d5d8u: goto label_20d5d8;
        default: break;
    }

    ctx->pc = 0x20d4f8u;

    // 0x20d4f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20d4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20d4fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d500: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20d500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d504: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d508: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x20d508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d50c: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x20d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x20d510: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d514: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x20d514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20d518: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d51c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20d520: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20d520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d524: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20d528: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20d528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d52c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x20d52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x20d530: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x20d530u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d534: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d538: 0x2869021  addu        $s2, $s4, $a2
    ctx->pc = 0x20d538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x20d53c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x20d53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x20d540: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20d540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d544: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20D544u;
    {
        const bool branch_taken_0x20d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D544u;
        // 0x20d548: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d544) {
            ctx->pc = 0x20D5B8u;
            goto label_20d5b8;
        }
    }
    ctx->pc = 0x20D54Cu;
    // 0x20d54c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x20d54cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d550: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20d550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d554: 0x0  nop
    ctx->pc = 0x20d554u;
    // NOP
label_20d558:
    // 0x20d558: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x20d558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d55c:
    // 0x20d55c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x20d55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20d560: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D560u;
    {
        const bool branch_taken_0x20d560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d560) {
            ctx->pc = 0x20D5A0u;
            goto label_20d5a0;
        }
    }
    ctx->pc = 0x20D568u;
    // 0x20d568: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x20d568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d56c: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20D56Cu;
    {
        const bool branch_taken_0x20d56c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x20d56c) {
            ctx->pc = 0x20D570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D56Cu;
            // 0x20d570: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D55Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d55c;
        }
    }
    ctx->pc = 0x20D574u;
    // 0x20d574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d578: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x20d578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20d57c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20d57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d580: 0xc08f070  jal         func_23C1C0
    ctx->pc = 0x20D580u;
    SET_GPR_U32(ctx, 31, 0x20D588u);
    ctx->pc = 0x20D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D580u;
    // 0x20d584: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C1C0u, 0x20D580u, 0x20D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D588u;
label_20d588:
    // 0x20d588: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D588u;
    {
        const bool branch_taken_0x20d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D588u;
        // 0x20d58c: 0x2b0102b  sltu        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d588) {
            ctx->pc = 0x20D5A0u;
            goto label_20d5a0;
        }
    }
    ctx->pc = 0x20D590u;
    // 0x20d590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D590u;
    {
        const bool branch_taken_0x20d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d590) {
            ctx->pc = 0x20D5A0u;
            goto label_20d5a0;
        }
    }
    ctx->pc = 0x20D598u;
    // 0x20d598: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x20d598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d59c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x20d59cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d5a0:
    // 0x20d5a0: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D5A0u;
    {
        const bool branch_taken_0x20d5a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5A0u;
        // 0x20d5a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5a0) {
            ctx->pc = 0x20D5E4u;
            goto label_20d5e4;
        }
    }
    ctx->pc = 0x20D5A8u;
    // 0x20d5a8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x20d5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x20d5ac: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x20d5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x20d5b0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20D5B0u;
    {
        const bool branch_taken_0x20d5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d5b0) {
            ctx->pc = 0x20D5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5B0u;
            // 0x20d5b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d558;
        }
    }
    ctx->pc = 0x20D5B8u;
label_20d5b8:
    // 0x20d5b8: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x20D5B8u;
    {
        const bool branch_taken_0x20d5b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5B8u;
        // 0x20d5bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5b8) {
            ctx->pc = 0x20D5E4u;
            goto label_20d5e4;
        }
    }
    ctx->pc = 0x20D5C0u;
    // 0x20d5c0: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D5C0u;
    {
        const bool branch_taken_0x20d5c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d5c0) {
            ctx->pc = 0x20D5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5C0u;
            // 0x20d5c4: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D5E0u;
            goto label_20d5e0;
        }
    }
    ctx->pc = 0x20D5C8u;
    // 0x20d5c8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20d5cc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5d0: 0xc0848e0  jal         func_212380
    ctx->pc = 0x20D5D0u;
    SET_GPR_U32(ctx, 31, 0x20D5D8u);
    ctx->pc = 0x20D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5D0u;
    // 0x20d5d4: 0x34a50c0a  ori         $a1, $a1, 0xC0A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3082);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20D5D0u, 0x20D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5D8u;
label_20d5d8:
    // 0x20d5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D5D8u;
    {
        const bool branch_taken_0x20d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5D8u;
        // 0x20d5dc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5d8) {
            ctx->pc = 0x20D5E4u;
            goto label_20d5e4;
        }
    }
    ctx->pc = 0x20D5E0u;
label_20d5e0:
    // 0x20d5e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20d5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d5e4:
    // 0x20d5e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d5e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d5e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d5e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d5ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20d5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d5f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20d5f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d5f4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20d5f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d5f8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20d5f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d5fc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20d5fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d600: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20d600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20d604: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20d604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d608: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20d608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20d60c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D60Cu;
        // 0x20d610: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D614u;
}
