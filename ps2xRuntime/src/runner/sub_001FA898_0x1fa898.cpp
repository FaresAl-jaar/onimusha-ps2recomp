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

// Function: sub_001FA898
// Address: 0x1fa898 - 0x1fa96c
void sub_001FA898_0x1fa898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA898_0x1fa898");
#endif

    switch (ctx->pc) {
        case 0x1fa898u: goto label_1fa898;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8a0u: goto label_1fa8a0;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8a8u: goto label_1fa8a8;
        case 0x1fa8acu: goto label_1fa8ac;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8bcu: goto label_1fa8bc;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8c4u: goto label_1fa8c4;
        case 0x1fa8c8u: goto label_1fa8c8;
        case 0x1fa8ccu: goto label_1fa8cc;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa8d4u: goto label_1fa8d4;
        case 0x1fa8d8u: goto label_1fa8d8;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8e4u: goto label_1fa8e4;
        case 0x1fa8e8u: goto label_1fa8e8;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa8f0u: goto label_1fa8f0;
        case 0x1fa8f4u: goto label_1fa8f4;
        case 0x1fa8f8u: goto label_1fa8f8;
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa900u: goto label_1fa900;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa908u: goto label_1fa908;
        case 0x1fa90cu: goto label_1fa90c;
        case 0x1fa910u: goto label_1fa910;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa918u: goto label_1fa918;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa924u: goto label_1fa924;
        case 0x1fa928u: goto label_1fa928;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa930u: goto label_1fa930;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa938u: goto label_1fa938;
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa940u: goto label_1fa940;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa948u: goto label_1fa948;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa950u: goto label_1fa950;
        case 0x1fa954u: goto label_1fa954;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa95cu: goto label_1fa95c;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa964u: goto label_1fa964;
        case 0x1fa968u: goto label_1fa968;
        default: break;
    }

    ctx->pc = 0x1fa898u;

label_1fa898:
    // 0x1fa898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fa89c:
    // 0x1fa89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fa8a0:
    // 0x1fa8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8a4:
    // 0x1fa8a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fa8a8:
    // 0x1fa8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fa8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8ac:
    // 0x1fa8ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fa8b0:
    // 0x1fa8b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fa8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1fa8b4:
    // 0x1fa8b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1fa8b8:
    // 0x1fa8b8: 0x90436294  lbu         $v1, 0x6294($v0)
    ctx->pc = 0x1fa8b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25236)));
label_1fa8bc:
    // 0x1fa8bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1fa8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fa8c0:
    // 0x1fa8c0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
label_1fa8c4:
    if (ctx->pc == 0x1FA8C4u) {
        ctx->pc = 0x1FA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8C0u;
        // 0x1fa8c4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8C8u;
        goto label_1fa8c8;
    }
    ctx->pc = 0x1FA8C0u;
    {
        const bool branch_taken_0x1fa8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8C0u;
        // 0x1fa8c4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8c0) {
            ctx->pc = 0x1FA8E0u;
            goto label_1fa8e0;
        }
    }
    ctx->pc = 0x1FA8C8u;
label_1fa8c8:
    // 0x1fa8c8: 0x2401ffff  addiu       $at, $zero, -0x1
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fa8cc:
    // 0x1fa8cc: 0x20f809  jalr        $at
label_1fa8d0:
    if (ctx->pc == 0x1FA8D0u) {
        ctx->pc = 0x1FA8D4u;
        goto label_1fa8d4;
    }
    ctx->pc = 0x1FA8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1FA8D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8CCu, 0x1FA8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA8D4u;
label_1fa8d4:
    // 0x1fa8d4: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_1fa8d8:
    if (ctx->pc == 0x1FA8D8u) {
        ctx->pc = 0x1FA8DCu;
        goto label_1fa8dc;
    }
    ctx->pc = 0x1FA8D4u;
    {
        const bool branch_taken_0x1fa8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa8d4) {
            ctx->pc = 0x1FA8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa8c8;
        }
    }
    ctx->pc = 0x1FA8DCu;
label_1fa8dc:
    // 0x1fa8dc: 0x0  nop
    ctx->pc = 0x1fa8dcu;
    // NOP
label_1fa8e0:
    // 0x1fa8e0: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
label_1fa8e4:
    // 0x1fa8e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1fa8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_1fa8e8:
    // 0x1fa8e8: 0x24633ed8  addiu       $v1, $v1, 0x3ED8
    ctx->pc = 0x1fa8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16088));
label_1fa8ec:
    // 0x1fa8ec: 0x244261f8  addiu       $v0, $v0, 0x61F8
    ctx->pc = 0x1fa8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25080));
label_1fa8f0:
    // 0x1fa8f0: 0xc07d45e  jal         func_1F5178
label_1fa8f4:
    if (ctx->pc == 0x1FA8F4u) {
        ctx->pc = 0x1FA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8F0u;
        // 0x1fa8f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8F8u;
        goto label_1fa8f8;
    }
    ctx->pc = 0x1FA8F0u;
    SET_GPR_U32(ctx, 31, 0x1FA8F8u);
    ctx->pc = 0x1FA8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8F0u;
    // 0x1fa8f4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5178u, 0x1FA8F0u, 0x1FA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8F8u;
label_1fa8f8:
    // 0x1fa8f8: 0xc07d5a8  jal         func_1F56A0
label_1fa8fc:
    if (ctx->pc == 0x1FA8FCu) {
        ctx->pc = 0x1FA900u;
        goto label_1fa900;
    }
    ctx->pc = 0x1FA8F8u;
    SET_GPR_U32(ctx, 31, 0x1FA900u);
    ctx->pc = 0x1F56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F56A0u, 0x1FA8F8u, 0x1FA900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA900u;
label_1fa900:
    // 0x1fa900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa904:
    // 0x1fa904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fa908:
    // 0x1fa908: 0xc07ea5c  jal         func_1FA970
label_1fa90c:
    if (ctx->pc == 0x1FA90Cu) {
        ctx->pc = 0x1FA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA908u;
        // 0x1fa90c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA910u;
        goto label_1fa910;
    }
    ctx->pc = 0x1FA908u;
    SET_GPR_U32(ctx, 31, 0x1FA910u);
    ctx->pc = 0x1FA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA908u;
    // 0x1fa90c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA970u, 0x1FA908u, 0x1FA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA910u;
label_1fa910:
    // 0x1fa910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa914:
    // 0x1fa914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fa918:
    // 0x1fa918: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa91c:
    // 0x1fa91c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fa91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fa920:
    // 0x1fa920: 0x807ea4a  j           func_1FA928
label_1fa924:
    if (ctx->pc == 0x1FA924u) {
        ctx->pc = 0x1FA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA920u;
        // 0x1fa924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA928u;
        goto label_1fa928;
    }
    ctx->pc = 0x1FA920u;
    ctx->pc = 0x1FA924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA920u;
    // 0x1fa924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA928u;
    goto label_1fa928;
    ctx->pc = 0x1FA928u;
label_1fa928:
    // 0x1fa928: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
label_1fa92c:
    // 0x1fa92c: 0x24423ee0  addiu       $v0, $v0, 0x3EE0
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16096));
label_1fa930:
    // 0x1fa930: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1fa930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1fa934:
    // 0x1fa934: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
label_1fa938:
    if (ctx->pc == 0x1FA938u) {
        ctx->pc = 0x1FA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA934u;
        // 0x1fa938: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA93Cu;
        goto label_1fa93c;
    }
    ctx->pc = 0x1FA934u;
    {
        const bool branch_taken_0x1fa934 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1FA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA934u;
        // 0x1fa938: 0x8c430044  lw          $v1, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa934) {
            ctx->pc = 0x1FA964u;
            goto label_1fa964;
        }
    }
    ctx->pc = 0x1FA93Cu;
label_1fa93c:
    // 0x1fa93c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fa93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa940:
    // 0x1fa940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fa940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa944:
    // 0x1fa944: 0x0  nop
    ctx->pc = 0x1fa944u;
    // NOP
label_1fa948:
    // 0x1fa948: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fa94c:
    // 0x1fa94c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fa94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1fa950:
    // 0x1fa950: 0x0  nop
    ctx->pc = 0x1fa950u;
    // NOP
label_1fa954:
    // 0x1fa954: 0x0  nop
    ctx->pc = 0x1fa954u;
    // NOP
label_1fa958:
    // 0x1fa958: 0x0  nop
    ctx->pc = 0x1fa958u;
    // NOP
label_1fa95c:
    // 0x1fa95c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1fa960:
    if (ctx->pc == 0x1FA960u) {
        ctx->pc = 0x1FA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA95Cu;
        // 0x1fa960: 0x24630640  addiu       $v1, $v1, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA964u;
        goto label_1fa964;
    }
    ctx->pc = 0x1FA95Cu;
    {
        const bool branch_taken_0x1fa95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA95Cu;
        // 0x1fa960: 0x24630640  addiu       $v1, $v1, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa95c) {
            ctx->pc = 0x1FA948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa948;
        }
    }
    ctx->pc = 0x1FA964u;
label_1fa964:
    // 0x1fa964: 0x3e00008  jr          $ra
label_1fa968:
    if (ctx->pc == 0x1FA968u) {
        ctx->pc = 0x1FA96Cu;
        goto label_fallthrough_0x1fa964;
    }
    ctx->pc = 0x1FA964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fa964:
    ctx->pc = 0x1FA96Cu;
}
