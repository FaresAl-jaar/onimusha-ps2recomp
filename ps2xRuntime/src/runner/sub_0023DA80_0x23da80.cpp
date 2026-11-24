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

// Function: sub_0023DA80
// Address: 0x23da80 - 0x23dc84
void sub_0023DA80_0x23da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DA80_0x23da80");
#endif

    switch (ctx->pc) {
        case 0x23da80u: goto label_23da80;
        case 0x23da84u: goto label_23da84;
        case 0x23da88u: goto label_23da88;
        case 0x23da8cu: goto label_23da8c;
        case 0x23da90u: goto label_23da90;
        case 0x23da94u: goto label_23da94;
        case 0x23da98u: goto label_23da98;
        case 0x23da9cu: goto label_23da9c;
        case 0x23daa0u: goto label_23daa0;
        case 0x23daa4u: goto label_23daa4;
        case 0x23daa8u: goto label_23daa8;
        case 0x23daacu: goto label_23daac;
        case 0x23dab0u: goto label_23dab0;
        case 0x23dab4u: goto label_23dab4;
        case 0x23dab8u: goto label_23dab8;
        case 0x23dabcu: goto label_23dabc;
        case 0x23dac0u: goto label_23dac0;
        case 0x23dac4u: goto label_23dac4;
        case 0x23dac8u: goto label_23dac8;
        case 0x23daccu: goto label_23dacc;
        case 0x23dad0u: goto label_23dad0;
        case 0x23dad4u: goto label_23dad4;
        case 0x23dad8u: goto label_23dad8;
        case 0x23dadcu: goto label_23dadc;
        case 0x23dae0u: goto label_23dae0;
        case 0x23dae4u: goto label_23dae4;
        case 0x23dae8u: goto label_23dae8;
        case 0x23daecu: goto label_23daec;
        case 0x23daf0u: goto label_23daf0;
        case 0x23daf4u: goto label_23daf4;
        case 0x23daf8u: goto label_23daf8;
        case 0x23dafcu: goto label_23dafc;
        case 0x23db00u: goto label_23db00;
        case 0x23db04u: goto label_23db04;
        case 0x23db08u: goto label_23db08;
        case 0x23db0cu: goto label_23db0c;
        case 0x23db10u: goto label_23db10;
        case 0x23db14u: goto label_23db14;
        case 0x23db18u: goto label_23db18;
        case 0x23db1cu: goto label_23db1c;
        case 0x23db20u: goto label_23db20;
        case 0x23db24u: goto label_23db24;
        case 0x23db28u: goto label_23db28;
        case 0x23db2cu: goto label_23db2c;
        case 0x23db30u: goto label_23db30;
        case 0x23db34u: goto label_23db34;
        case 0x23db38u: goto label_23db38;
        case 0x23db3cu: goto label_23db3c;
        case 0x23db40u: goto label_23db40;
        case 0x23db44u: goto label_23db44;
        case 0x23db48u: goto label_23db48;
        case 0x23db4cu: goto label_23db4c;
        case 0x23db50u: goto label_23db50;
        case 0x23db54u: goto label_23db54;
        case 0x23db58u: goto label_23db58;
        case 0x23db5cu: goto label_23db5c;
        case 0x23db60u: goto label_23db60;
        case 0x23db64u: goto label_23db64;
        case 0x23db68u: goto label_23db68;
        case 0x23db6cu: goto label_23db6c;
        case 0x23db70u: goto label_23db70;
        case 0x23db74u: goto label_23db74;
        case 0x23db78u: goto label_23db78;
        case 0x23db7cu: goto label_23db7c;
        case 0x23db80u: goto label_23db80;
        case 0x23db84u: goto label_23db84;
        case 0x23db88u: goto label_23db88;
        case 0x23db8cu: goto label_23db8c;
        case 0x23db90u: goto label_23db90;
        case 0x23db94u: goto label_23db94;
        case 0x23db98u: goto label_23db98;
        case 0x23db9cu: goto label_23db9c;
        case 0x23dba0u: goto label_23dba0;
        case 0x23dba4u: goto label_23dba4;
        case 0x23dba8u: goto label_23dba8;
        case 0x23dbacu: goto label_23dbac;
        case 0x23dbb0u: goto label_23dbb0;
        case 0x23dbb4u: goto label_23dbb4;
        case 0x23dbb8u: goto label_23dbb8;
        case 0x23dbbcu: goto label_23dbbc;
        case 0x23dbc0u: goto label_23dbc0;
        case 0x23dbc4u: goto label_23dbc4;
        case 0x23dbc8u: goto label_23dbc8;
        case 0x23dbccu: goto label_23dbcc;
        case 0x23dbd0u: goto label_23dbd0;
        case 0x23dbd4u: goto label_23dbd4;
        case 0x23dbd8u: goto label_23dbd8;
        case 0x23dbdcu: goto label_23dbdc;
        case 0x23dbe0u: goto label_23dbe0;
        case 0x23dbe4u: goto label_23dbe4;
        case 0x23dbe8u: goto label_23dbe8;
        case 0x23dbecu: goto label_23dbec;
        case 0x23dbf0u: goto label_23dbf0;
        case 0x23dbf4u: goto label_23dbf4;
        case 0x23dbf8u: goto label_23dbf8;
        case 0x23dbfcu: goto label_23dbfc;
        case 0x23dc00u: goto label_23dc00;
        case 0x23dc04u: goto label_23dc04;
        case 0x23dc08u: goto label_23dc08;
        case 0x23dc0cu: goto label_23dc0c;
        case 0x23dc10u: goto label_23dc10;
        case 0x23dc14u: goto label_23dc14;
        case 0x23dc18u: goto label_23dc18;
        case 0x23dc1cu: goto label_23dc1c;
        case 0x23dc20u: goto label_23dc20;
        case 0x23dc24u: goto label_23dc24;
        case 0x23dc28u: goto label_23dc28;
        case 0x23dc2cu: goto label_23dc2c;
        case 0x23dc30u: goto label_23dc30;
        case 0x23dc34u: goto label_23dc34;
        case 0x23dc38u: goto label_23dc38;
        case 0x23dc3cu: goto label_23dc3c;
        case 0x23dc40u: goto label_23dc40;
        case 0x23dc44u: goto label_23dc44;
        case 0x23dc48u: goto label_23dc48;
        case 0x23dc4cu: goto label_23dc4c;
        case 0x23dc50u: goto label_23dc50;
        case 0x23dc54u: goto label_23dc54;
        case 0x23dc58u: goto label_23dc58;
        case 0x23dc5cu: goto label_23dc5c;
        case 0x23dc60u: goto label_23dc60;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dc6cu: goto label_23dc6c;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        default: break;
    }

    ctx->pc = 0x23da80u;

label_23da80:
    // 0x23da80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23da84:
    // 0x23da84: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_23da88:
    // 0x23da88: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23da88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23da8c:
    // 0x23da8c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x23da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_23da90:
    // 0x23da90: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x23da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_23da94:
    // 0x23da94: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23da94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23da98:
    // 0x23da98: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x23da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_23da9c:
    // 0x23da9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23daa0:
    // 0x23daa0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x23daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_23daa4:
    // 0x23daa4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_23daa8:
    // 0x23daa8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x23daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_23daac:
    // 0x23daac: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x23daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_23dab0:
    // 0x23dab0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x23dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_23dab4:
    // 0x23dab4: 0xc08d564  jal         func_235590
label_23dab8:
    if (ctx->pc == 0x23DAB8u) {
        ctx->pc = 0x23DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAB4u;
        // 0x23dab8: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DABCu;
        goto label_23dabc;
    }
    ctx->pc = 0x23DAB4u;
    SET_GPR_U32(ctx, 31, 0x23DABCu);
    ctx->pc = 0x23DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAB4u;
    // 0x23dab8: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x23DAB4u, 0x23DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DABCu;
label_23dabc:
    // 0x23dabc: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
label_23dac0:
    // 0x23dac0: 0xac628fe4  sw          $v0, -0x701C($v1)
    ctx->pc = 0x23dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938596), GPR_U32(ctx, 2));
label_23dac4:
    // 0x23dac4: 0xc08db08  jal         func_236C20
label_23dac8:
    if (ctx->pc == 0x23DAC8u) {
        ctx->pc = 0x23DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC4u;
        // 0x23dac8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DACCu;
        goto label_23dacc;
    }
    ctx->pc = 0x23DAC4u;
    SET_GPR_U32(ctx, 31, 0x23DACCu);
    ctx->pc = 0x23DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAC4u;
    // 0x23dac8: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C20u, 0x23DAC4u, 0x23DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DACCu;
label_23dacc:
    // 0x23dacc: 0xc08b528  jal         func_22D4A0
label_23dad0:
    if (ctx->pc == 0x23DAD0u) {
        ctx->pc = 0x23DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DACCu;
        // 0x23dad0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAD4u;
        goto label_23dad4;
    }
    ctx->pc = 0x23DACCu;
    SET_GPR_U32(ctx, 31, 0x23DAD4u);
    ctx->pc = 0x23DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DACCu;
    // 0x23dad0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23DACCu, 0x23DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAD4u;
label_23dad4:
    // 0x23dad4: 0x1ae00014  blez        $s7, . + 4 + (0x14 << 2)
label_23dad8:
    if (ctx->pc == 0x23DAD8u) {
        ctx->pc = 0x23DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD4u;
        // 0x23dad8: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DADCu;
        goto label_23dadc;
    }
    ctx->pc = 0x23DAD4u;
    {
        const bool branch_taken_0x23dad4 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x23DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD4u;
        // 0x23dad8: 0x8ed50048  lw          $s5, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dad4) {
            ctx->pc = 0x23DB28u;
            goto label_23db28;
        }
    }
    ctx->pc = 0x23DADCu;
label_23dadc:
    // 0x23dadc: 0x26d10018  addiu       $s1, $s6, 0x18
    ctx->pc = 0x23dadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_23dae0:
    // 0x23dae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23dae4:
    // 0x23dae4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23dae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_23dae8:
    // 0x23dae8: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x23dae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_23daec:
    // 0x23daec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x23daecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_23daf0:
    // 0x23daf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23daf4:
    // 0x23daf4: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x23daf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_23daf8:
    // 0x23daf8: 0x3b03821  addu        $a3, $sp, $s0
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_23dafc:
    // 0x23dafc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x23dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_23db00:
    // 0x23db00: 0x40f809  jalr        $v0
label_23db04:
    if (ctx->pc == 0x23DB04u) {
        ctx->pc = 0x23DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB00u;
        // 0x23db04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB08u;
        goto label_23db08;
    }
    ctx->pc = 0x23DB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DB08u);
        ctx->pc = 0x23DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB00u;
        // 0x23db04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB00u, 0x23DB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DB08u;
label_23db08:
    // 0x23db08: 0x297202a  slt         $a0, $s4, $s7
    ctx->pc = 0x23db08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_23db0c:
    // 0x23db0c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x23db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_23db10:
    // 0x23db10: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x23db10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23db14:
    // 0x23db14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23db14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23db18:
    // 0x23db18: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_23db1c:
    // 0x23db1c: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x23db1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_23db20:
    // 0x23db20: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_23db24:
    if (ctx->pc == 0x23DB24u) {
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB20u;
        // 0x23db24: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB28u;
        goto label_23db28;
    }
    ctx->pc = 0x23DB20u;
    {
        const bool branch_taken_0x23db20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB20u;
        // 0x23db24: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db20) {
            ctx->pc = 0x23DAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dae0;
        }
    }
    ctx->pc = 0x23DB28u;
label_23db28:
    // 0x23db28: 0x1ae00024  blez        $s7, . + 4 + (0x24 << 2)
label_23db2c:
    if (ctx->pc == 0x23DB2Cu) {
        ctx->pc = 0x23DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB28u;
        // 0x23db2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB30u;
        goto label_23db30;
    }
    ctx->pc = 0x23DB28u;
    {
        const bool branch_taken_0x23db28 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x23DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB28u;
        // 0x23db2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db28) {
            ctx->pc = 0x23DBBCu;
            goto label_23dbbc;
        }
    }
    ctx->pc = 0x23DB30u;
label_23db30:
    // 0x23db30: 0x15f040  sll         $fp, $s5, 1
    ctx->pc = 0x23db30u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_23db34:
    // 0x23db34: 0x26d30018  addiu       $s3, $s6, 0x18
    ctx->pc = 0x23db34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_23db38:
    // 0x23db38: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x23db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23db3c:
    // 0x23db3c: 0x0  nop
    ctx->pc = 0x23db3cu;
    // NOP
label_23db40:
    // 0x23db40: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x23db40u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_23db44:
    // 0x23db44: 0x3b08821  addu        $s1, $sp, $s0
    ctx->pc = 0x23db44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_23db48:
    // 0x23db48: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23db4c:
    // 0x23db4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23db4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23db50:
    // 0x23db50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23db54:
    // 0x23db54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23db54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_23db58:
    // 0x23db58: 0xc094854  jal         func_252150
label_23db5c:
    if (ctx->pc == 0x23DB5Cu) {
        ctx->pc = 0x23DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB58u;
        // 0x23db5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB60u;
        goto label_23db60;
    }
    ctx->pc = 0x23DB58u;
    SET_GPR_U32(ctx, 31, 0x23DB60u);
    ctx->pc = 0x23DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB58u;
    // 0x23db5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23DB58u, 0x23DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB60u;
label_23db60:
    // 0x23db60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23db64:
    // 0x23db64: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x23db64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_23db68:
    // 0x23db68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23db6c:
    // 0x23db6c: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x23db6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23db70:
    // 0x23db70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x23db70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_23db74:
    // 0x23db74: 0xc049590  jal         func_125640
label_23db78:
    if (ctx->pc == 0x23DB78u) {
        ctx->pc = 0x23DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB74u;
        // 0x23db78: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB7Cu;
        goto label_23db7c;
    }
    ctx->pc = 0x23DB74u;
    SET_GPR_U32(ctx, 31, 0x23DB7Cu);
    ctx->pc = 0x23DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB74u;
    // 0x23db78: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23DB74u, 0x23DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB7Cu;
label_23db7c:
    // 0x23db7c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23db80:
    // 0x23db80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23db80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23db84:
    // 0x23db84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23db84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23db88:
    // 0x23db88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_23db8c:
    // 0x23db8c: 0x40f809  jalr        $v0
label_23db90:
    if (ctx->pc == 0x23DB90u) {
        ctx->pc = 0x23DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB8Cu;
        // 0x23db90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB94u;
        goto label_23db94;
    }
    ctx->pc = 0x23DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DB94u);
        ctx->pc = 0x23DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB8Cu;
        // 0x23db90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB8Cu, 0x23DB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DB94u;
label_23db94:
    // 0x23db94: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x23db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23db98:
    // 0x23db98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23db9c:
    // 0x23db9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dba0:
    // 0x23dba0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dba4:
    // 0x23dba4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23dba8:
    // 0x23dba8: 0x40f809  jalr        $v0
label_23dbac:
    if (ctx->pc == 0x23DBACu) {
        ctx->pc = 0x23DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBA8u;
        // 0x23dbac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBB0u;
        goto label_23dbb0;
    }
    ctx->pc = 0x23DBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DBB0u);
        ctx->pc = 0x23DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBA8u;
        // 0x23dbac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DBA8u, 0x23DBB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DBB0u;
label_23dbb0:
    // 0x23dbb0: 0x297182a  slt         $v1, $s4, $s7
    ctx->pc = 0x23dbb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_23dbb4:
    // 0x23dbb4: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_23dbb8:
    if (ctx->pc == 0x23DBB8u) {
        ctx->pc = 0x23DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBB4u;
        // 0x23dbb8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBBCu;
        goto label_23dbbc;
    }
    ctx->pc = 0x23DBB4u;
    {
        const bool branch_taken_0x23dbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBB4u;
        // 0x23dbb8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbb4) {
            ctx->pc = 0x23DB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23db40;
        }
    }
    ctx->pc = 0x23DBBCu;
label_23dbbc:
    // 0x23dbbc: 0x8ec200a8  lw          $v0, 0xA8($s6)
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_23dbc0:
    // 0x23dbc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23dbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dbc4:
    // 0x23dbc4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x23dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_23dbc8:
    // 0x23dbc8: 0xc08b52e  jal         func_22D4B8
label_23dbcc:
    if (ctx->pc == 0x23DBCCu) {
        ctx->pc = 0x23DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBC8u;
        // 0x23dbcc: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBD0u;
        goto label_23dbd0;
    }
    ctx->pc = 0x23DBC8u;
    SET_GPR_U32(ctx, 31, 0x23DBD0u);
    ctx->pc = 0x23DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DBC8u;
    // 0x23dbcc: 0xaec200a8  sw          $v0, 0xA8($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x23DBC8u, 0x23DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBD0u;
label_23dbd0:
    // 0x23dbd0: 0x1ae0000e  blez        $s7, . + 4 + (0xE << 2)
label_23dbd4:
    if (ctx->pc == 0x23DBD4u) {
        ctx->pc = 0x23DBD8u;
        goto label_23dbd8;
    }
    ctx->pc = 0x23DBD0u;
    {
        const bool branch_taken_0x23dbd0 = (GPR_S64(ctx, 23) <= 0);
        if (branch_taken_0x23dbd0) {
            ctx->pc = 0x23DC0Cu;
            goto label_23dc0c;
        }
    }
    ctx->pc = 0x23DBD8u;
label_23dbd8:
    // 0x23dbd8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x23dbd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23dbdc:
    // 0x23dbdc: 0x26d00018  addiu       $s0, $s6, 0x18
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_23dbe0:
    // 0x23dbe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23dbe4:
    // 0x23dbe4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23dbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23dbe8:
    // 0x23dbe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dbec:
    // 0x23dbec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dbf0:
    // 0x23dbf0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23dbf4:
    // 0x23dbf4: 0x40f809  jalr        $v0
label_23dbf8:
    if (ctx->pc == 0x23DBF8u) {
        ctx->pc = 0x23DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF4u;
        // 0x23dbf8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DBFCu;
        goto label_23dbfc;
    }
    ctx->pc = 0x23DBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DBFCu);
        ctx->pc = 0x23DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF4u;
        // 0x23dbf8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DBF4u, 0x23DBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DBFCu;
label_23dbfc:
    // 0x23dbfc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x23dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_23dc00:
    // 0x23dc00: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x23dc00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_23dc04:
    // 0x23dc04: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
label_23dc08:
    if (ctx->pc == 0x23DC08u) {
        ctx->pc = 0x23DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC04u;
        // 0x23dc08: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC0Cu;
        goto label_23dc0c;
    }
    ctx->pc = 0x23DC04u;
    {
        const bool branch_taken_0x23dc04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC04u;
        // 0x23dc08: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc04) {
            ctx->pc = 0x23DBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dbe0;
        }
    }
    ctx->pc = 0x23DC0Cu;
label_23dc0c:
    // 0x23dc0c: 0xc08d564  jal         func_235590
label_23dc10:
    if (ctx->pc == 0x23DC10u) {
        ctx->pc = 0x23DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC0Cu;
        // 0x23dc10: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC14u;
        goto label_23dc14;
    }
    ctx->pc = 0x23DC0Cu;
    SET_GPR_U32(ctx, 31, 0x23DC14u);
    ctx->pc = 0x23DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC0Cu;
    // 0x23dc10: 0x8ec4000c  lw          $a0, 0xC($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235590u, 0x23DC0Cu, 0x23DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC14u;
label_23dc14:
    // 0x23dc14: 0x8ec300a8  lw          $v1, 0xA8($s6)
    ctx->pc = 0x23dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_23dc18:
    // 0x23dc18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23dc1c:
    // 0x23dc1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23dc20:
    // 0x23dc20: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
label_23dc24:
    if (ctx->pc == 0x23DC24u) {
        ctx->pc = 0x23DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC20u;
        // 0x23dc24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC28u;
        goto label_23dc28;
    }
    ctx->pc = 0x23DC20u;
    {
        const bool branch_taken_0x23dc20 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x23dc20) {
            ctx->pc = 0x23DC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DC20u;
            // 0x23dc24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DC58u;
            goto label_23dc58;
        }
    }
    ctx->pc = 0x23DC28u;
label_23dc28:
    // 0x23dc28: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_23dc2c:
    // 0x23dc2c: 0xc08d552  jal         func_235548
label_23dc30:
    if (ctx->pc == 0x23DC30u) {
        ctx->pc = 0x23DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC2Cu;
        // 0x23dc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC34u;
        goto label_23dc34;
    }
    ctx->pc = 0x23DC2Cu;
    SET_GPR_U32(ctx, 31, 0x23DC34u);
    ctx->pc = 0x23DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC2Cu;
    // 0x23dc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235548u, 0x23DC2Cu, 0x23DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC34u;
label_23dc34:
    // 0x23dc34: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x23dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_23dc38:
    // 0x23dc38: 0xc08d558  jal         func_235560
label_23dc3c:
    if (ctx->pc == 0x23DC3Cu) {
        ctx->pc = 0x23DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC38u;
        // 0x23dc3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC40u;
        goto label_23dc40;
    }
    ctx->pc = 0x23DC38u;
    SET_GPR_U32(ctx, 31, 0x23DC40u);
    ctx->pc = 0x23DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC38u;
    // 0x23dc3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235560u, 0x23DC38u, 0x23DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC40u;
label_23dc40:
    // 0x23dc40: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_23dc44:
    // 0x23dc44: 0xc093cb8  jal         func_24F2E0
label_23dc48:
    if (ctx->pc == 0x23DC48u) {
        ctx->pc = 0x23DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC44u;
        // 0x23dc48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC4Cu;
        goto label_23dc4c;
    }
    ctx->pc = 0x23DC44u;
    SET_GPR_U32(ctx, 31, 0x23DC4Cu);
    ctx->pc = 0x23DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC44u;
    // 0x23dc48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F2E0u, 0x23DC44u, 0x23DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC4Cu;
label_23dc4c:
    // 0x23dc4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23dc50:
    // 0x23dc50: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x23dc50u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_23dc54:
    // 0x23dc54: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23dc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23dc58:
    // 0x23dc58: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x23dc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23dc5c:
    // 0x23dc5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23dc5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23dc60:
    // 0x23dc60: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x23dc60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23dc64:
    // 0x23dc64: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23dc64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23dc68:
    // 0x23dc68: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x23dc68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23dc6c:
    // 0x23dc6c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x23dc6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23dc70:
    // 0x23dc70: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x23dc70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23dc74:
    // 0x23dc74: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x23dc74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23dc78:
    // 0x23dc78: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x23dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_23dc7c:
    // 0x23dc7c: 0x3e00008  jr          $ra
label_23dc80:
    if (ctx->pc == 0x23DC80u) {
        ctx->pc = 0x23DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC7Cu;
        // 0x23dc80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC84u;
        goto label_fallthrough_0x23dc7c;
    }
    ctx->pc = 0x23DC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC7Cu;
        // 0x23dc80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23dc7c:
    ctx->pc = 0x23DC84u;
}
