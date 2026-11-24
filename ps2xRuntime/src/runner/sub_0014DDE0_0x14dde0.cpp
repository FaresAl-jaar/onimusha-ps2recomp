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

// Function: sub_0014DDE0
// Address: 0x14dde0 - 0x14df30
void sub_0014DDE0_0x14dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DDE0_0x14dde0");
#endif

    switch (ctx->pc) {
        case 0x14de20u: goto label_14de20;
        case 0x14deb0u: goto label_14deb0;
        default: break;
    }

    ctx->pc = 0x14dde0u;

    // 0x14dde0: 0x948c4062  lhu         $t4, 0x4062($a0)
    ctx->pc = 0x14dde0u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16482)));
    // 0x14dde4: 0x15800004  bnez        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DDE4u;
    {
        const bool branch_taken_0x14dde4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DDE4u;
        // 0x14dde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dde4) {
            ctx->pc = 0x14DDF8u;
            goto label_14ddf8;
        }
    }
    ctx->pc = 0x14DDECu;
    // 0x14ddec: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x14DDECu;
    {
        const bool branch_taken_0x14ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ddec) {
            ctx->pc = 0x14DF28u;
            goto label_14df28;
        }
    }
    ctx->pc = 0x14DDF4u;
    // 0x14ddf4: 0x0  nop
    ctx->pc = 0x14ddf4u;
    // NOP
label_14ddf8:
    // 0x14ddf8: 0x90ab0000  lbu         $t3, 0x0($a1)
    ctx->pc = 0x14ddf8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ddfc: 0x31630080  andi        $v1, $t3, 0x80
    ctx->pc = 0x14ddfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)128);
    // 0x14de00: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x14DE00u;
    {
        const bool branch_taken_0x14de00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE00u;
        // 0x14de04: 0x2482245c  addiu       $v0, $a0, 0x245C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 9308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de00) {
            ctx->pc = 0x14DE98u;
            goto label_14de98;
        }
    }
    ctx->pc = 0x14DE08u;
    // 0x14de08: 0x90aa0001  lbu         $t2, 0x1($a1)
    ctx->pc = 0x14de08u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x14de0c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x14de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14de10: 0x11430021  beq         $t2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x14DE10u;
    {
        const bool branch_taken_0x14de10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x14DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE10u;
        // 0x14de14: 0xc082a  slt         $at, $zero, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de10) {
            ctx->pc = 0x14DE98u;
            goto label_14de98;
        }
    }
    ctx->pc = 0x14DE18u;
    // 0x14de18: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x14DE18u;
    {
        const bool branch_taken_0x14de18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE18u;
        // 0x14de1c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de18) {
            ctx->pc = 0x14DE98u;
            goto label_14de98;
        }
    }
    ctx->pc = 0x14DE20u;
label_14de20:
    // 0x14de20: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x14de20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de24: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x14DE24u;
    {
        const bool branch_taken_0x14de24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de24) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE2Cu;
    // 0x14de2c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x14de2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x14de30: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14DE30u;
    {
        const bool branch_taken_0x14de30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de30) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE38u;
    // 0x14de38: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x14de38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14de3c: 0x146b0012  bne         $v1, $t3, . + 4 + (0x12 << 2)
    ctx->pc = 0x14DE3Cu;
    {
        const bool branch_taken_0x14de3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        if (branch_taken_0x14de3c) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE44u;
    // 0x14de44: 0x9043000d  lbu         $v1, 0xD($v0)
    ctx->pc = 0x14de44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x14de48: 0x146a000f  bne         $v1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x14DE48u;
    {
        const bool branch_taken_0x14de48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x14de48) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE50u;
    // 0x14de50: 0x9049000e  lbu         $t1, 0xE($v0)
    ctx->pc = 0x14de50u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x14de54: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x14de54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x14de58: 0x1523000b  bne         $t1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14DE58u;
    {
        const bool branch_taken_0x14de58 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x14de58) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE60u;
    // 0x14de60: 0x9049000f  lbu         $t1, 0xF($v0)
    ctx->pc = 0x14de60u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x14de64: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x14de64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x14de68: 0x15230007  bne         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DE68u;
    {
        const bool branch_taken_0x14de68 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x14de68) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE70u;
    // 0x14de70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14de74: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x14de74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x14de78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DE78u;
    {
        const bool branch_taken_0x14de78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de78) {
            ctx->pc = 0x14DE88u;
            goto label_14de88;
        }
    }
    ctx->pc = 0x14DE80u;
    // 0x14de80: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14DE80u;
    {
        const bool branch_taken_0x14de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de80) {
            ctx->pc = 0x14DF28u;
            goto label_14df28;
        }
    }
    ctx->pc = 0x14DE88u;
label_14de88:
    // 0x14de88: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x14de8c: 0x1ac182a  slt         $v1, $t5, $t4
    ctx->pc = 0x14de8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x14de90: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x14DE90u;
    {
        const bool branch_taken_0x14de90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE90u;
        // 0x14de94: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de90) {
            ctx->pc = 0x14DE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14de20;
        }
    }
    ctx->pc = 0x14DE98u;
label_14de98:
    // 0x14de98: 0xc082a  slt         $at, $zero, $t4
    ctx->pc = 0x14de98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x14de9c: 0x2485245c  addiu       $a1, $a0, 0x245C
    ctx->pc = 0x14de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 9308));
    // 0x14dea0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x14DEA0u;
    {
        const bool branch_taken_0x14dea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEA0u;
        // 0x14dea4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dea0) {
            ctx->pc = 0x14DF20u;
            goto label_14df20;
        }
    }
    ctx->pc = 0x14DEA8u;
    // 0x14dea8: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x14dea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14deac: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x14deacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_14deb0:
    // 0x14deb0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x14deb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14deb4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DEB4u;
    {
        const bool branch_taken_0x14deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14deb4) {
            ctx->pc = 0x14DF08u;
            goto label_14df08;
        }
    }
    ctx->pc = 0x14DEBCu;
    // 0x14debc: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x14debcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x14dec0: 0x14490011  bne         $v0, $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14DEC0u;
    {
        const bool branch_taken_0x14dec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x14dec0) {
            ctx->pc = 0x14DF08u;
            goto label_14df08;
        }
    }
    ctx->pc = 0x14DEC8u;
    // 0x14dec8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x14dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14decc: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x14deccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x14ded0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DED0u;
    {
        const bool branch_taken_0x14ded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DED0u;
        // 0x14ded4: 0xe6082b  sltu        $at, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ded0) {
            ctx->pc = 0x14DEE0u;
            goto label_14dee0;
        }
    }
    ctx->pc = 0x14DED8u;
    // 0x14ded8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DED8u;
    {
        const bool branch_taken_0x14ded8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ded8) {
            ctx->pc = 0x14DF00u;
            goto label_14df00;
        }
    }
    ctx->pc = 0x14DEE0u;
label_14dee0:
    // 0x14dee0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x14dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14dee4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14dee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14dee8: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x14dee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x14deec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DEECu;
    {
        const bool branch_taken_0x14deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEECu;
        // 0x14def0: 0xe6082b  sltu        $at, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14deec) {
            ctx->pc = 0x14DF08u;
            goto label_14df08;
        }
    }
    ctx->pc = 0x14DEF4u;
    // 0x14def4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DEF4u;
    {
        const bool branch_taken_0x14def4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14def4) {
            ctx->pc = 0x14DF08u;
            goto label_14df08;
        }
    }
    ctx->pc = 0x14DEFCu;
    // 0x14defc: 0x0  nop
    ctx->pc = 0x14defcu;
    // NOP
label_14df00:
    // 0x14df00: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x14df00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14df04: 0x0  nop
    ctx->pc = 0x14df04u;
    // NOP
label_14df08:
    // 0x14df08: 0x94824062  lhu         $v0, 0x4062($a0)
    ctx->pc = 0x14df08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16482)));
    // 0x14df0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14df10: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14df10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14df14: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x14DF14u;
    {
        const bool branch_taken_0x14df14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DF14u;
        // 0x14df18: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14df14) {
            ctx->pc = 0x14DEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14deb0;
        }
    }
    ctx->pc = 0x14DF1Cu;
    // 0x14df1c: 0x0  nop
    ctx->pc = 0x14df1cu;
    // NOP
label_14df20:
    // 0x14df20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14df20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14df24: 0x0  nop
    ctx->pc = 0x14df24u;
    // NOP
label_14df28:
    // 0x14df28: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DF30u;
}
