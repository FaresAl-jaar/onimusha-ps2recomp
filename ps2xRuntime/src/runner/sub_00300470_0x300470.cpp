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

// Function: sub_00300470
// Address: 0x300470 - 0x300854
void sub_00300470_0x300470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300470_0x300470");
#endif

    switch (ctx->pc) {
        case 0x3004e4u: goto label_3004e4;
        case 0x30051cu: goto label_30051c;
        case 0x300530u: goto label_300530;
        case 0x300584u: goto label_300584;
        case 0x300594u: goto label_300594;
        case 0x3005a4u: goto label_3005a4;
        case 0x300600u: goto label_300600;
        case 0x300610u: goto label_300610;
        case 0x3006ccu: goto label_3006cc;
        case 0x3006e4u: goto label_3006e4;
        case 0x300718u: goto label_300718;
        case 0x300728u: goto label_300728;
        case 0x300794u: goto label_300794;
        case 0x300840u: goto label_300840;
        default: break;
    }

    ctx->pc = 0x300470u;

    // 0x300470: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x300470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x300474: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x300474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x300478: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x300478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30047c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30047cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x300480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x300480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x300484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x300484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300488: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x300488u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x30048c: 0x10a3009e  beq         $a1, $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x30048Cu;
    {
        const bool branch_taken_0x30048c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x300490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30048Cu;
        // 0x300490: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30048c) {
            ctx->pc = 0x300708u;
            goto label_300708;
        }
    }
    ctx->pc = 0x300494u;
    // 0x300494: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x300494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x300498: 0x10a30089  beq         $a1, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x300498u;
    {
        const bool branch_taken_0x300498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x30049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300498u;
        // 0x30049c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300498) {
            ctx->pc = 0x3006C0u;
            goto label_3006c0;
        }
    }
    ctx->pc = 0x3004A0u;
    // 0x3004a0: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3004A0u;
    {
        const bool branch_taken_0x3004a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3004a0) {
            ctx->pc = 0x300560u;
            goto label_300560;
        }
    }
    ctx->pc = 0x3004A8u;
    // 0x3004a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3004a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3004ac: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3004ACu;
    {
        const bool branch_taken_0x3004ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3004ac) {
            ctx->pc = 0x300540u;
            goto label_300540;
        }
    }
    ctx->pc = 0x3004B4u;
    // 0x3004b4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3004B4u;
    {
        const bool branch_taken_0x3004b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3004b4) {
            ctx->pc = 0x3004C8u;
            goto label_3004c8;
        }
    }
    ctx->pc = 0x3004BCu;
    // 0x3004bc: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x3004BCu;
    {
        const bool branch_taken_0x3004bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3004bc) {
            ctx->pc = 0x300840u;
            goto label_300840;
        }
    }
    ctx->pc = 0x3004C4u;
    // 0x3004c4: 0x0  nop
    ctx->pc = 0x3004c4u;
    // NOP
label_3004c8:
    // 0x3004c8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3004C8u;
    {
        const bool branch_taken_0x3004c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3004c8) {
            ctx->pc = 0x300528u;
            goto label_300528;
        }
    }
    ctx->pc = 0x3004D0u;
    // 0x3004d0: 0x8e06085c  lw          $a2, 0x85C($s0)
    ctx->pc = 0x3004d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x3004d4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3004d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3004d8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3004d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3004dc: 0xc0aad30  jal         func_2AB4C0
    ctx->pc = 0x3004DCu;
    SET_GPR_U32(ctx, 31, 0x3004E4u);
    ctx->pc = 0x3004E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004DCu;
    // 0x3004e0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB4C0u, 0x3004DCu, 0x3004E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3004E4u;
label_3004e4:
    // 0x3004e4: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3004e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3004e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3004e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3004ec: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3004ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3004f0: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x3004f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x3004f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3004f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3004f8: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x3004f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x3004fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3004fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300500: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x300504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x300504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x300508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30050c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30050cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300510: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x300510u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300514: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x300514u;
    SET_GPR_U32(ctx, 31, 0x30051Cu);
    ctx->pc = 0x300518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300514u;
    // 0x300518: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x300514u, 0x30051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30051Cu;
label_30051c:
    // 0x30051c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30051Cu;
    {
        const bool branch_taken_0x30051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30051c) {
            ctx->pc = 0x300530u;
            goto label_300530;
        }
    }
    ctx->pc = 0x300524u;
    // 0x300524: 0x0  nop
    ctx->pc = 0x300524u;
    // NOP
label_300528:
    // 0x300528: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300528u;
    SET_GPR_U32(ctx, 31, 0x300530u);
    ctx->pc = 0x30052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300528u;
    // 0x30052c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300528u, 0x300530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300530u;
label_300530:
    // 0x300530: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x300530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x300534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x300534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x300538: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x300538u;
    {
        const bool branch_taken_0x300538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300538u;
        // 0x30053c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300538) {
            ctx->pc = 0x300840u;
            goto label_300840;
        }
    }
    ctx->pc = 0x300540u;
label_300540:
    // 0x300540: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x300540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x300544: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x300544u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x300548: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x300548u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x30054c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x30054cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x300550: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x300550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x300554: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x300554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x300558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x300558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30055c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x30055cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_300560:
    // 0x300560: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x300560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x300564: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x300564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x300568: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x300568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x30056c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300570: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x300570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x300574: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x300574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x300578: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x300578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30057c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x30057Cu;
    SET_GPR_U32(ctx, 31, 0x300584u);
    ctx->pc = 0x300580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30057Cu;
    // 0x300580: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x30057Cu, 0x300584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300584u;
label_300584:
    // 0x300584: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x300584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x300588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30058c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x30058Cu;
    SET_GPR_U32(ctx, 31, 0x300594u);
    ctx->pc = 0x300590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30058Cu;
    // 0x300590: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x30058Cu, 0x300594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300594u;
label_300594:
    // 0x300594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300594u;
    {
        const bool branch_taken_0x300594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300594u;
        // 0x300598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300594) {
            ctx->pc = 0x3005A8u;
            goto label_3005a8;
        }
    }
    ctx->pc = 0x30059Cu;
    // 0x30059c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x30059Cu;
    SET_GPR_U32(ctx, 31, 0x3005A4u);
    ctx->pc = 0x3005A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30059Cu;
    // 0x3005a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x30059Cu, 0x3005A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005A4u;
label_3005a4:
    // 0x3005a4: 0x0  nop
    ctx->pc = 0x3005a4u;
    // NOP
label_3005a8:
    // 0x3005a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3005a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3005ac: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3005acu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3005b0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x3005b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3005b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3005b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3005bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3005bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3005c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3005c4: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3005c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x3005c8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3005c8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3005cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3005ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3005d0: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3005d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3005d4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3005d4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3005d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3005d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3005dc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3005dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3005e0: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3005e0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3005e4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3005e4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3005e8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3005e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3005ec: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3005ecu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3005f0: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3005f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3005f4: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3005f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3005f8: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3005F8u;
    SET_GPR_U32(ctx, 31, 0x300600u);
    ctx->pc = 0x3005FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005F8u;
    // 0x3005fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3005F8u, 0x300600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300600u;
label_300600:
    // 0x300600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300600u;
    {
        const bool branch_taken_0x300600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300600u;
        // 0x300604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300600) {
            ctx->pc = 0x300610u;
            goto label_300610;
        }
    }
    ctx->pc = 0x300608u;
    // 0x300608: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300608u;
    SET_GPR_U32(ctx, 31, 0x300610u);
    ctx->pc = 0x30060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300608u;
    // 0x30060c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300608u, 0x300610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300610u;
label_300610:
    // 0x300610: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x300610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x300614: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x300614u;
    {
        const bool branch_taken_0x300614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300614u;
        // 0x300618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300614) {
            ctx->pc = 0x300628u;
            goto label_300628;
        }
    }
    ctx->pc = 0x30061Cu;
    // 0x30061c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30061Cu;
    {
        const bool branch_taken_0x30061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30061c) {
            ctx->pc = 0x3006A8u;
            goto label_3006a8;
        }
    }
    ctx->pc = 0x300624u;
    // 0x300624: 0x0  nop
    ctx->pc = 0x300624u;
    // NOP
label_300628:
    // 0x300628: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x300628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30062c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300630: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x300630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x300634: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x300634u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300638: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x300638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x30063c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x30063Cu;
    {
        const bool branch_taken_0x30063c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30063c) {
            ctx->pc = 0x300678u;
            goto label_300678;
        }
    }
    ctx->pc = 0x300644u;
    // 0x300644: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x300644u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x300648: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x300648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x30064c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30064Cu;
    {
        const bool branch_taken_0x30064c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30064Cu;
        // 0x300650: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30064c) {
            ctx->pc = 0x3006A0u;
            goto label_3006a0;
        }
    }
    ctx->pc = 0x300654u;
    // 0x300654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300658: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x300658u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30065c: 0x0  nop
    ctx->pc = 0x30065cu;
    // NOP
    // 0x300660: 0x0  nop
    ctx->pc = 0x300660u;
    // NOP
    // 0x300664: 0x2010  mfhi        $a0
    ctx->pc = 0x300664u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x300668: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x300668u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30066c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30066Cu;
    {
        const bool branch_taken_0x30066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30066Cu;
        // 0x300670: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30066c) {
            ctx->pc = 0x3006A0u;
            goto label_3006a0;
        }
    }
    ctx->pc = 0x300674u;
    // 0x300674: 0x0  nop
    ctx->pc = 0x300674u;
    // NOP
label_300678:
    // 0x300678: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x300678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30067c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x30067cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x300680: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x300680u;
    {
        const bool branch_taken_0x300680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300680) {
            ctx->pc = 0x3006A0u;
            goto label_3006a0;
        }
    }
    ctx->pc = 0x300688u;
    // 0x300688: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x300688u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x30068c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300690: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x300690u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x300694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300694u;
    {
        const bool branch_taken_0x300694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300694u;
        // 0x300698: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300694) {
            ctx->pc = 0x3006A8u;
            goto label_3006a8;
        }
    }
    ctx->pc = 0x30069Cu;
    // 0x30069c: 0x0  nop
    ctx->pc = 0x30069cu;
    // NOP
label_3006a0:
    // 0x3006a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3006a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3006a4: 0x0  nop
    ctx->pc = 0x3006a4u;
    // NOP
label_3006a8:
    // 0x3006a8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x3006A8u;
    {
        const bool branch_taken_0x3006a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3006a8) {
            ctx->pc = 0x300840u;
            goto label_300840;
        }
    }
    ctx->pc = 0x3006B0u;
    // 0x3006b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3006b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3006b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3006b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3006b8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3006B8u;
    {
        const bool branch_taken_0x3006b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006B8u;
        // 0x3006bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006b8) {
            ctx->pc = 0x300840u;
            goto label_300840;
        }
    }
    ctx->pc = 0x3006C0u;
label_3006c0:
    // 0x3006c0: 0xa2200558  sb          $zero, 0x558($s1)
    ctx->pc = 0x3006c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 0));
    // 0x3006c4: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3006C4u;
    SET_GPR_U32(ctx, 31, 0x3006CCu);
    ctx->pc = 0x3006C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3006C4u;
    // 0x3006c8: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3006C4u, 0x3006CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3006CCu;
label_3006cc:
    // 0x3006cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3006CCu;
    {
        const bool branch_taken_0x3006cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3006D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3006CCu;
        // 0x3006d0: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3006cc) {
            ctx->pc = 0x3006E8u;
            goto label_3006e8;
        }
    }
    ctx->pc = 0x3006D4u;
    // 0x3006d4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3006d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3006d8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3006d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3006dc: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x3006DCu;
    SET_GPR_U32(ctx, 31, 0x3006E4u);
    ctx->pc = 0x3006E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3006DCu;
    // 0x3006e0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x3006DCu, 0x3006E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3006E4u;
label_3006e4:
    // 0x3006e4: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3006e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
label_3006e8:
    // 0x3006e8: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3006e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3006ec: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3006ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3006f0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3006f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3006f4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3006f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3006f8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3006f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3006fc: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3006fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x300700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x300700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x300704: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x300704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_300708:
    // 0x300708: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x300708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x30070c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300710: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x300710u;
    SET_GPR_U32(ctx, 31, 0x300718u);
    ctx->pc = 0x300714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300710u;
    // 0x300714: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x300710u, 0x300718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300718u;
label_300718:
    // 0x300718: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300718u;
    {
        const bool branch_taken_0x300718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300718u;
        // 0x30071c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300718) {
            ctx->pc = 0x300728u;
            goto label_300728;
        }
    }
    ctx->pc = 0x300720u;
    // 0x300720: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300720u;
    SET_GPR_U32(ctx, 31, 0x300728u);
    ctx->pc = 0x300724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300720u;
    // 0x300724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300720u, 0x300728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300728u;
label_300728:
    // 0x300728: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x300728u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x30072c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30072Cu;
    {
        const bool branch_taken_0x30072c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x300730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30072Cu;
        // 0x300730: 0x28617531  slti        $at, $v1, 0x7531 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30001) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30072c) {
            ctx->pc = 0x300798u;
            goto label_300798;
        }
    }
    ctx->pc = 0x300734u;
    // 0x300734: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x300734u;
    {
        const bool branch_taken_0x300734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300734) {
            ctx->pc = 0x300798u;
            goto label_300798;
        }
    }
    ctx->pc = 0x30073Cu;
    // 0x30073c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30073cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300740: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x300740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x300744: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x300744u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x300748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30074c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30074cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x300750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300754: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300758: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x300758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x30075c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x30075cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x300760: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x300760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300764: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x300764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x300768: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x300768u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x30076c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x30076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x300770: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x300770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x300774: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x300774u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x300778: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x300778u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x30077c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x30077cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x300780: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x300780u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x300784: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x300784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x300788: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x300788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30078c: 0xc0c0900  jal         func_302400
    ctx->pc = 0x30078Cu;
    SET_GPR_U32(ctx, 31, 0x300794u);
    ctx->pc = 0x300790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30078Cu;
    // 0x300790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x30078Cu, 0x300794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300794u;
label_300794:
    // 0x300794: 0x0  nop
    ctx->pc = 0x300794u;
    // NOP
label_300798:
    // 0x300798: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x300798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x30079c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30079Cu;
    {
        const bool branch_taken_0x30079c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3007A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30079Cu;
        // 0x3007a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30079c) {
            ctx->pc = 0x3007B0u;
            goto label_3007b0;
        }
    }
    ctx->pc = 0x3007A4u;
    // 0x3007a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3007A4u;
    {
        const bool branch_taken_0x3007a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3007a4) {
            ctx->pc = 0x300830u;
            goto label_300830;
        }
    }
    ctx->pc = 0x3007ACu;
    // 0x3007ac: 0x0  nop
    ctx->pc = 0x3007acu;
    // NOP
label_3007b0:
    // 0x3007b0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3007b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3007b4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3007b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3007b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3007b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3007bc: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3007bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3007c0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3007c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3007c4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3007C4u;
    {
        const bool branch_taken_0x3007c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3007c4) {
            ctx->pc = 0x300800u;
            goto label_300800;
        }
    }
    ctx->pc = 0x3007CCu;
    // 0x3007cc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3007ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3007d0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3007d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3007d4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3007D4u;
    {
        const bool branch_taken_0x3007d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3007D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007D4u;
        // 0x3007d8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007d4) {
            ctx->pc = 0x300828u;
            goto label_300828;
        }
    }
    ctx->pc = 0x3007DCu;
    // 0x3007dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3007dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3007e0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3007e0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3007e4: 0x0  nop
    ctx->pc = 0x3007e4u;
    // NOP
    // 0x3007e8: 0x0  nop
    ctx->pc = 0x3007e8u;
    // NOP
    // 0x3007ec: 0x2010  mfhi        $a0
    ctx->pc = 0x3007ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3007f0: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3007f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3007f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3007F4u;
    {
        const bool branch_taken_0x3007f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3007F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007F4u;
        // 0x3007f8: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007f4) {
            ctx->pc = 0x300828u;
            goto label_300828;
        }
    }
    ctx->pc = 0x3007FCu;
    // 0x3007fc: 0x0  nop
    ctx->pc = 0x3007fcu;
    // NOP
label_300800:
    // 0x300800: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x300800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x300804: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x300804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x300808: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x300808u;
    {
        const bool branch_taken_0x300808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300808) {
            ctx->pc = 0x300828u;
            goto label_300828;
        }
    }
    ctx->pc = 0x300810u;
    // 0x300810: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x300810u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x300814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300818: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x300818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x30081c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30081Cu;
    {
        const bool branch_taken_0x30081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30081Cu;
        // 0x300820: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30081c) {
            ctx->pc = 0x300830u;
            goto label_300830;
        }
    }
    ctx->pc = 0x300824u;
    // 0x300824: 0x0  nop
    ctx->pc = 0x300824u;
    // NOP
label_300828:
    // 0x300828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30082c: 0x0  nop
    ctx->pc = 0x30082cu;
    // NOP
label_300830:
    // 0x300830: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300830u;
    {
        const bool branch_taken_0x300830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x300834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300830u;
        // 0x300834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300830) {
            ctx->pc = 0x300840u;
            goto label_300840;
        }
    }
    ctx->pc = 0x300838u;
    // 0x300838: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x300838u;
    SET_GPR_U32(ctx, 31, 0x300840u);
    ctx->pc = 0x30083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300838u;
    // 0x30083c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x300838u, 0x300840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300840u;
label_300840:
    // 0x300840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x300840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x300844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x300848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30084c: 0x3e00008  jr          $ra
    ctx->pc = 0x30084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30084Cu;
        // 0x300850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300854u;
}
