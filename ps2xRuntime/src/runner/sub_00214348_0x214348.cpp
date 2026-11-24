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

// Function: sub_00214348
// Address: 0x214348 - 0x214400
void sub_00214348_0x214348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214348_0x214348");
#endif

    switch (ctx->pc) {
        case 0x214370u: goto label_214370;
        case 0x214394u: goto label_214394;
        case 0x2143e4u: goto label_2143e4;
        default: break;
    }

    ctx->pc = 0x214348u;

    // 0x214348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21434c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x214350: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x214350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x214354: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214358: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x214358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21435c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21435cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214360: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x214360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x214364: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x214364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x214368: 0xc085202  jal         func_214808
    ctx->pc = 0x214368u;
    SET_GPR_U32(ctx, 31, 0x214370u);
    ctx->pc = 0x21436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214368u;
    // 0x21436c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214808u, 0x214368u, 0x214370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214370u;
label_214370:
    // 0x214370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x214370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214374: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x214374u;
    {
        const bool branch_taken_0x214374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x214374) {
            ctx->pc = 0x214378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214374u;
            // 0x214378: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2143E8u;
            goto label_2143e8;
        }
    }
    ctx->pc = 0x21437Cu;
    // 0x21437c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214380: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x214380u;
    {
        const bool branch_taken_0x214380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214380) {
            ctx->pc = 0x214384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214380u;
            // 0x214384: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2143E8u;
            goto label_2143e8;
        }
    }
    ctx->pc = 0x214388u;
    // 0x214388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21438c: 0xc07f4a8  jal         func_1FD2A0
    ctx->pc = 0x21438Cu;
    SET_GPR_U32(ctx, 31, 0x214394u);
    ctx->pc = 0x214390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21438Cu;
    // 0x214390: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2A0u, 0x21438Cu, 0x214394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214394u;
label_214394:
    // 0x214394: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214398: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x214398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21439c: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x21439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2143a0: 0x28e300b1  slti        $v1, $a3, 0xB1
    ctx->pc = 0x2143a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x2143a4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2143a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2143a8: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x2143a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x2143ac: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2143acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2143b0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2143b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143b4: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2143B4u;
    {
        const bool branch_taken_0x2143b4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2143B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143B4u;
        // 0x2143b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143b4) {
            ctx->pc = 0x2143C8u;
            goto label_2143c8;
        }
    }
    ctx->pc = 0x2143BCu;
    // 0x2143bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2143BCu;
    {
        const bool branch_taken_0x2143bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143BCu;
        // 0x2143c0: 0xac670160  sw          $a3, 0x160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143bc) {
            ctx->pc = 0x2143DCu;
            goto label_2143dc;
        }
    }
    ctx->pc = 0x2143C4u;
    // 0x2143c4: 0x0  nop
    ctx->pc = 0x2143c4u;
    // NOP
label_2143c8:
    // 0x2143c8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2143c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2143cc: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2143CCu;
    {
        const bool branch_taken_0x2143cc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2143cc) {
            ctx->pc = 0x2143D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2143CCu;
            // 0x2143d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2143E8u;
            goto label_2143e8;
        }
    }
    ctx->pc = 0x2143D4u;
    // 0x2143d4: 0xac670164  sw          $a3, 0x164($v1)
    ctx->pc = 0x2143d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 7));
    // 0x2143d8: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x2143d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_2143dc:
    // 0x2143dc: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x2143DCu;
    SET_GPR_U32(ctx, 31, 0x2143E4u);
    ctx->pc = 0x2143E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2143DCu;
    // 0x2143e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x2143DCu, 0x2143E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143E4u;
label_2143e4:
    // 0x2143e4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2143e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2143e8:
    // 0x2143e8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2143e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2143ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2143ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2143f0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2143f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2143f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2143f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2143f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2143F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2143FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143F8u;
        // 0x2143fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2143F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214400u;
}
