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

// Function: sub_0024DEC8
// Address: 0x24dec8 - 0x24dfa8
void sub_0024DEC8_0x24dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DEC8_0x24dec8");
#endif

    switch (ctx->pc) {
        case 0x24dec8u: goto label_24dec8;
        case 0x24deccu: goto label_24decc;
        case 0x24ded0u: goto label_24ded0;
        case 0x24ded4u: goto label_24ded4;
        case 0x24ded8u: goto label_24ded8;
        case 0x24dedcu: goto label_24dedc;
        case 0x24dee0u: goto label_24dee0;
        case 0x24dee4u: goto label_24dee4;
        case 0x24dee8u: goto label_24dee8;
        case 0x24deecu: goto label_24deec;
        case 0x24def0u: goto label_24def0;
        case 0x24def4u: goto label_24def4;
        case 0x24def8u: goto label_24def8;
        case 0x24defcu: goto label_24defc;
        case 0x24df00u: goto label_24df00;
        case 0x24df04u: goto label_24df04;
        case 0x24df08u: goto label_24df08;
        case 0x24df0cu: goto label_24df0c;
        case 0x24df10u: goto label_24df10;
        case 0x24df14u: goto label_24df14;
        case 0x24df18u: goto label_24df18;
        case 0x24df1cu: goto label_24df1c;
        case 0x24df20u: goto label_24df20;
        case 0x24df24u: goto label_24df24;
        case 0x24df28u: goto label_24df28;
        case 0x24df2cu: goto label_24df2c;
        case 0x24df30u: goto label_24df30;
        case 0x24df34u: goto label_24df34;
        case 0x24df38u: goto label_24df38;
        case 0x24df3cu: goto label_24df3c;
        case 0x24df40u: goto label_24df40;
        case 0x24df44u: goto label_24df44;
        case 0x24df48u: goto label_24df48;
        case 0x24df4cu: goto label_24df4c;
        case 0x24df50u: goto label_24df50;
        case 0x24df54u: goto label_24df54;
        case 0x24df58u: goto label_24df58;
        case 0x24df5cu: goto label_24df5c;
        case 0x24df60u: goto label_24df60;
        case 0x24df64u: goto label_24df64;
        case 0x24df68u: goto label_24df68;
        case 0x24df6cu: goto label_24df6c;
        case 0x24df70u: goto label_24df70;
        case 0x24df74u: goto label_24df74;
        case 0x24df78u: goto label_24df78;
        case 0x24df7cu: goto label_24df7c;
        case 0x24df80u: goto label_24df80;
        case 0x24df84u: goto label_24df84;
        case 0x24df88u: goto label_24df88;
        case 0x24df8cu: goto label_24df8c;
        case 0x24df90u: goto label_24df90;
        case 0x24df94u: goto label_24df94;
        case 0x24df98u: goto label_24df98;
        case 0x24df9cu: goto label_24df9c;
        case 0x24dfa0u: goto label_24dfa0;
        case 0x24dfa4u: goto label_24dfa4;
        default: break;
    }

    ctx->pc = 0x24dec8u;

label_24dec8:
    // 0x24dec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24decc:
    // 0x24decc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_24ded0:
    // 0x24ded0: 0x3c12004d  lui         $s2, 0x4D
    ctx->pc = 0x24ded0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)77 << 16));
label_24ded4:
    // 0x24ded4: 0x8e4274d0  lw          $v0, 0x74D0($s2)
    ctx->pc = 0x24ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29904)));
label_24ded8:
    // 0x24ded8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_24dedc:
    // 0x24dedc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24dedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dee0:
    // 0x24dee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24dee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24dee4:
    // 0x24dee4: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_24dee8:
    if (ctx->pc == 0x24DEE8u) {
        ctx->pc = 0x24DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEE4u;
        // 0x24dee8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEECu;
        goto label_24deec;
    }
    ctx->pc = 0x24DEE4u;
    {
        const bool branch_taken_0x24dee4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEE4u;
        // 0x24dee8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dee4) {
            ctx->pc = 0x24DF60u;
            goto label_24df60;
        }
    }
    ctx->pc = 0x24DEECu;
label_24deec:
    // 0x24deec: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24def0:
    // 0x24def0: 0x24507530  addiu       $s0, $v0, 0x7530
    ctx->pc = 0x24def0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30000));
label_24def4:
    // 0x24def4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24def8:
    // 0x24def8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24defc:
    if (ctx->pc == 0x24DEFCu) {
        ctx->pc = 0x24DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEF8u;
        // 0x24defc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF00u;
        goto label_24df00;
    }
    ctx->pc = 0x24DEF8u;
    {
        const bool branch_taken_0x24def8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEF8u;
        // 0x24defc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24def8) {
            ctx->pc = 0x24DF08u;
            goto label_24df08;
        }
    }
    ctx->pc = 0x24DF00u;
label_24df00:
    // 0x24df00: 0xc094958  jal         func_252560
label_24df04:
    if (ctx->pc == 0x24DF04u) {
        ctx->pc = 0x24DF08u;
        goto label_24df08;
    }
    ctx->pc = 0x24DF00u;
    SET_GPR_U32(ctx, 31, 0x24DF08u);
    ctx->pc = 0x252560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252560u, 0x24DF00u, 0x24DF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF08u;
label_24df08:
    // 0x24df08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24df0c:
    // 0x24df0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24df10:
    if (ctx->pc == 0x24DF10u) {
        ctx->pc = 0x24DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF0Cu;
        // 0x24df10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF14u;
        goto label_24df14;
    }
    ctx->pc = 0x24DF0Cu;
    {
        const bool branch_taken_0x24df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF0Cu;
        // 0x24df10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df0c) {
            ctx->pc = 0x24DF24u;
            goto label_24df24;
        }
    }
    ctx->pc = 0x24DF14u;
label_24df14:
    // 0x24df14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24df18:
    // 0x24df18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24df1c:
    // 0x24df1c: 0x60f809  jalr        $v1
label_24df20:
    if (ctx->pc == 0x24DF20u) {
        ctx->pc = 0x24DF24u;
        goto label_24df24;
    }
    ctx->pc = 0x24DF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24DF24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF1Cu, 0x24DF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DF24u;
label_24df24:
    // 0x24df24: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24df24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24df28:
    // 0x24df28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_24df2c:
    if (ctx->pc == 0x24DF2Cu) {
        ctx->pc = 0x24DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF28u;
        // 0x24df2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF30u;
        goto label_24df30;
    }
    ctx->pc = 0x24DF28u;
    {
        const bool branch_taken_0x24df28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24df28) {
            ctx->pc = 0x24DF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF28u;
            // 0x24df2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF3Cu;
            goto label_24df3c;
        }
    }
    ctx->pc = 0x24DF30u;
label_24df30:
    // 0x24df30: 0xc094b56  jal         func_252D58
label_24df34:
    if (ctx->pc == 0x24DF34u) {
        ctx->pc = 0x24DF38u;
        goto label_24df38;
    }
    ctx->pc = 0x24DF30u;
    SET_GPR_U32(ctx, 31, 0x24DF38u);
    ctx->pc = 0x252D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252D58u, 0x24DF30u, 0x24DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF38u;
label_24df38:
    // 0x24df38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24df38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24df3c:
    // 0x24df3c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x24df3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_24df40:
    // 0x24df40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24df40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24df44:
    // 0x24df44: 0xc049590  jal         func_125640
label_24df48:
    if (ctx->pc == 0x24DF48u) {
        ctx->pc = 0x24DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF44u;
        // 0x24df48: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF4Cu;
        goto label_24df4c;
    }
    ctx->pc = 0x24DF44u;
    SET_GPR_U32(ctx, 31, 0x24DF4Cu);
    ctx->pc = 0x24DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF44u;
    // 0x24df48: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24DF44u, 0x24DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF4Cu;
label_24df4c:
    // 0x24df4c: 0x8e4374d0  lw          $v1, 0x74D0($s2)
    ctx->pc = 0x24df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29904)));
label_24df50:
    // 0x24df50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24df50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24df54:
    // 0x24df54: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x24df54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24df58:
    // 0x24df58: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
label_24df5c:
    if (ctx->pc == 0x24DF5Cu) {
        ctx->pc = 0x24DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF58u;
        // 0x24df5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF60u;
        goto label_24df60;
    }
    ctx->pc = 0x24DF58u;
    {
        const bool branch_taken_0x24df58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24df58) {
            ctx->pc = 0x24DF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF58u;
            // 0x24df5c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24def8;
        }
    }
    ctx->pc = 0x24DF60u;
label_24df60:
    // 0x24df60: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24df64:
    // 0x24df64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24df64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24df68:
    // 0x24df68: 0x245174e4  addiu       $s1, $v0, 0x74E4
    ctx->pc = 0x24df68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29924));
label_24df6c:
    // 0x24df6c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x24df6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_24df70:
    // 0x24df70: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_24df74:
    if (ctx->pc == 0x24DF74u) {
        ctx->pc = 0x24DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF70u;
        // 0x24df74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF78u;
        goto label_24df78;
    }
    ctx->pc = 0x24DF70u;
    {
        const bool branch_taken_0x24df70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF70u;
        // 0x24df74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df70) {
            ctx->pc = 0x24DF94u;
            goto label_24df94;
        }
    }
    ctx->pc = 0x24DF78u;
label_24df78:
    // 0x24df78: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24df78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
label_24df7c:
    // 0x24df7c: 0x261074dc  addiu       $s0, $s0, 0x74DC
    ctx->pc = 0x24df7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29916));
label_24df80:
    // 0x24df80: 0xc045920  jal         func_116480
label_24df84:
    if (ctx->pc == 0x24DF84u) {
        ctx->pc = 0x24DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF80u;
        // 0x24df84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DF88u;
        goto label_24df88;
    }
    ctx->pc = 0x24DF80u;
    SET_GPR_U32(ctx, 31, 0x24DF88u);
    ctx->pc = 0x24DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF80u;
    // 0x24df84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116480u, 0x24DF80u, 0x24DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF88u;
label_24df88:
    // 0x24df88: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24df88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24df8c:
    // 0x24df8c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x24df8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_24df90:
    // 0x24df90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24df90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24df94:
    // 0x24df94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24df94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24df98:
    // 0x24df98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24df98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24df9c:
    // 0x24df9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24dfa0:
    // 0x24dfa0: 0x3e00008  jr          $ra
label_24dfa4:
    if (ctx->pc == 0x24DFA4u) {
        ctx->pc = 0x24DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFA0u;
        // 0x24dfa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DFA8u;
        goto label_fallthrough_0x24dfa0;
    }
    ctx->pc = 0x24DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFA0u;
        // 0x24dfa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24dfa0:
    ctx->pc = 0x24DFA8u;
}
