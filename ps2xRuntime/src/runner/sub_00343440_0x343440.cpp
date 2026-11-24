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

// Function: sub_00343440
// Address: 0x343440 - 0x34412c
void sub_00343440_0x343440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343440_0x343440");
#endif

    switch (ctx->pc) {
        case 0x343464u: goto label_343464;
        case 0x343490u: goto label_343490;
        case 0x3434d8u: goto label_3434d8;
        case 0x3434ecu: goto label_3434ec;
        case 0x343524u: goto label_343524;
        case 0x34353cu: goto label_34353c;
        case 0x343594u: goto label_343594;
        case 0x3435acu: goto label_3435ac;
        case 0x3435c0u: goto label_3435c0;
        case 0x3435d4u: goto label_3435d4;
        case 0x3435e0u: goto label_3435e0;
        case 0x3435f0u: goto label_3435f0;
        case 0x343600u: goto label_343600;
        case 0x343610u: goto label_343610;
        case 0x343620u: goto label_343620;
        case 0x343628u: goto label_343628;
        case 0x343664u: goto label_343664;
        case 0x343684u: goto label_343684;
        case 0x3436ccu: goto label_3436cc;
        case 0x343704u: goto label_343704;
        case 0x34370cu: goto label_34370c;
        case 0x343718u: goto label_343718;
        case 0x343734u: goto label_343734;
        case 0x34379cu: goto label_34379c;
        case 0x3437d0u: goto label_3437d0;
        case 0x3437e8u: goto label_3437e8;
        case 0x3437f4u: goto label_3437f4;
        case 0x343800u: goto label_343800;
        case 0x343808u: goto label_343808;
        case 0x343820u: goto label_343820;
        case 0x343884u: goto label_343884;
        case 0x343974u: goto label_343974;
        case 0x3439b8u: goto label_3439b8;
        case 0x3439ccu: goto label_3439cc;
        case 0x3439e0u: goto label_3439e0;
        case 0x3439ecu: goto label_3439ec;
        case 0x3439fcu: goto label_3439fc;
        case 0x343a0cu: goto label_343a0c;
        case 0x343ab8u: goto label_343ab8;
        case 0x343af0u: goto label_343af0;
        case 0x343b04u: goto label_343b04;
        case 0x343b28u: goto label_343b28;
        case 0x343b38u: goto label_343b38;
        case 0x343b48u: goto label_343b48;
        case 0x343b70u: goto label_343b70;
        case 0x343b90u: goto label_343b90;
        case 0x343ba8u: goto label_343ba8;
        case 0x343bbcu: goto label_343bbc;
        case 0x343bd0u: goto label_343bd0;
        case 0x343bdcu: goto label_343bdc;
        case 0x343becu: goto label_343bec;
        case 0x343bfcu: goto label_343bfc;
        case 0x343cc8u: goto label_343cc8;
        case 0x343d10u: goto label_343d10;
        case 0x343d24u: goto label_343d24;
        case 0x343d38u: goto label_343d38;
        case 0x343d48u: goto label_343d48;
        case 0x343d70u: goto label_343d70;
        case 0x343d90u: goto label_343d90;
        case 0x343da8u: goto label_343da8;
        case 0x343dbcu: goto label_343dbc;
        case 0x343dd0u: goto label_343dd0;
        case 0x343ddcu: goto label_343ddc;
        case 0x343decu: goto label_343dec;
        case 0x343dfcu: goto label_343dfc;
        case 0x343e30u: goto label_343e30;
        case 0x343f08u: goto label_343f08;
        case 0x343f18u: goto label_343f18;
        case 0x343f64u: goto label_343f64;
        case 0x343f80u: goto label_343f80;
        case 0x343f94u: goto label_343f94;
        case 0x343fa8u: goto label_343fa8;
        case 0x343fbcu: goto label_343fbc;
        case 0x343fc8u: goto label_343fc8;
        case 0x343fdcu: goto label_343fdc;
        case 0x343fe8u: goto label_343fe8;
        case 0x344010u: goto label_344010;
        case 0x344030u: goto label_344030;
        case 0x344048u: goto label_344048;
        case 0x34405cu: goto label_34405c;
        case 0x344070u: goto label_344070;
        case 0x34407cu: goto label_34407c;
        case 0x34408cu: goto label_34408c;
        case 0x34409cu: goto label_34409c;
        default: break;
    }

    ctx->pc = 0x343440u;

    // 0x343440: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x343440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x343444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x343444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x343448: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x343448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34344c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x343450: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x343450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343454: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343454u;
    {
        const bool branch_taken_0x343454 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x343458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343454u;
        // 0x343458: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343454) {
            ctx->pc = 0x343470u;
            goto label_343470;
        }
    }
    ctx->pc = 0x34345Cu;
    // 0x34345c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34345Cu;
    SET_GPR_U32(ctx, 31, 0x343464u);
    ctx->pc = 0x343460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34345Cu;
    // 0x343460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34345Cu, 0x343464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343464u;
label_343464:
    // 0x343464: 0x1000032c  b           . + 4 + (0x32C << 2)
    ctx->pc = 0x343464u;
    {
        const bool branch_taken_0x343464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343464) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x34346Cu;
    // 0x34346c: 0x0  nop
    ctx->pc = 0x34346cu;
    // NOP
label_343470:
    // 0x343470: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x343470u;
    {
        const bool branch_taken_0x343470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x343470) {
            ctx->pc = 0x343498u;
            goto label_343498;
        }
    }
    ctx->pc = 0x343478u;
    // 0x343478: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x343478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x34347c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x34347cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343480: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x343480u;
    {
        const bool branch_taken_0x343480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343480u;
        // 0x343484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343480) {
            ctx->pc = 0x343498u;
            goto label_343498;
        }
    }
    ctx->pc = 0x343488u;
    // 0x343488: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343488u;
    SET_GPR_U32(ctx, 31, 0x343490u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343488u, 0x343490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343490u;
label_343490:
    // 0x343490: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x343490u;
    {
        const bool branch_taken_0x343490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343490) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343498u;
label_343498:
    // 0x343498: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x343498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34349c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x34349cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3434a0: 0x1020031d  beqz        $at, . + 4 + (0x31D << 2)
    ctx->pc = 0x3434A0u;
    {
        const bool branch_taken_0x3434a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434A0u;
        // 0x3434a4: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434a0) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x3434A8u;
    // 0x3434a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3434a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3434ac: 0x2484f430  addiu       $a0, $a0, -0xBD0
    ctx->pc = 0x3434acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
    // 0x3434b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3434b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3434b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3434b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3434b8: 0x600008  jr          $v1
    ctx->pc = 0x3434B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3434C0u: goto label_3434c0;
            case 0x343550u: goto label_343550;
            case 0x343570u: goto label_343570;
            case 0x343980u: goto label_343980;
            case 0x3439A0u: goto label_3439a0;
            case 0x343AC0u: goto label_343ac0;
            case 0x343AE0u: goto label_343ae0;
            case 0x343CD0u: goto label_343cd0;
            case 0x343D00u: goto label_343d00;
            case 0x343EF8u: goto label_343ef8;
            case 0x343F70u: goto label_343f70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3434B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3434C0u;
label_3434c0:
    // 0x3434c0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3434C0u;
    {
        const bool branch_taken_0x3434c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3434c0) {
            ctx->pc = 0x343530u;
            goto label_343530;
        }
    }
    ctx->pc = 0x3434C8u;
    // 0x3434c8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3434c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3434cc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3434ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3434d0: 0xc0a97f0  jal         func_2A5FC0
    ctx->pc = 0x3434D0u;
    SET_GPR_U32(ctx, 31, 0x3434D8u);
    ctx->pc = 0x3434D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434D0u;
    // 0x3434d4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5FC0u, 0x3434D0u, 0x3434D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434D8u;
label_3434d8:
    // 0x3434d8: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x3434d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x3434dc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3434dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3434e0: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3434e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3434e4: 0xc0a9810  jal         func_2A6040
    ctx->pc = 0x3434E4u;
    SET_GPR_U32(ctx, 31, 0x3434ECu);
    ctx->pc = 0x3434E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434E4u;
    // 0x3434e8: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6040u, 0x3434E4u, 0x3434ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434ECu;
label_3434ec:
    // 0x3434ec: 0xae220564  sw          $v0, 0x564($s1)
    ctx->pc = 0x3434ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 2));
    // 0x3434f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3434f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3434f4: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3434f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3434f8: 0x3c021700  lui         $v0, 0x1700
    ctx->pc = 0x3434f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5888 << 16));
    // 0x3434fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3434fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x343500: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x343500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x343504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x343504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343508: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x343508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34350c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34350cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x343510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x343514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343518: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x343518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34351c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34351Cu;
    SET_GPR_U32(ctx, 31, 0x343524u);
    ctx->pc = 0x343520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34351Cu;
    // 0x343520: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34351Cu, 0x343524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343524u;
label_343524:
    // 0x343524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x343524u;
    {
        const bool branch_taken_0x343524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343524) {
            ctx->pc = 0x343540u;
            goto label_343540;
        }
    }
    ctx->pc = 0x34352Cu;
    // 0x34352c: 0x0  nop
    ctx->pc = 0x34352cu;
    // NOP
label_343530:
    // 0x343530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343534: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343534u;
    SET_GPR_U32(ctx, 31, 0x34353Cu);
    ctx->pc = 0x343538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343534u;
    // 0x343538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343534u, 0x34353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34353Cu;
label_34353c:
    // 0x34353c: 0x0  nop
    ctx->pc = 0x34353cu;
    // NOP
label_343540:
    // 0x343540: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x343540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343544: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x343548: 0x100002f3  b           . + 4 + (0x2F3 << 2)
    ctx->pc = 0x343548u;
    {
        const bool branch_taken_0x343548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343548u;
        // 0x34354c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343548) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343550u;
label_343550:
    // 0x343550: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x343550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x343554: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x343554u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x343558: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x343558u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34355c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34355cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x343560: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x343560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x343564: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x343564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34356c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34356cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_343570:
    // 0x343570: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x343570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x343574: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x343574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x343578: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x343578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34357c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x343580: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x343580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x343584: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x343584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x343588: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x343588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34358c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x34358Cu;
    SET_GPR_U32(ctx, 31, 0x343594u);
    ctx->pc = 0x343590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34358Cu;
    // 0x343590: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x34358Cu, 0x343594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343594u;
label_343594:
    // 0x343594: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x343594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x343598: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x343598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34359c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x34359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3435a0: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3435a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3435a4: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3435A4u;
    SET_GPR_U32(ctx, 31, 0x3435ACu);
    ctx->pc = 0x3435A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435A4u;
    // 0x3435a8: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3435A4u, 0x3435ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435ACu;
label_3435ac:
    // 0x3435ac: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3435acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3435b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3435b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3435b4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3435b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3435b8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3435B8u;
    SET_GPR_U32(ctx, 31, 0x3435C0u);
    ctx->pc = 0x3435BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435B8u;
    // 0x3435bc: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3435B8u, 0x3435C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435C0u;
label_3435c0:
    // 0x3435c0: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3435c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3435c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3435c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3435c8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3435c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3435cc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3435CCu;
    SET_GPR_U32(ctx, 31, 0x3435D4u);
    ctx->pc = 0x3435D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435CCu;
    // 0x3435d0: 0x24c6f410  addiu       $a2, $a2, -0xBF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3435CCu, 0x3435D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435D4u;
label_3435d4:
    // 0x3435d4: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3435d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3435d8: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3435D8u;
    SET_GPR_U32(ctx, 31, 0x3435E0u);
    ctx->pc = 0x3435DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435D8u;
    // 0x3435dc: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3435D8u, 0x3435E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435E0u;
label_3435e0:
    // 0x3435e0: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x3435e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x3435e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3435e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3435e8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3435E8u;
    SET_GPR_U32(ctx, 31, 0x3435F0u);
    ctx->pc = 0x3435ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435E8u;
    // 0x3435ec: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3435E8u, 0x3435F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435F0u;
label_3435f0:
    // 0x3435f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3435F0u;
    {
        const bool branch_taken_0x3435f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3435F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435F0u;
        // 0x3435f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435f0) {
            ctx->pc = 0x343600u;
            goto label_343600;
        }
    }
    ctx->pc = 0x3435F8u;
    // 0x3435f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3435F8u;
    SET_GPR_U32(ctx, 31, 0x343600u);
    ctx->pc = 0x3435FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435F8u;
    // 0x3435fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3435F8u, 0x343600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343600u;
label_343600:
    // 0x343600: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x343600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x343604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343608: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x343608u;
    SET_GPR_U32(ctx, 31, 0x343610u);
    ctx->pc = 0x34360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343608u;
    // 0x34360c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x343608u, 0x343610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343610u;
label_343610:
    // 0x343610: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343610u;
    {
        const bool branch_taken_0x343610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343610u;
        // 0x343614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343610) {
            ctx->pc = 0x343620u;
            goto label_343620;
        }
    }
    ctx->pc = 0x343618u;
    // 0x343618: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343618u;
    SET_GPR_U32(ctx, 31, 0x343620u);
    ctx->pc = 0x34361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343618u;
    // 0x34361c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343618u, 0x343620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343620u;
label_343620:
    // 0x343620: 0xc0c0818  jal         func_302060
    ctx->pc = 0x343620u;
    SET_GPR_U32(ctx, 31, 0x343628u);
    ctx->pc = 0x343624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343620u;
    // 0x343624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x343620u, 0x343628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343628u;
label_343628:
    // 0x343628: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x343628u;
    {
        const bool branch_taken_0x343628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343628) {
            ctx->pc = 0x343670u;
            goto label_343670;
        }
    }
    ctx->pc = 0x343630u;
    // 0x343630: 0x86220512  lh          $v0, 0x512($s1)
    ctx->pc = 0x343630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x343634: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x343638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34363c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x34363cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x343640: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x343640u;
    {
        const bool branch_taken_0x343640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x343640) {
            ctx->pc = 0x3437A8u;
            goto label_3437a8;
        }
    }
    ctx->pc = 0x343648u;
    // 0x343648: 0x9226056c  lbu         $a2, 0x56C($s1)
    ctx->pc = 0x343648u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x34364c: 0xc62c0568  lwc1        $f12, 0x568($s1)
    ctx->pc = 0x34364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x343650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343654: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x343654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x343658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34365c: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x34365Cu;
    SET_GPR_U32(ctx, 31, 0x343664u);
    ctx->pc = 0x343660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34365Cu;
    // 0x343660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x34365Cu, 0x343664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343664u;
label_343664:
    // 0x343664: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x343664u;
    {
        const bool branch_taken_0x343664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343664) {
            ctx->pc = 0x3437A8u;
            goto label_3437a8;
        }
    }
    ctx->pc = 0x34366Cu;
    // 0x34366c: 0x0  nop
    ctx->pc = 0x34366cu;
    // NOP
label_343670:
    // 0x343670: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x343670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x343674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x343674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343678: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x343678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x34367c: 0xc097184  jal         func_25C610
    ctx->pc = 0x34367Cu;
    SET_GPR_U32(ctx, 31, 0x343684u);
    ctx->pc = 0x343680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34367Cu;
    // 0x343680: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C610u, 0x34367Cu, 0x343684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343684u;
label_343684:
    // 0x343684: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x343684u;
    {
        const bool branch_taken_0x343684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343684) {
            ctx->pc = 0x3436D8u;
            goto label_3436d8;
        }
    }
    ctx->pc = 0x34368Cu;
    // 0x34368c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x34368Cu;
    {
        const bool branch_taken_0x34368c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34368c) {
            ctx->pc = 0x3436C0u;
            goto label_3436c0;
        }
    }
    ctx->pc = 0x343694u;
    // 0x343694: 0x9222056f  lbu         $v0, 0x56F($s1)
    ctx->pc = 0x343694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1391)));
    // 0x343698: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x343698u;
    {
        const bool branch_taken_0x343698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343698) {
            ctx->pc = 0x3436C0u;
            goto label_3436c0;
        }
    }
    ctx->pc = 0x3436A0u;
    // 0x3436a0: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x3436a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x3436a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3436a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3436a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3436a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3436ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3436acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3436b0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3436b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3436b4: 0xfe030520  sd          $v1, 0x520($s0)
    ctx->pc = 0x3436b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
    // 0x3436b8: 0xa222056f  sb          $v0, 0x56F($s1)
    ctx->pc = 0x3436b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1391), (uint8_t)GPR_U32(ctx, 2));
    // 0x3436bc: 0x0  nop
    ctx->pc = 0x3436bcu;
    // NOP
label_3436c0:
    // 0x3436c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3436c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3436c4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3436C4u;
    SET_GPR_U32(ctx, 31, 0x3436CCu);
    ctx->pc = 0x3436C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436C4u;
    // 0x3436c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3436C4u, 0x3436CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436CCu;
label_3436cc:
    // 0x3436cc: 0x10000292  b           . + 4 + (0x292 << 2)
    ctx->pc = 0x3436CCu;
    {
        const bool branch_taken_0x3436cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3436cc) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x3436D4u;
    // 0x3436d4: 0x0  nop
    ctx->pc = 0x3436d4u;
    // NOP
label_3436d8:
    // 0x3436d8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3436d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3436dc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3436dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3436e0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3436e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3436e4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3436e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3436e8: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x3436e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3436ec: 0x26290550  addiu       $t1, $s1, 0x550
    ctx->pc = 0x3436ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3436f0: 0x262a0090  addiu       $t2, $s1, 0x90
    ctx->pc = 0x3436f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3436f4: 0xae220518  sw          $v0, 0x518($s1)
    ctx->pc = 0x3436f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    // 0x3436f8: 0x8e240518  lw          $a0, 0x518($s1)
    ctx->pc = 0x3436f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x3436fc: 0xc097238  jal         func_25C8E0
    ctx->pc = 0x3436FCu;
    SET_GPR_U32(ctx, 31, 0x343704u);
    ctx->pc = 0x343700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436FCu;
    // 0x343700: 0x262b056e  addiu       $t3, $s1, 0x56E (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1390));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C8E0u, 0x3436FCu, 0x343704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343704u;
label_343704:
    // 0x343704: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x343704u;
    SET_GPR_U32(ctx, 31, 0x34370Cu);
    ctx->pc = 0x343708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343704u;
    // 0x343708: 0x8e240560  lw          $a0, 0x560($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x343704u, 0x34370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34370Cu;
label_34370c:
    // 0x34370c: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x34370cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x343710: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x343710u;
    SET_GPR_U32(ctx, 31, 0x343718u);
    ctx->pc = 0x343714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343710u;
    // 0x343714: 0x8e240564  lw          $a0, 0x564($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x343710u, 0x343718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343718u;
label_343718:
    // 0x343718: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x343718u;
    {
        const bool branch_taken_0x343718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343718u;
        // 0x34371c: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343718) {
            ctx->pc = 0x343768u;
            goto label_343768;
        }
    }
    ctx->pc = 0x343720u;
    // 0x343720: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x343720u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x343724: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x343724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343728: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x343728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34372c: 0xc0a9878  jal         func_2A61E0
    ctx->pc = 0x34372Cu;
    SET_GPR_U32(ctx, 31, 0x343734u);
    ctx->pc = 0x343730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34372Cu;
    // 0x343730: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A61E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A61E0u, 0x34372Cu, 0x343734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343734u;
label_343734:
    // 0x343734: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x343734u;
    {
        const bool branch_taken_0x343734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x343738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343734u;
        // 0x343738: 0xae220564  sw          $v0, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343734) {
            ctx->pc = 0x343768u;
            goto label_343768;
        }
    }
    ctx->pc = 0x34373Cu;
    // 0x34373c: 0x9222056f  lbu         $v0, 0x56F($s1)
    ctx->pc = 0x34373cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1391)));
    // 0x343740: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x343740u;
    {
        const bool branch_taken_0x343740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343740) {
            ctx->pc = 0x343768u;
            goto label_343768;
        }
    }
    ctx->pc = 0x343748u;
    // 0x343748: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x343748u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x34374c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x34374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x343750: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343754: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x343754u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x343758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34375c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x343760: 0xfe030520  sd          $v1, 0x520($s0)
    ctx->pc = 0x343760u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
    // 0x343764: 0xa222056f  sb          $v0, 0x56F($s1)
    ctx->pc = 0x343764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1391), (uint8_t)GPR_U32(ctx, 2));
label_343768:
    // 0x343768: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x343768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34376c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34376cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x343770: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x343770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x343774: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x343774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x343778: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x343778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34377c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34377cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343780: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x343780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x343784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x343784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x343788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34378c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34378cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343790: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x343790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343794: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x343794u;
    SET_GPR_U32(ctx, 31, 0x34379Cu);
    ctx->pc = 0x343798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343794u;
    // 0x343798: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x343794u, 0x34379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34379Cu;
label_34379c:
    // 0x34379c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3437a0: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x3437A0u;
    {
        const bool branch_taken_0x3437a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3437A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437A0u;
        // 0x3437a4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437a0) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x3437A8u;
label_3437a8:
    // 0x3437a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3437a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3437ac: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x3437acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x3437b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3437b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437b4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3437b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3437b8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x3437b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x3437bc: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x3437bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3437c0: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x3437c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3437c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3437c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3437c8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x3437C8u;
    SET_GPR_U32(ctx, 31, 0x3437D0u);
    ctx->pc = 0x3437CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437C8u;
    // 0x3437cc: 0x27aa011c  addiu       $t2, $sp, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x3437C8u, 0x3437D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437D0u;
label_3437d0:
    // 0x3437d0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3437D0u;
    {
        const bool branch_taken_0x3437d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3437d0) {
            ctx->pc = 0x343898u;
            goto label_343898;
        }
    }
    ctx->pc = 0x3437D8u;
    // 0x3437d8: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x3437d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x3437dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3437dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437e0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3437E0u;
    SET_GPR_U32(ctx, 31, 0x3437E8u);
    ctx->pc = 0x3437E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437E0u;
    // 0x3437e4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3437E0u, 0x3437E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437E8u;
label_3437e8:
    // 0x3437e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3437ec: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3437ECu;
    SET_GPR_U32(ctx, 31, 0x3437F4u);
    ctx->pc = 0x3437F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437ECu;
    // 0x3437f0: 0x26250090  addiu       $a1, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3437ECu, 0x3437F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437F4u;
label_3437f4:
    // 0x3437f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3437f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3437f8: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x3437F8u;
    SET_GPR_U32(ctx, 31, 0x343800u);
    ctx->pc = 0x3437FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437F8u;
    // 0x3437fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x3437F8u, 0x343800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343800u;
label_343800:
    // 0x343800: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x343800u;
    SET_GPR_U32(ctx, 31, 0x343808u);
    ctx->pc = 0x343804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343800u;
    // 0x343804: 0x8e240560  lw          $a0, 0x560($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x343800u, 0x343808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343808u;
label_343808:
    // 0x343808: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x343808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x34380c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x34380cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x343810: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x343810u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x343814: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x343814u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x343818: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x343818u;
    SET_GPR_U32(ctx, 31, 0x343820u);
    ctx->pc = 0x34381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343818u;
    // 0x34381c: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x343818u, 0x343820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343820u;
label_343820:
    // 0x343820: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x343820u;
    {
        const bool branch_taken_0x343820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x343820) {
            ctx->pc = 0x343850u;
            goto label_343850;
        }
    }
    ctx->pc = 0x343828u;
    // 0x343828: 0x9222056f  lbu         $v0, 0x56F($s1)
    ctx->pc = 0x343828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1391)));
    // 0x34382c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34382Cu;
    {
        const bool branch_taken_0x34382c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34382c) {
            ctx->pc = 0x343850u;
            goto label_343850;
        }
    }
    ctx->pc = 0x343834u;
    // 0x343834: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x343834u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x343838: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x343838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34383c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343844: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x343844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x343848: 0xfe030520  sd          $v1, 0x520($s0)
    ctx->pc = 0x343848u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
    // 0x34384c: 0xa222056f  sb          $v0, 0x56F($s1)
    ctx->pc = 0x34384cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1391), (uint8_t)GPR_U32(ctx, 2));
label_343850:
    // 0x343850: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x343850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x343854: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x343854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x343858: 0x3c021800  lui         $v0, 0x1800
    ctx->pc = 0x343858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6144 << 16));
    // 0x34385c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x343860: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x343860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x343864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x343864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343868: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x343868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34386c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34386cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x343870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343874: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x343874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343878: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x343878u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34387c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34387Cu;
    SET_GPR_U32(ctx, 31, 0x343884u);
    ctx->pc = 0x343880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34387Cu;
    // 0x343880: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34387Cu, 0x343884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343884u;
label_343884:
    // 0x343884: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x343884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34388c: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x34388Cu;
    {
        const bool branch_taken_0x34388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34388Cu;
        // 0x343890: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34388c) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343894u;
    // 0x343894: 0x0  nop
    ctx->pc = 0x343894u;
    // NOP
label_343898:
    // 0x343898: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x343898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34389c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34389Cu;
    {
        const bool branch_taken_0x34389c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34389Cu;
        // 0x3438a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34389c) {
            ctx->pc = 0x3438B0u;
            goto label_3438b0;
        }
    }
    ctx->pc = 0x3438A4u;
    // 0x3438a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3438A4u;
    {
        const bool branch_taken_0x3438a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3438a4) {
            ctx->pc = 0x343930u;
            goto label_343930;
        }
    }
    ctx->pc = 0x3438ACu;
    // 0x3438ac: 0x0  nop
    ctx->pc = 0x3438acu;
    // NOP
label_3438b0:
    // 0x3438b0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3438b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3438b4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3438b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3438b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3438b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3438bc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3438bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3438c0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3438c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3438c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3438C4u;
    {
        const bool branch_taken_0x3438c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3438c4) {
            ctx->pc = 0x343900u;
            goto label_343900;
        }
    }
    ctx->pc = 0x3438CCu;
    // 0x3438cc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3438ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3438d0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3438d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3438d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3438D4u;
    {
        const bool branch_taken_0x3438d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3438D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438D4u;
        // 0x3438d8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438d4) {
            ctx->pc = 0x343928u;
            goto label_343928;
        }
    }
    ctx->pc = 0x3438DCu;
    // 0x3438dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3438dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3438e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3438e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3438e4: 0x0  nop
    ctx->pc = 0x3438e4u;
    // NOP
    // 0x3438e8: 0x0  nop
    ctx->pc = 0x3438e8u;
    // NOP
    // 0x3438ec: 0x2010  mfhi        $a0
    ctx->pc = 0x3438ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3438f0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3438f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3438f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3438F4u;
    {
        const bool branch_taken_0x3438f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438F4u;
        // 0x3438f8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438f4) {
            ctx->pc = 0x343928u;
            goto label_343928;
        }
    }
    ctx->pc = 0x3438FCu;
    // 0x3438fc: 0x0  nop
    ctx->pc = 0x3438fcu;
    // NOP
label_343900:
    // 0x343900: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343904: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x343904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x343908: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x343908u;
    {
        const bool branch_taken_0x343908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343908) {
            ctx->pc = 0x343928u;
            goto label_343928;
        }
    }
    ctx->pc = 0x343910u;
    // 0x343910: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343910u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343918: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x343918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34391c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34391Cu;
    {
        const bool branch_taken_0x34391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34391Cu;
        // 0x343920: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34391c) {
            ctx->pc = 0x343930u;
            goto label_343930;
        }
    }
    ctx->pc = 0x343924u;
    // 0x343924: 0x0  nop
    ctx->pc = 0x343924u;
    // NOP
label_343928:
    // 0x343928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34392c: 0x0  nop
    ctx->pc = 0x34392cu;
    // NOP
label_343930:
    // 0x343930: 0x146001f9  bnez        $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x343930u;
    {
        const bool branch_taken_0x343930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343930) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343938u;
    // 0x343938: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x343938u;
    {
        const bool branch_taken_0x343938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x343938) {
            ctx->pc = 0x343968u;
            goto label_343968;
        }
    }
    ctx->pc = 0x343940u;
    // 0x343940: 0x9222056f  lbu         $v0, 0x56F($s1)
    ctx->pc = 0x343940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1391)));
    // 0x343944: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x343944u;
    {
        const bool branch_taken_0x343944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343944) {
            ctx->pc = 0x343968u;
            goto label_343968;
        }
    }
    ctx->pc = 0x34394Cu;
    // 0x34394c: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x34394cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x343950: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x343950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x343954: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x343954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34395c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34395cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x343960: 0xfe030520  sd          $v1, 0x520($s0)
    ctx->pc = 0x343960u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
    // 0x343964: 0xa222056f  sb          $v0, 0x56F($s1)
    ctx->pc = 0x343964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1391), (uint8_t)GPR_U32(ctx, 2));
label_343968:
    // 0x343968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34396c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34396Cu;
    SET_GPR_U32(ctx, 31, 0x343974u);
    ctx->pc = 0x343970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34396Cu;
    // 0x343970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34396Cu, 0x343974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343974u;
label_343974:
    // 0x343974: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x343974u;
    {
        const bool branch_taken_0x343974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343974) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x34397Cu;
    // 0x34397c: 0x0  nop
    ctx->pc = 0x34397cu;
    // NOP
label_343980:
    // 0x343980: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x343980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x343984: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x343984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x343988: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x343988u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34398c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34398cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x343990: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x343990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x343994: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x343994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34399c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34399cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3439a0:
    // 0x3439a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3439a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3439a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3439a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3439a8: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3439a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3439ac: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3439acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3439b0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3439B0u;
    SET_GPR_U32(ctx, 31, 0x3439B8u);
    ctx->pc = 0x3439B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439B0u;
    // 0x3439b4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3439B0u, 0x3439B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439B8u;
label_3439b8:
    // 0x3439b8: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3439b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3439bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3439bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3439c0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3439c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3439c4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3439C4u;
    SET_GPR_U32(ctx, 31, 0x3439CCu);
    ctx->pc = 0x3439C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439C4u;
    // 0x3439c8: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3439C4u, 0x3439CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439CCu;
label_3439cc:
    // 0x3439cc: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3439ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3439d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3439d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3439d4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3439d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3439d8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3439D8u;
    SET_GPR_U32(ctx, 31, 0x3439E0u);
    ctx->pc = 0x3439DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439D8u;
    // 0x3439dc: 0x24c6f410  addiu       $a2, $a2, -0xBF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3439D8u, 0x3439E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439E0u;
label_3439e0:
    // 0x3439e0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x3439e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x3439e4: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3439E4u;
    SET_GPR_U32(ctx, 31, 0x3439ECu);
    ctx->pc = 0x3439E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439E4u;
    // 0x3439e8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3439E4u, 0x3439ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439ECu;
label_3439ec:
    // 0x3439ec: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x3439ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x3439f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3439f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439f4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3439F4u;
    SET_GPR_U32(ctx, 31, 0x3439FCu);
    ctx->pc = 0x3439F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439F4u;
    // 0x3439f8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3439F4u, 0x3439FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439FCu;
label_3439fc:
    // 0x3439fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3439FCu;
    {
        const bool branch_taken_0x3439fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439FCu;
        // 0x343a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439fc) {
            ctx->pc = 0x343A10u;
            goto label_343a10;
        }
    }
    ctx->pc = 0x343A04u;
    // 0x343a04: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343A04u;
    SET_GPR_U32(ctx, 31, 0x343A0Cu);
    ctx->pc = 0x343A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A04u;
    // 0x343a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343A04u, 0x343A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A0Cu;
label_343a0c:
    // 0x343a0c: 0x0  nop
    ctx->pc = 0x343a0cu;
    // NOP
label_343a10:
    // 0x343a10: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x343a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x343a14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343A14u;
    {
        const bool branch_taken_0x343a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A14u;
        // 0x343a18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a14) {
            ctx->pc = 0x343A28u;
            goto label_343a28;
        }
    }
    ctx->pc = 0x343A1Cu;
    // 0x343a1c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x343A1Cu;
    {
        const bool branch_taken_0x343a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343a1c) {
            ctx->pc = 0x343AA8u;
            goto label_343aa8;
        }
    }
    ctx->pc = 0x343A24u;
    // 0x343a24: 0x0  nop
    ctx->pc = 0x343a24u;
    // NOP
label_343a28:
    // 0x343a28: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x343a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343a2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x343a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x343a30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x343a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x343a34: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343a34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343a38: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x343a3c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x343A3Cu;
    {
        const bool branch_taken_0x343a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x343a3c) {
            ctx->pc = 0x343A78u;
            goto label_343a78;
        }
    }
    ctx->pc = 0x343A44u;
    // 0x343a44: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x343a44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343a48: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x343a48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x343a4c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x343A4Cu;
    {
        const bool branch_taken_0x343a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A4Cu;
        // 0x343a50: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a4c) {
            ctx->pc = 0x343AA0u;
            goto label_343aa0;
        }
    }
    ctx->pc = 0x343A54u;
    // 0x343a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343a58: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x343a58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x343a5c: 0x0  nop
    ctx->pc = 0x343a5cu;
    // NOP
    // 0x343a60: 0x0  nop
    ctx->pc = 0x343a60u;
    // NOP
    // 0x343a64: 0x2010  mfhi        $a0
    ctx->pc = 0x343a64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x343a68: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343a68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343a6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x343A6Cu;
    {
        const bool branch_taken_0x343a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A6Cu;
        // 0x343a70: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a6c) {
            ctx->pc = 0x343AA0u;
            goto label_343aa0;
        }
    }
    ctx->pc = 0x343A74u;
    // 0x343a74: 0x0  nop
    ctx->pc = 0x343a74u;
    // NOP
label_343a78:
    // 0x343a78: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343a78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343a7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x343a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x343a80: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x343A80u;
    {
        const bool branch_taken_0x343a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343a80) {
            ctx->pc = 0x343AA0u;
            goto label_343aa0;
        }
    }
    ctx->pc = 0x343A88u;
    // 0x343a88: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343a88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343a90: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x343a90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x343a94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x343A94u;
    {
        const bool branch_taken_0x343a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A94u;
        // 0x343a98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a94) {
            ctx->pc = 0x343AA8u;
            goto label_343aa8;
        }
    }
    ctx->pc = 0x343A9Cu;
    // 0x343a9c: 0x0  nop
    ctx->pc = 0x343a9cu;
    // NOP
label_343aa0:
    // 0x343aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343aa4: 0x0  nop
    ctx->pc = 0x343aa4u;
    // NOP
label_343aa8:
    // 0x343aa8: 0x1460019b  bnez        $v1, . + 4 + (0x19B << 2)
    ctx->pc = 0x343AA8u;
    {
        const bool branch_taken_0x343aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AA8u;
        // 0x343aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343aa8) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343AB0u;
    // 0x343ab0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343AB0u;
    SET_GPR_U32(ctx, 31, 0x343AB8u);
    ctx->pc = 0x343AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343AB0u;
    // 0x343ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343AB0u, 0x343AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343AB8u;
label_343ab8:
    // 0x343ab8: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x343AB8u;
    {
        const bool branch_taken_0x343ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343ab8) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343AC0u;
label_343ac0:
    // 0x343ac0: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x343ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x343ac4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x343ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x343ac8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x343ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x343acc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x343accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x343ad0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x343ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x343ad4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x343ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x343adc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x343adcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_343ae0:
    // 0x343ae0: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x343ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x343ae4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x343ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x343ae8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x343AE8u;
    SET_GPR_U32(ctx, 31, 0x343AF0u);
    ctx->pc = 0x343AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343AE8u;
    // 0x343aec: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x343AE8u, 0x343AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343AF0u;
label_343af0:
    // 0x343af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343af4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343AF4u;
    {
        const bool branch_taken_0x343af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x343AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343AF4u;
        // 0x343af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343af4) {
            ctx->pc = 0x343B10u;
            goto label_343b10;
        }
    }
    ctx->pc = 0x343AFCu;
    // 0x343afc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343AFCu;
    SET_GPR_U32(ctx, 31, 0x343B04u);
    ctx->pc = 0x343B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343AFCu;
    // 0x343b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343AFCu, 0x343B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B04u;
label_343b04:
    // 0x343b04: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x343B04u;
    {
        const bool branch_taken_0x343b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b04) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343B0Cu;
    // 0x343b0c: 0x0  nop
    ctx->pc = 0x343b0cu;
    // NOP
label_343b10:
    // 0x343b10: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x343b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x343b14: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x343b14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x343b18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x343B18u;
    {
        const bool branch_taken_0x343b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B18u;
        // 0x343b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b18) {
            ctx->pc = 0x343B30u;
            goto label_343b30;
        }
    }
    ctx->pc = 0x343B20u;
    // 0x343b20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343B20u;
    SET_GPR_U32(ctx, 31, 0x343B28u);
    ctx->pc = 0x343B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B20u;
    // 0x343b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343B20u, 0x343B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B28u;
label_343b28:
    // 0x343b28: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x343B28u;
    {
        const bool branch_taken_0x343b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b28) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343B30u;
label_343b30:
    // 0x343b30: 0xc097864  jal         func_25E190
    ctx->pc = 0x343B30u;
    SET_GPR_U32(ctx, 31, 0x343B38u);
    ctx->pc = 0x343B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B30u;
    // 0x343b34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x343B30u, 0x343B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B38u;
label_343b38:
    // 0x343b38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x343B38u;
    {
        const bool branch_taken_0x343b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B38u;
        // 0x343b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b38) {
            ctx->pc = 0x343B50u;
            goto label_343b50;
        }
    }
    ctx->pc = 0x343B40u;
    // 0x343b40: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343B40u;
    SET_GPR_U32(ctx, 31, 0x343B48u);
    ctx->pc = 0x343B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B40u;
    // 0x343b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343B40u, 0x343B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B48u;
label_343b48:
    // 0x343b48: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x343B48u;
    {
        const bool branch_taken_0x343b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b48) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343B50u;
label_343b50:
    // 0x343b50: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x343b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x343b54: 0x9223056e  lbu         $v1, 0x56E($s1)
    ctx->pc = 0x343b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x343b58: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x343b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x343b5c: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x343b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x343b60: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x343b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x343b64: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x343b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x343b68: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x343B68u;
    SET_GPR_U32(ctx, 31, 0x343B70u);
    ctx->pc = 0x343B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B68u;
    // 0x343b6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x343B68u, 0x343B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B70u;
label_343b70:
    // 0x343b70: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x343b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x343b74: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x343b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x343b78: 0x9223056e  lbu         $v1, 0x56E($s1)
    ctx->pc = 0x343b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x343b7c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x343b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x343b80: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x343b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x343b84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x343b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x343b88: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x343B88u;
    SET_GPR_U32(ctx, 31, 0x343B90u);
    ctx->pc = 0x343B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B88u;
    // 0x343b8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x343B88u, 0x343B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B90u;
label_343b90:
    // 0x343b90: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x343b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x343b94: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x343b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343b98: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x343b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x343b9c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x343b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x343ba0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x343BA0u;
    SET_GPR_U32(ctx, 31, 0x343BA8u);
    ctx->pc = 0x343BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BA0u;
    // 0x343ba4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x343BA0u, 0x343BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BA8u;
label_343ba8:
    // 0x343ba8: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x343ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x343bac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x343bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x343bb0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x343bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343bb4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x343BB4u;
    SET_GPR_U32(ctx, 31, 0x343BBCu);
    ctx->pc = 0x343BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BB4u;
    // 0x343bb8: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x343BB4u, 0x343BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BBCu;
label_343bbc:
    // 0x343bbc: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x343bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x343bc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x343bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x343bc4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x343bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343bc8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x343BC8u;
    SET_GPR_U32(ctx, 31, 0x343BD0u);
    ctx->pc = 0x343BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BC8u;
    // 0x343bcc: 0x24c6f410  addiu       $a2, $a2, -0xBF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x343BC8u, 0x343BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BD0u;
label_343bd0:
    // 0x343bd0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x343bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x343bd4: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x343BD4u;
    SET_GPR_U32(ctx, 31, 0x343BDCu);
    ctx->pc = 0x343BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BD4u;
    // 0x343bd8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x343BD4u, 0x343BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BDCu;
label_343bdc:
    // 0x343bdc: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x343bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x343be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343be4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x343BE4u;
    SET_GPR_U32(ctx, 31, 0x343BECu);
    ctx->pc = 0x343BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BE4u;
    // 0x343be8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x343BE4u, 0x343BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BECu;
label_343bec:
    // 0x343bec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343BECu;
    {
        const bool branch_taken_0x343bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BECu;
        // 0x343bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bec) {
            ctx->pc = 0x343C00u;
            goto label_343c00;
        }
    }
    ctx->pc = 0x343BF4u;
    // 0x343bf4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343BF4u;
    SET_GPR_U32(ctx, 31, 0x343BFCu);
    ctx->pc = 0x343BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BF4u;
    // 0x343bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343BF4u, 0x343BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BFCu;
label_343bfc:
    // 0x343bfc: 0x0  nop
    ctx->pc = 0x343bfcu;
    // NOP
label_343c00:
    // 0x343c00: 0x9223053a  lbu         $v1, 0x53A($s1)
    ctx->pc = 0x343c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
    // 0x343c04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x343C04u;
    {
        const bool branch_taken_0x343c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x343c04) {
            ctx->pc = 0x343C20u;
            goto label_343c20;
        }
    }
    ctx->pc = 0x343C0Cu;
    // 0x343c0c: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x343c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x343c14: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x343C14u;
    {
        const bool branch_taken_0x343c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C14u;
        // 0x343c18: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c14) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343C1Cu;
    // 0x343c1c: 0x0  nop
    ctx->pc = 0x343c1cu;
    // NOP
label_343c20:
    // 0x343c20: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x343c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x343c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343C24u;
    {
        const bool branch_taken_0x343c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C24u;
        // 0x343c28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c24) {
            ctx->pc = 0x343C38u;
            goto label_343c38;
        }
    }
    ctx->pc = 0x343C2Cu;
    // 0x343c2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x343C2Cu;
    {
        const bool branch_taken_0x343c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343c2c) {
            ctx->pc = 0x343CB8u;
            goto label_343cb8;
        }
    }
    ctx->pc = 0x343C34u;
    // 0x343c34: 0x0  nop
    ctx->pc = 0x343c34u;
    // NOP
label_343c38:
    // 0x343c38: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x343c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343c3c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x343c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x343c40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x343c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x343c44: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343c44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343c48: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x343c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x343c4c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x343C4Cu;
    {
        const bool branch_taken_0x343c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x343c4c) {
            ctx->pc = 0x343C88u;
            goto label_343c88;
        }
    }
    ctx->pc = 0x343C54u;
    // 0x343c54: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x343c54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343c58: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x343c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x343c5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x343C5Cu;
    {
        const bool branch_taken_0x343c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C5Cu;
        // 0x343c60: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c5c) {
            ctx->pc = 0x343CB0u;
            goto label_343cb0;
        }
    }
    ctx->pc = 0x343C64u;
    // 0x343c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c68: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x343c68u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x343c6c: 0x0  nop
    ctx->pc = 0x343c6cu;
    // NOP
    // 0x343c70: 0x0  nop
    ctx->pc = 0x343c70u;
    // NOP
    // 0x343c74: 0x2010  mfhi        $a0
    ctx->pc = 0x343c74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x343c78: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343c7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x343C7Cu;
    {
        const bool branch_taken_0x343c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C7Cu;
        // 0x343c80: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c7c) {
            ctx->pc = 0x343CB0u;
            goto label_343cb0;
        }
    }
    ctx->pc = 0x343C84u;
    // 0x343c84: 0x0  nop
    ctx->pc = 0x343c84u;
    // NOP
label_343c88:
    // 0x343c88: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343c88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343c8c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x343c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x343c90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x343C90u;
    {
        const bool branch_taken_0x343c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343c90) {
            ctx->pc = 0x343CB0u;
            goto label_343cb0;
        }
    }
    ctx->pc = 0x343C98u;
    // 0x343c98: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343c98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343ca0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x343ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x343ca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x343CA4u;
    {
        const bool branch_taken_0x343ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CA4u;
        // 0x343ca8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ca4) {
            ctx->pc = 0x343CB8u;
            goto label_343cb8;
        }
    }
    ctx->pc = 0x343CACu;
    // 0x343cac: 0x0  nop
    ctx->pc = 0x343cacu;
    // NOP
label_343cb0:
    // 0x343cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343cb4: 0x0  nop
    ctx->pc = 0x343cb4u;
    // NOP
label_343cb8:
    // 0x343cb8: 0x14600117  bnez        $v1, . + 4 + (0x117 << 2)
    ctx->pc = 0x343CB8u;
    {
        const bool branch_taken_0x343cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CB8u;
        // 0x343cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343cb8) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343CC0u;
    // 0x343cc0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343CC0u;
    SET_GPR_U32(ctx, 31, 0x343CC8u);
    ctx->pc = 0x343CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CC0u;
    // 0x343cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343CC0u, 0x343CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CC8u;
label_343cc8:
    // 0x343cc8: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x343CC8u;
    {
        const bool branch_taken_0x343cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343cc8) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343CD0u;
label_343cd0:
    // 0x343cd0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x343cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x343cd4: 0xa222056c  sb          $v0, 0x56C($s1)
    ctx->pc = 0x343cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1388), (uint8_t)GPR_U32(ctx, 2));
    // 0x343cd8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x343cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x343cdc: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x343cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x343ce0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x343ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x343ce4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x343ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x343ce8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x343ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x343cec: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x343cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343cf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x343cf4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x343CF4u;
    {
        const bool branch_taken_0x343cf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x343CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CF4u;
        // 0x343cf8: 0xa2220521  sb          $v0, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343cf4) {
            ctx->pc = 0x343D00u;
            goto label_343d00;
        }
    }
    ctx->pc = 0x343CFCu;
    // 0x343cfc: 0xae002988  sw          $zero, 0x2988($s0)
    ctx->pc = 0x343cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10632), GPR_U32(ctx, 0));
label_343d00:
    // 0x343d00: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x343d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x343d04: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x343d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x343d08: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x343D08u;
    SET_GPR_U32(ctx, 31, 0x343D10u);
    ctx->pc = 0x343D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D08u;
    // 0x343d0c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x343D08u, 0x343D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D10u;
label_343d10:
    // 0x343d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343d14: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343D14u;
    {
        const bool branch_taken_0x343d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x343D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D14u;
        // 0x343d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d14) {
            ctx->pc = 0x343D30u;
            goto label_343d30;
        }
    }
    ctx->pc = 0x343D1Cu;
    // 0x343d1c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343D1Cu;
    SET_GPR_U32(ctx, 31, 0x343D24u);
    ctx->pc = 0x343D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D1Cu;
    // 0x343d20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343D1Cu, 0x343D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D24u;
label_343d24:
    // 0x343d24: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x343D24u;
    {
        const bool branch_taken_0x343d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343d24) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343D2Cu;
    // 0x343d2c: 0x0  nop
    ctx->pc = 0x343d2cu;
    // NOP
label_343d30:
    // 0x343d30: 0xc097864  jal         func_25E190
    ctx->pc = 0x343D30u;
    SET_GPR_U32(ctx, 31, 0x343D38u);
    ctx->pc = 0x343D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D30u;
    // 0x343d34: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x343D30u, 0x343D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D38u;
label_343d38:
    // 0x343d38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x343D38u;
    {
        const bool branch_taken_0x343d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343D38u;
        // 0x343d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d38) {
            ctx->pc = 0x343D50u;
            goto label_343d50;
        }
    }
    ctx->pc = 0x343D40u;
    // 0x343d40: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343D40u;
    SET_GPR_U32(ctx, 31, 0x343D48u);
    ctx->pc = 0x343D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D40u;
    // 0x343d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343D40u, 0x343D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D48u;
label_343d48:
    // 0x343d48: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x343D48u;
    {
        const bool branch_taken_0x343d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343d48) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343D50u;
label_343d50:
    // 0x343d50: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x343d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x343d54: 0x9223056e  lbu         $v1, 0x56E($s1)
    ctx->pc = 0x343d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x343d58: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x343d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x343d5c: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x343d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x343d60: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x343d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x343d64: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x343d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x343d68: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x343D68u;
    SET_GPR_U32(ctx, 31, 0x343D70u);
    ctx->pc = 0x343D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D68u;
    // 0x343d6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x343D68u, 0x343D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D70u;
label_343d70:
    // 0x343d70: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x343d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x343d74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x343d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x343d78: 0x9223056e  lbu         $v1, 0x56E($s1)
    ctx->pc = 0x343d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x343d7c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x343d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x343d80: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x343d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x343d84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x343d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x343d88: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x343D88u;
    SET_GPR_U32(ctx, 31, 0x343D90u);
    ctx->pc = 0x343D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D88u;
    // 0x343d8c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x343D88u, 0x343D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D90u;
label_343d90:
    // 0x343d90: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x343d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x343d94: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x343d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343d98: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x343d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x343d9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x343d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x343da0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x343DA0u;
    SET_GPR_U32(ctx, 31, 0x343DA8u);
    ctx->pc = 0x343DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DA0u;
    // 0x343da4: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x343DA0u, 0x343DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DA8u;
label_343da8:
    // 0x343da8: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x343da8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x343dac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x343dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x343db0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x343db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343db4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x343DB4u;
    SET_GPR_U32(ctx, 31, 0x343DBCu);
    ctx->pc = 0x343DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DB4u;
    // 0x343db8: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x343DB4u, 0x343DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DBCu;
label_343dbc:
    // 0x343dbc: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x343dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x343dc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x343dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x343dc4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x343dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343dc8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x343DC8u;
    SET_GPR_U32(ctx, 31, 0x343DD0u);
    ctx->pc = 0x343DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DC8u;
    // 0x343dcc: 0x24c6f410  addiu       $a2, $a2, -0xBF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x343DC8u, 0x343DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DD0u;
label_343dd0:
    // 0x343dd0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x343dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x343dd4: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x343DD4u;
    SET_GPR_U32(ctx, 31, 0x343DDCu);
    ctx->pc = 0x343DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DD4u;
    // 0x343dd8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x343DD4u, 0x343DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DDCu;
label_343ddc:
    // 0x343ddc: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x343ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x343de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343de4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x343DE4u;
    SET_GPR_U32(ctx, 31, 0x343DECu);
    ctx->pc = 0x343DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DE4u;
    // 0x343de8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x343DE4u, 0x343DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DECu;
label_343dec:
    // 0x343dec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343DECu;
    {
        const bool branch_taken_0x343dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343DECu;
        // 0x343df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343dec) {
            ctx->pc = 0x343E00u;
            goto label_343e00;
        }
    }
    ctx->pc = 0x343DF4u;
    // 0x343df4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343DF4u;
    SET_GPR_U32(ctx, 31, 0x343DFCu);
    ctx->pc = 0x343DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DF4u;
    // 0x343df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343DF4u, 0x343DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DFCu;
label_343dfc:
    // 0x343dfc: 0x0  nop
    ctx->pc = 0x343dfcu;
    // NOP
label_343e00:
    // 0x343e00: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343e00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343e04: 0x4600010  bltz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x343E04u;
    {
        const bool branch_taken_0x343e04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x343E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E04u;
        // 0x343e08: 0x28610009  slti        $at, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e04) {
            ctx->pc = 0x343E48u;
            goto label_343e48;
        }
    }
    ctx->pc = 0x343E0Cu;
    // 0x343e0c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x343E0Cu;
    {
        const bool branch_taken_0x343e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e0c) {
            ctx->pc = 0x343E48u;
            goto label_343e48;
        }
    }
    ctx->pc = 0x343E14u;
    // 0x343e14: 0x9226056c  lbu         $a2, 0x56C($s1)
    ctx->pc = 0x343e14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x343e18: 0xc62c0568  lwc1        $f12, 0x568($s1)
    ctx->pc = 0x343e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x343e1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x343e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e24: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x343e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x343e28: 0xc0c0900  jal         func_302400
    ctx->pc = 0x343E28u;
    SET_GPR_U32(ctx, 31, 0x343E30u);
    ctx->pc = 0x343E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E28u;
    // 0x343e2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x343E28u, 0x343E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E30u;
label_343e30:
    // 0x343e30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x343E30u;
    {
        const bool branch_taken_0x343e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e30) {
            ctx->pc = 0x343E48u;
            goto label_343e48;
        }
    }
    ctx->pc = 0x343E38u;
    // 0x343e38: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x343e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x343e40: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x343E40u;
    {
        const bool branch_taken_0x343e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E40u;
        // 0x343e44: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e40) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343E48u;
label_343e48:
    // 0x343e48: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x343e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x343e4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343E4Cu;
    {
        const bool branch_taken_0x343e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E4Cu;
        // 0x343e50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e4c) {
            ctx->pc = 0x343E60u;
            goto label_343e60;
        }
    }
    ctx->pc = 0x343E54u;
    // 0x343e54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x343E54u;
    {
        const bool branch_taken_0x343e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e54) {
            ctx->pc = 0x343EE0u;
            goto label_343ee0;
        }
    }
    ctx->pc = 0x343E5Cu;
    // 0x343e5c: 0x0  nop
    ctx->pc = 0x343e5cu;
    // NOP
label_343e60:
    // 0x343e60: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x343e60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343e64: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x343e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x343e68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x343e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x343e6c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343e70: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x343e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x343e74: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x343E74u;
    {
        const bool branch_taken_0x343e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x343e74) {
            ctx->pc = 0x343EB0u;
            goto label_343eb0;
        }
    }
    ctx->pc = 0x343E7Cu;
    // 0x343e7c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x343e7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343e80: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x343e80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x343e84: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x343E84u;
    {
        const bool branch_taken_0x343e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x343E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E84u;
        // 0x343e88: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e84) {
            ctx->pc = 0x343ED8u;
            goto label_343ed8;
        }
    }
    ctx->pc = 0x343E8Cu;
    // 0x343e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e90: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x343e90u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x343e94: 0x0  nop
    ctx->pc = 0x343e94u;
    // NOP
    // 0x343e98: 0x0  nop
    ctx->pc = 0x343e98u;
    // NOP
    // 0x343e9c: 0x2010  mfhi        $a0
    ctx->pc = 0x343e9cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x343ea0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343ea4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x343EA4u;
    {
        const bool branch_taken_0x343ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EA4u;
        // 0x343ea8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ea4) {
            ctx->pc = 0x343ED8u;
            goto label_343ed8;
        }
    }
    ctx->pc = 0x343EACu;
    // 0x343eac: 0x0  nop
    ctx->pc = 0x343eacu;
    // NOP
label_343eb0:
    // 0x343eb0: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x343eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x343eb4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x343eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x343eb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x343EB8u;
    {
        const bool branch_taken_0x343eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343eb8) {
            ctx->pc = 0x343ED8u;
            goto label_343ed8;
        }
    }
    ctx->pc = 0x343EC0u;
    // 0x343ec0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x343ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x343ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343ec8: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x343ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x343ecc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x343ECCu;
    {
        const bool branch_taken_0x343ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343ECCu;
        // 0x343ed0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ecc) {
            ctx->pc = 0x343EE0u;
            goto label_343ee0;
        }
    }
    ctx->pc = 0x343ED4u;
    // 0x343ed4: 0x0  nop
    ctx->pc = 0x343ed4u;
    // NOP
label_343ed8:
    // 0x343ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343edc: 0x0  nop
    ctx->pc = 0x343edcu;
    // NOP
label_343ee0:
    // 0x343ee0: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x343EE0u;
    {
        const bool branch_taken_0x343ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343ee0) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343EE8u;
    // 0x343ee8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x343ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343eec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x343eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x343ef0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x343EF0u;
    {
        const bool branch_taken_0x343ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EF0u;
        // 0x343ef4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ef0) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343EF8u;
label_343ef8:
    // 0x343ef8: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x343ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x343efc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x343efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x343f00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x343F00u;
    SET_GPR_U32(ctx, 31, 0x343F08u);
    ctx->pc = 0x343F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F00u;
    // 0x343f04: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x343F00u, 0x343F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F08u;
label_343f08:
    // 0x343f08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x343F08u;
    {
        const bool branch_taken_0x343f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F08u;
        // 0x343f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f08) {
            ctx->pc = 0x343F20u;
            goto label_343f20;
        }
    }
    ctx->pc = 0x343F10u;
    // 0x343f10: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343F10u;
    SET_GPR_U32(ctx, 31, 0x343F18u);
    ctx->pc = 0x343F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F10u;
    // 0x343f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343F10u, 0x343F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F18u;
label_343f18:
    // 0x343f18: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x343F18u;
    {
        const bool branch_taken_0x343f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343f18) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343F20u;
label_343f20:
    // 0x343f20: 0x944229de  lhu         $v0, 0x29DE($v0)
    ctx->pc = 0x343f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x343f24: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x343f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x343f28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x343F28u;
    {
        const bool branch_taken_0x343f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343f28) {
            ctx->pc = 0x343F58u;
            goto label_343f58;
        }
    }
    ctx->pc = 0x343F30u;
    // 0x343f30: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x343f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x343f34: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x343f34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x343f38: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x343f38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x343f3c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x343f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x343f40: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x343f40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x343f44: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x343f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x343f48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x343f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x343f4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343F4Cu;
    {
        const bool branch_taken_0x343f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F4Cu;
        // 0x343f50: 0xa2220521  sb          $v0, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f4c) {
            ctx->pc = 0x343F70u;
            goto label_343f70;
        }
    }
    ctx->pc = 0x343F54u;
    // 0x343f54: 0x0  nop
    ctx->pc = 0x343f54u;
    // NOP
label_343f58:
    // 0x343f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343f5c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343F5Cu;
    SET_GPR_U32(ctx, 31, 0x343F64u);
    ctx->pc = 0x343F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F5Cu;
    // 0x343f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343F5Cu, 0x343F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F64u;
label_343f64:
    // 0x343f64: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x343F64u;
    {
        const bool branch_taken_0x343f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343f64) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343F6Cu;
    // 0x343f6c: 0x0  nop
    ctx->pc = 0x343f6cu;
    // NOP
label_343f70:
    // 0x343f70: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x343f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x343f74: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x343f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x343f78: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x343F78u;
    SET_GPR_U32(ctx, 31, 0x343F80u);
    ctx->pc = 0x343F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F78u;
    // 0x343f7c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x343F78u, 0x343F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F80u;
label_343f80:
    // 0x343f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x343f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343f84: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343F84u;
    {
        const bool branch_taken_0x343f84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x343F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F84u;
        // 0x343f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f84) {
            ctx->pc = 0x343FA0u;
            goto label_343fa0;
        }
    }
    ctx->pc = 0x343F8Cu;
    // 0x343f8c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x343F8Cu;
    SET_GPR_U32(ctx, 31, 0x343F94u);
    ctx->pc = 0x343F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F8Cu;
    // 0x343f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x343F8Cu, 0x343F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F94u;
label_343f94:
    // 0x343f94: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x343F94u;
    {
        const bool branch_taken_0x343f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343f94) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x343F9Cu;
    // 0x343f9c: 0x0  nop
    ctx->pc = 0x343f9cu;
    // NOP
label_343fa0:
    // 0x343fa0: 0xc097864  jal         func_25E190
    ctx->pc = 0x343FA0u;
    SET_GPR_U32(ctx, 31, 0x343FA8u);
    ctx->pc = 0x343FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FA0u;
    // 0x343fa4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x343FA0u, 0x343FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FA8u;
label_343fa8:
    // 0x343fa8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x343FA8u;
    {
        const bool branch_taken_0x343fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343fa8) {
            ctx->pc = 0x343FD0u;
            goto label_343fd0;
        }
    }
    ctx->pc = 0x343FB0u;
    // 0x343fb0: 0x8e240560  lw          $a0, 0x560($s1)
    ctx->pc = 0x343fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x343fb4: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x343FB4u;
    SET_GPR_U32(ctx, 31, 0x343FBCu);
    ctx->pc = 0x343FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FB4u;
    // 0x343fb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x343FB4u, 0x343FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FBCu;
label_343fbc:
    // 0x343fbc: 0x8e240564  lw          $a0, 0x564($s1)
    ctx->pc = 0x343fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x343fc0: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x343FC0u;
    SET_GPR_U32(ctx, 31, 0x343FC8u);
    ctx->pc = 0x343FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FC0u;
    // 0x343fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x343FC0u, 0x343FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FC8u;
label_343fc8:
    // 0x343fc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x343FC8u;
    {
        const bool branch_taken_0x343fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FC8u;
        // 0x343fcc: 0xa620053c  sh          $zero, 0x53C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343fc8) {
            ctx->pc = 0x343FF0u;
            goto label_343ff0;
        }
    }
    ctx->pc = 0x343FD0u;
label_343fd0:
    // 0x343fd0: 0x8e240560  lw          $a0, 0x560($s1)
    ctx->pc = 0x343fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x343fd4: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x343FD4u;
    SET_GPR_U32(ctx, 31, 0x343FDCu);
    ctx->pc = 0x343FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FD4u;
    // 0x343fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x343FD4u, 0x343FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FDCu;
label_343fdc:
    // 0x343fdc: 0x8e240564  lw          $a0, 0x564($s1)
    ctx->pc = 0x343fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x343fe0: 0xc096c5c  jal         func_25B170
    ctx->pc = 0x343FE0u;
    SET_GPR_U32(ctx, 31, 0x343FE8u);
    ctx->pc = 0x343FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FE0u;
    // 0x343fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B170u, 0x343FE0u, 0x343FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343FE8u;
label_343fe8:
    // 0x343fe8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x343fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x343fec: 0xa622053c  sh          $v0, 0x53C($s1)
    ctx->pc = 0x343fecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 2));
label_343ff0:
    // 0x343ff0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x343ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x343ff4: 0x9223056e  lbu         $v1, 0x56E($s1)
    ctx->pc = 0x343ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x343ff8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x343ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x343ffc: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x343ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x344000: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344004: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344008: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x344008u;
    SET_GPR_U32(ctx, 31, 0x344010u);
    ctx->pc = 0x34400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344008u;
    // 0x34400c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x344008u, 0x344010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344010u;
label_344010:
    // 0x344010: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x344014: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x344014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x344018: 0x9223056e  lbu         $v1, 0x56E($s1)
    ctx->pc = 0x344018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x34401c: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x34401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x344020: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x344020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x344024: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x344024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x344028: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x344028u;
    SET_GPR_U32(ctx, 31, 0x344030u);
    ctx->pc = 0x34402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344028u;
    // 0x34402c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x344028u, 0x344030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344030u;
label_344030:
    // 0x344030: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x344030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x344034: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x344034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x344038: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x344038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x34403c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34403cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x344040: 0xc097384  jal         func_25CE10
    ctx->pc = 0x344040u;
    SET_GPR_U32(ctx, 31, 0x344048u);
    ctx->pc = 0x344044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344040u;
    // 0x344044: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x344040u, 0x344048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344048u;
label_344048:
    // 0x344048: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x344048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x34404c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x34404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x344050: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x344050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x344054: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x344054u;
    SET_GPR_U32(ctx, 31, 0x34405Cu);
    ctx->pc = 0x344058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344054u;
    // 0x344058: 0x24c6f400  addiu       $a2, $a2, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x344054u, 0x34405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34405Cu;
label_34405c:
    // 0x34405c: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x34405cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x344060: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x344060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x344064: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x344064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x344068: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x344068u;
    SET_GPR_U32(ctx, 31, 0x344070u);
    ctx->pc = 0x34406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344068u;
    // 0x34406c: 0x24c6f410  addiu       $a2, $a2, -0xBF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x344068u, 0x344070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344070u;
label_344070:
    // 0x344070: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x344070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x344074: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x344074u;
    SET_GPR_U32(ctx, 31, 0x34407Cu);
    ctx->pc = 0x344078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344074u;
    // 0x344078: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x344074u, 0x34407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34407Cu;
label_34407c:
    // 0x34407c: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x34407cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x344080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344084: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x344084u;
    SET_GPR_U32(ctx, 31, 0x34408Cu);
    ctx->pc = 0x344088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344084u;
    // 0x344088: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x344084u, 0x34408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34408Cu;
label_34408c:
    // 0x34408c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34408Cu;
    {
        const bool branch_taken_0x34408c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34408Cu;
        // 0x344090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34408c) {
            ctx->pc = 0x3440A0u;
            goto label_3440a0;
        }
    }
    ctx->pc = 0x344094u;
    // 0x344094: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x344094u;
    SET_GPR_U32(ctx, 31, 0x34409Cu);
    ctx->pc = 0x344098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344094u;
    // 0x344098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x344094u, 0x34409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34409Cu;
label_34409c:
    // 0x34409c: 0x0  nop
    ctx->pc = 0x34409cu;
    // NOP
label_3440a0:
    // 0x3440a0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3440a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3440a4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3440A4u;
    {
        const bool branch_taken_0x3440a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3440a4) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x3440ACu;
    // 0x3440ac: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3440acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3440b0: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3440b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3440b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3440b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3440b8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3440b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3440bc: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3440bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3440c0: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3440C0u;
    {
        const bool branch_taken_0x3440c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3440c0) {
            ctx->pc = 0x3440F8u;
            goto label_3440f8;
        }
    }
    ctx->pc = 0x3440C8u;
    // 0x3440c8: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3440c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3440cc: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3440ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3440d0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3440D0u;
    {
        const bool branch_taken_0x3440d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3440D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440D0u;
        // 0x3440d4: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3440d0) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x3440D8u;
    // 0x3440d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3440d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3440dc: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3440dcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3440e0: 0x0  nop
    ctx->pc = 0x3440e0u;
    // NOP
    // 0x3440e4: 0x0  nop
    ctx->pc = 0x3440e4u;
    // NOP
    // 0x3440e8: 0x2010  mfhi        $a0
    ctx->pc = 0x3440e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3440ec: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3440ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3440f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3440F0u;
    {
        const bool branch_taken_0x3440f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3440F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440F0u;
        // 0x3440f4: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3440f0) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x3440F8u;
label_3440f8:
    // 0x3440f8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3440f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3440fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3440fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x344100: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x344100u;
    {
        const bool branch_taken_0x344100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344100) {
            ctx->pc = 0x344118u;
            goto label_344118;
        }
    }
    ctx->pc = 0x344108u;
    // 0x344108: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x344108u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34410c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344110: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x344110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x344114: 0x0  nop
    ctx->pc = 0x344114u;
    // NOP
label_344118:
    // 0x344118: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x344118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34411c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34411cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x344120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344124: 0x3e00008  jr          $ra
    ctx->pc = 0x344124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344124u;
        // 0x344128: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34412Cu;
}
