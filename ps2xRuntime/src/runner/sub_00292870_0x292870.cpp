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

// Function: sub_00292870
// Address: 0x292870 - 0x292bf4
void sub_00292870_0x292870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292870_0x292870");
#endif

    switch (ctx->pc) {
        case 0x292920u: goto label_292920;
        case 0x2929a8u: goto label_2929a8;
        case 0x2929b8u: goto label_2929b8;
        case 0x2929d4u: goto label_2929d4;
        case 0x292b08u: goto label_292b08;
        case 0x292b1cu: goto label_292b1c;
        case 0x292b30u: goto label_292b30;
        case 0x292b44u: goto label_292b44;
        case 0x292b60u: goto label_292b60;
        case 0x292b7cu: goto label_292b7c;
        case 0x292bb8u: goto label_292bb8;
        default: break;
    }

    ctx->pc = 0x292870u;

    // 0x292870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292874: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x292874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x292878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x292878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29287c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292888: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x292888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29288c: 0x908308e8  lbu         $v1, 0x8E8($a0)
    ctx->pc = 0x29288cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2280)));
    // 0x292890: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x292890u;
    {
        const bool branch_taken_0x292890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x292894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292890u;
        // 0x292894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292890) {
            ctx->pc = 0x292910u;
            goto label_292910;
        }
    }
    ctx->pc = 0x292898u;
    // 0x292898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x292898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29289c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x29289cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2928a0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2928a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2928a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2928A4u;
    {
        const bool branch_taken_0x2928a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2928A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928A4u;
        // 0x2928a8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928a4) {
            ctx->pc = 0x292910u;
            goto label_292910;
        }
    }
    ctx->pc = 0x2928ACu;
    // 0x2928ac: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2928acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2928b0: 0xa20329d0  sb          $v1, 0x29D0($s0)
    ctx->pc = 0x2928b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 3));
    // 0x2928b4: 0x26022b12  addiu       $v0, $s0, 0x2B12
    ctx->pc = 0x2928b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11026));
    // 0x2928b8: 0xae0229c0  sw          $v0, 0x29C0($s0)
    ctx->pc = 0x2928b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10688), GPR_U32(ctx, 2));
    // 0x2928bc: 0x24c62870  addiu       $a2, $a2, 0x2870
    ctx->pc = 0x2928bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10352));
    // 0x2928c0: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2928c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2928c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2928c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2928c8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2928c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2928cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2928ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2928d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2928d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2928d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2928d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2928d8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2928dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2928dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2928e0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2928e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2928e4: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2928e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2928e8: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2928e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2928ec: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2928ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2928f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2928f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2928f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2928f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2928f8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2928f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2928fc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2928fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292900: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x292900u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x292904: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x292904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x292908: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x292908u;
    {
        const bool branch_taken_0x292908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292908u;
        // 0x29290c: 0xa0430004  sb          $v1, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292908) {
            ctx->pc = 0x2929C0u;
            goto label_2929c0;
        }
    }
    ctx->pc = 0x292910u;
label_292910:
    // 0x292910: 0x8f848ba8  lw          $a0, -0x7458($gp)
    ctx->pc = 0x292910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x292914: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x292914u;
    {
        const bool branch_taken_0x292914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292914u;
        // 0x292918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292914) {
            ctx->pc = 0x292980u;
            goto label_292980;
        }
    }
    ctx->pc = 0x29291Cu;
    // 0x29291c: 0x0  nop
    ctx->pc = 0x29291cu;
    // NOP
label_292920:
    // 0x292920: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x292920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x292924: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x292924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x292928: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x292928u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x29292c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29292cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x292930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292934: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x292934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x292938: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x292938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29293c: 0x9042005d  lbu         $v0, 0x5D($v0)
    ctx->pc = 0x29293cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 93)));
    // 0x292940: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x292940u;
    {
        const bool branch_taken_0x292940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x292940) {
            ctx->pc = 0x292978u;
            goto label_292978;
        }
    }
    ctx->pc = 0x292948u;
    // 0x292948: 0xa20629d0  sb          $a2, 0x29D0($s0)
    ctx->pc = 0x292948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10704), (uint8_t)GPR_U32(ctx, 6));
    // 0x29294c: 0x920429d0  lbu         $a0, 0x29D0($s0)
    ctx->pc = 0x29294cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    // 0x292950: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x292950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x292954: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x292954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x292958: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x292958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29295c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29295cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x292960: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x292960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x292964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x292964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x292968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29296c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29296Cu;
    {
        const bool branch_taken_0x29296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29296Cu;
        // 0x292970: 0xae0229c0  sw          $v0, 0x29C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29296c) {
            ctx->pc = 0x292990u;
            goto label_292990;
        }
    }
    ctx->pc = 0x292974u;
    // 0x292974: 0x0  nop
    ctx->pc = 0x292974u;
    // NOP
label_292978:
    // 0x292978: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x292978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29297c: 0x0  nop
    ctx->pc = 0x29297cu;
    // NOP
label_292980:
    // 0x292980: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x292980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x292984: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x292984u;
    {
        const bool branch_taken_0x292984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292984) {
            ctx->pc = 0x292920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292920;
        }
    }
    ctx->pc = 0x29298Cu;
    // 0x29298c: 0x0  nop
    ctx->pc = 0x29298cu;
    // NOP
label_292990:
    // 0x292990: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x292990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x292994: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x292994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292998: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292998u;
    {
        const bool branch_taken_0x292998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292998u;
        // 0x29299c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292998) {
            ctx->pc = 0x2929C0u;
            goto label_2929c0;
        }
    }
    ctx->pc = 0x2929A0u;
    // 0x2929a0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2929A0u;
    SET_GPR_U32(ctx, 31, 0x2929A8u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2929A0u, 0x2929A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929A8u;
label_2929a8:
    // 0x2929a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2929a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2929ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2929acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2929b0: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2929B0u;
    SET_GPR_U32(ctx, 31, 0x2929B8u);
    ctx->pc = 0x2929B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929B0u;
    // 0x2929b4: 0x228c3  sra         $a1, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2929B0u, 0x2929B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929B8u;
label_2929b8:
    // 0x2929b8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2929b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2929bc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2929bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2929c0:
    // 0x2929c0: 0xa2002ab0  sb          $zero, 0x2AB0($s0)
    ctx->pc = 0x2929c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 0));
    // 0x2929c4: 0xa2002ab1  sb          $zero, 0x2AB1($s0)
    ctx->pc = 0x2929c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10929), (uint8_t)GPR_U32(ctx, 0));
    // 0x2929c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2929c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929cc: 0xc0a4fd4  jal         func_293F50
    ctx->pc = 0x2929CCu;
    SET_GPR_U32(ctx, 31, 0x2929D4u);
    ctx->pc = 0x2929D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929CCu;
    // 0x2929d0: 0xa2002b07  sb          $zero, 0x2B07($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293F50u, 0x2929CCu, 0x2929D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929D4u;
label_2929d4:
    // 0x2929d4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2929d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2929d8: 0x26032af0  addiu       $v1, $s0, 0x2AF0
    ctx->pc = 0x2929d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10992));
    // 0x2929dc: 0xa2022b06  sb          $v0, 0x2B06($s0)
    ctx->pc = 0x2929dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 2));
    // 0x2929e0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x2929e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2929e4: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x2929e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x2929e8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2929e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2929ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2929ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2929f0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2929F0u;
    {
        const bool branch_taken_0x2929f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929F0u;
        // 0x2929f4: 0x240200a7  addiu       $v0, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2929f0) {
            ctx->pc = 0x292A98u;
            goto label_292a98;
        }
    }
    ctx->pc = 0x2929F8u;
    // 0x2929f8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2929F8u;
    {
        const bool branch_taken_0x2929f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2929f8) {
            ctx->pc = 0x292A98u;
            goto label_292a98;
        }
    }
    ctx->pc = 0x292A00u;
    // 0x292a00: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x292a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x292a04: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x292A04u;
    {
        const bool branch_taken_0x292a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A04u;
        // 0x292a08: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a04) {
            ctx->pc = 0x292A80u;
            goto label_292a80;
        }
    }
    ctx->pc = 0x292A0Cu;
    // 0x292a0c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x292A0Cu;
    {
        const bool branch_taken_0x292a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292a0c) {
            ctx->pc = 0x292A50u;
            goto label_292a50;
        }
    }
    ctx->pc = 0x292A14u;
    // 0x292a14: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x292a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x292a18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x292A18u;
    {
        const bool branch_taken_0x292a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A18u;
        // 0x292a1c: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a18) {
            ctx->pc = 0x292A50u;
            goto label_292a50;
        }
    }
    ctx->pc = 0x292A20u;
    // 0x292a20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292A20u;
    {
        const bool branch_taken_0x292a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x292a20) {
            ctx->pc = 0x292A30u;
            goto label_292a30;
        }
    }
    ctx->pc = 0x292A28u;
    // 0x292a28: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x292A28u;
    {
        const bool branch_taken_0x292a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292a28) {
            ctx->pc = 0x292AD8u;
            goto label_292ad8;
        }
    }
    ctx->pc = 0x292A30u;
label_292a30:
    // 0x292a30: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x292a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x292a34: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x292a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x292a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x292a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x292a3c: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x292a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x292a40: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x292a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x292a44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x292a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x292a48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x292A48u;
    {
        const bool branch_taken_0x292a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A48u;
        // 0x292a4c: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a48) {
            ctx->pc = 0x292AD8u;
            goto label_292ad8;
        }
    }
    ctx->pc = 0x292A50u;
label_292a50:
    // 0x292a50: 0x8e06085c  lw          $a2, 0x85C($s0)
    ctx->pc = 0x292a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x292a54: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x292a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x292a58: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x292a5c: 0x8cc3004c  lw          $v1, 0x4C($a2)
    ctx->pc = 0x292a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x292a60: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x292a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x292a64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x292a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292a68: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x292a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x292a6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x292a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x292a70: 0xacc504c4  sw          $a1, 0x4C4($a2)
    ctx->pc = 0x292a70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1220), GPR_U32(ctx, 5));
    // 0x292a74: 0xacc504c8  sw          $a1, 0x4C8($a2)
    ctx->pc = 0x292a74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1224), GPR_U32(ctx, 5));
    // 0x292a78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x292A78u;
    {
        const bool branch_taken_0x292a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A78u;
        // 0x292a7c: 0xacc504cc  sw          $a1, 0x4CC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1228), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a78) {
            ctx->pc = 0x292AD8u;
            goto label_292ad8;
        }
    }
    ctx->pc = 0x292A80u;
label_292a80:
    // 0x292a80: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x292a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x292a84: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x292a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x292a88: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x292a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x292a8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x292A8Cu;
    {
        const bool branch_taken_0x292a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A8Cu;
        // 0x292a90: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a8c) {
            ctx->pc = 0x292AD8u;
            goto label_292ad8;
        }
    }
    ctx->pc = 0x292A94u;
    // 0x292a94: 0x0  nop
    ctx->pc = 0x292a94u;
    // NOP
label_292a98:
    // 0x292a98: 0xae002af0  sw          $zero, 0x2AF0($s0)
    ctx->pc = 0x292a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10992), GPR_U32(ctx, 0));
    // 0x292a9c: 0xae002af4  sw          $zero, 0x2AF4($s0)
    ctx->pc = 0x292a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 0));
    // 0x292aa0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x292aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x292aa4: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x292aa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x292aa8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x292aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x292aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x292aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292ab0: 0x2463f38c  addiu       $v1, $v1, -0xC74
    ctx->pc = 0x292ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964108));
    // 0x292ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x292ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x292ab8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x292ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x292abc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x292abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x292ac0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x292ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x292ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292ac8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x292ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x292accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x292ad0: 0xe6002af8  swc1        $f0, 0x2AF8($s0)
    ctx->pc = 0x292ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11000), bits); }
    // 0x292ad4: 0xae022afc  sw          $v0, 0x2AFC($s0)
    ctx->pc = 0x292ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11004), GPR_U32(ctx, 2));
label_292ad8:
    // 0x292ad8: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x292ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x292adc: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x292adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x292ae0: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x292ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x292ae4: 0xae0028d0  sw          $zero, 0x28D0($s0)
    ctx->pc = 0x292ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10448), GPR_U32(ctx, 0));
    // 0x292ae8: 0xae0028d4  sw          $zero, 0x28D4($s0)
    ctx->pc = 0x292ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10452), GPR_U32(ctx, 0));
    // 0x292aec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x292aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x292af0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292AF0u;
    {
        const bool branch_taken_0x292af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x292AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AF0u;
        // 0x292af4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292af0) {
            ctx->pc = 0x292B08u;
            goto label_292b08;
        }
    }
    ctx->pc = 0x292AF8u;
    // 0x292af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292afc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x292afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b00: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x292B00u;
    SET_GPR_U32(ctx, 31, 0x292B08u);
    ctx->pc = 0x292B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B00u;
    // 0x292b04: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x292B00u, 0x292B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B08u;
label_292b08:
    // 0x292b08: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x292b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x292b0c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x292b0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x292b10: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x292b10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x292b14: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x292B14u;
    SET_GPR_U32(ctx, 31, 0x292B1Cu);
    ctx->pc = 0x292B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B14u;
    // 0x292b18: 0x2404009e  addiu       $a0, $zero, 0x9E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x292B14u, 0x292B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B1Cu;
label_292b1c:
    // 0x292b1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x292b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b20: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x292B20u;
    {
        const bool branch_taken_0x292b20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B20u;
        // 0x292b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b20) {
            ctx->pc = 0x292B38u;
            goto label_292b38;
        }
    }
    ctx->pc = 0x292B28u;
    // 0x292b28: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x292B28u;
    SET_GPR_U32(ctx, 31, 0x292B30u);
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x292B28u, 0x292B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B30u;
label_292b30:
    // 0x292b30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x292B30u;
    {
        const bool branch_taken_0x292b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B30u;
        // 0x292b34: 0xae1104b0  sw          $s1, 0x4B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b30) {
            ctx->pc = 0x292B50u;
            goto label_292b50;
        }
    }
    ctx->pc = 0x292B38u;
label_292b38:
    // 0x292b38: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x292b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x292b3c: 0xc09e6e4  jal         func_279B90
    ctx->pc = 0x292B3Cu;
    SET_GPR_U32(ctx, 31, 0x292B44u);
    ctx->pc = 0x292B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B3Cu;
    // 0x292b40: 0x2484a9d0  addiu       $a0, $a0, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B90u, 0x292B3Cu, 0x292B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B44u;
label_292b44:
    // 0x292b44: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x292b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x292b48: 0x2442a9d0  addiu       $v0, $v0, -0x5630
    ctx->pc = 0x292b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x292b4c: 0xae0204b0  sw          $v0, 0x4B0($s0)
    ctx->pc = 0x292b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 2));
label_292b50:
    // 0x292b50: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x292b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x292b54: 0x248423a0  addiu       $a0, $a0, 0x23A0
    ctx->pc = 0x292b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    // 0x292b58: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x292B58u;
    SET_GPR_U32(ctx, 31, 0x292B60u);
    ctx->pc = 0x292B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B58u;
    // 0x292b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x292B58u, 0x292B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B60u;
label_292b60:
    // 0x292b60: 0xa2002b0b  sb          $zero, 0x2B0B($s0)
    ctx->pc = 0x292b60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11019), (uint8_t)GPR_U32(ctx, 0));
    // 0x292b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b68: 0xa2002b0c  sb          $zero, 0x2B0C($s0)
    ctx->pc = 0x292b68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11020), (uint8_t)GPR_U32(ctx, 0));
    // 0x292b6c: 0xa2002b0d  sb          $zero, 0x2B0D($s0)
    ctx->pc = 0x292b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11021), (uint8_t)GPR_U32(ctx, 0));
    // 0x292b70: 0xa6002b10  sh          $zero, 0x2B10($s0)
    ctx->pc = 0x292b70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11024), (uint16_t)GPR_U32(ctx, 0));
    // 0x292b74: 0xc0a4760  jal         func_291D80
    ctx->pc = 0x292B74u;
    SET_GPR_U32(ctx, 31, 0x292B7Cu);
    ctx->pc = 0x292B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B74u;
    // 0x292b78: 0xa2002b0e  sb          $zero, 0x2B0E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11022), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D80u, 0x292B74u, 0x292B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B7Cu;
label_292b7c:
    // 0x292b7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x292B7Cu;
    {
        const bool branch_taken_0x292b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B7Cu;
        // 0x292b80: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b7c) {
            ctx->pc = 0x292BE0u;
            goto label_292be0;
        }
    }
    ctx->pc = 0x292B84u;
    // 0x292b84: 0x8c236ccc  lw          $v1, 0x6CCC($at)
    ctx->pc = 0x292b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27852)));
    // 0x292b88: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x292b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x292b8c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x292b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x292b90: 0xac236ccc  sw          $v1, 0x6CCC($at)
    ctx->pc = 0x292b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CCCu, _value); } while (0);
    // 0x292b94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x292b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292b98: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x292b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x292b9c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x292B9Cu;
    {
        const bool branch_taken_0x292b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x292BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B9Cu;
        // 0x292ba0: 0xac236ce4  sw          $v1, 0x6CE4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b9c) {
            ctx->pc = 0x292BE0u;
            goto label_292be0;
        }
    }
    ctx->pc = 0x292BA4u;
    // 0x292ba4: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x292ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x292ba8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x292BA8u;
    {
        const bool branch_taken_0x292ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292ba8) {
            ctx->pc = 0x292BE0u;
            goto label_292be0;
        }
    }
    ctx->pc = 0x292BB0u;
    // 0x292bb0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x292BB0u;
    SET_GPR_U32(ctx, 31, 0x292BB8u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x292BB0u, 0x292BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BB8u;
label_292bb8:
    // 0x292bb8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x292bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x292bbc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x292bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x292bc0: 0xac236d90  sw          $v1, 0x6D90($at)
    ctx->pc = 0x292bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6D90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6D90u, _value); } while (0);
    // 0x292bc4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x292bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x292bc8: 0xac236df0  sw          $v1, 0x6DF0($at)
    ctx->pc = 0x292bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6DF0u, _value); } while (0);
    // 0x292bcc: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x292bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x292bd0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x292bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x292bd4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x292bd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x292bd8: 0xac236dec  sw          $v1, 0x6DEC($at)
    ctx->pc = 0x292bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6DECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6DECu, _value); } while (0);
    // 0x292bdc: 0x0  nop
    ctx->pc = 0x292bdcu;
    // NOP
label_292be0:
    // 0x292be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x292be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292be4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292bec: 0x3e00008  jr          $ra
    ctx->pc = 0x292BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BECu;
        // 0x292bf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292BF4u;
}
