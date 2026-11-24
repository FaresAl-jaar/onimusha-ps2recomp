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

// Function: sub_00355B00
// Address: 0x355b00 - 0x356c68
void sub_00355B00_0x355b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355B00_0x355b00");
#endif

    switch (ctx->pc) {
        case 0x355b28u: goto label_355b28;
        case 0x355b50u: goto label_355b50;
        case 0x355ba8u: goto label_355ba8;
        case 0x355bb4u: goto label_355bb4;
        case 0x355bc0u: goto label_355bc0;
        case 0x355bd8u: goto label_355bd8;
        case 0x355becu: goto label_355bec;
        case 0x355c74u: goto label_355c74;
        case 0x355cf0u: goto label_355cf0;
        case 0x355d00u: goto label_355d00;
        case 0x355d18u: goto label_355d18;
        case 0x355d60u: goto label_355d60;
        case 0x355d6cu: goto label_355d6c;
        case 0x355d80u: goto label_355d80;
        case 0x355d94u: goto label_355d94;
        case 0x355db0u: goto label_355db0;
        case 0x355dbcu: goto label_355dbc;
        case 0x355dd0u: goto label_355dd0;
        case 0x355de4u: goto label_355de4;
        case 0x355dfcu: goto label_355dfc;
        case 0x355e14u: goto label_355e14;
        case 0x355e28u: goto label_355e28;
        case 0x355fe4u: goto label_355fe4;
        case 0x356070u: goto label_356070;
        case 0x356088u: goto label_356088;
        case 0x3560c8u: goto label_3560c8;
        case 0x356124u: goto label_356124;
        case 0x356130u: goto label_356130;
        case 0x356178u: goto label_356178;
        case 0x356198u: goto label_356198;
        case 0x3561d8u: goto label_3561d8;
        case 0x356208u: goto label_356208;
        case 0x356218u: goto label_356218;
        case 0x356228u: goto label_356228;
        case 0x356240u: goto label_356240;
        case 0x35624cu: goto label_35624c;
        case 0x35625cu: goto label_35625c;
        case 0x356268u: goto label_356268;
        case 0x35627cu: goto label_35627c;
        case 0x356290u: goto label_356290;
        case 0x3562acu: goto label_3562ac;
        case 0x3562c4u: goto label_3562c4;
        case 0x3562ccu: goto label_3562cc;
        case 0x3562f8u: goto label_3562f8;
        case 0x356338u: goto label_356338;
        case 0x356368u: goto label_356368;
        case 0x356378u: goto label_356378;
        case 0x35638cu: goto label_35638c;
        case 0x3563a8u: goto label_3563a8;
        case 0x3563b4u: goto label_3563b4;
        case 0x356470u: goto label_356470;
        case 0x3564b0u: goto label_3564b0;
        case 0x3564e0u: goto label_3564e0;
        case 0x3564ecu: goto label_3564ec;
        case 0x356500u: goto label_356500;
        case 0x356510u: goto label_356510;
        case 0x356520u: goto label_356520;
        case 0x356538u: goto label_356538;
        case 0x356544u: goto label_356544;
        case 0x356550u: goto label_356550;
        case 0x356568u: goto label_356568;
        case 0x356628u: goto label_356628;
        case 0x356638u: goto label_356638;
        case 0x356654u: goto label_356654;
        case 0x356688u: goto label_356688;
        case 0x3566f4u: goto label_3566f4;
        case 0x3568c8u: goto label_3568c8;
        case 0x3568e8u: goto label_3568e8;
        case 0x3568f8u: goto label_3568f8;
        case 0x356910u: goto label_356910;
        case 0x356934u: goto label_356934;
        case 0x356940u: goto label_356940;
        case 0x356958u: goto label_356958;
        case 0x356970u: goto label_356970;
        case 0x356980u: goto label_356980;
        case 0x356998u: goto label_356998;
        case 0x3569c0u: goto label_3569c0;
        case 0x356a14u: goto label_356a14;
        case 0x356a30u: goto label_356a30;
        case 0x356ad8u: goto label_356ad8;
        case 0x356aecu: goto label_356aec;
        case 0x356afcu: goto label_356afc;
        case 0x356b18u: goto label_356b18;
        case 0x356b4cu: goto label_356b4c;
        default: break;
    }

    ctx->pc = 0x355b00u;

    // 0x355b00: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x355b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x355b04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x355b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x355b08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x355b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x355b0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x355b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x355b10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x355b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355b14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x355b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355b18: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x355B18u;
    {
        const bool branch_taken_0x355b18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x355B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B18u;
        // 0x355b1c: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b18) {
            ctx->pc = 0x355B30u;
            goto label_355b30;
        }
    }
    ctx->pc = 0x355B20u;
    // 0x355b20: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x355B20u;
    SET_GPR_U32(ctx, 31, 0x355B28u);
    ctx->pc = 0x355B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355B20u;
    // 0x355b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x355B20u, 0x355B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B28u;
label_355b28:
    // 0x355b28: 0x10000449  b           . + 4 + (0x449 << 2)
    ctx->pc = 0x355B28u;
    {
        const bool branch_taken_0x355b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b28) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x355B30u;
label_355b30:
    // 0x355b30: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x355B30u;
    {
        const bool branch_taken_0x355b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b30) {
            ctx->pc = 0x355B58u;
            goto label_355b58;
        }
    }
    ctx->pc = 0x355B38u;
    // 0x355b38: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x355b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x355b3c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x355b3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355b40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x355B40u;
    {
        const bool branch_taken_0x355b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B40u;
        // 0x355b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b40) {
            ctx->pc = 0x355B58u;
            goto label_355b58;
        }
    }
    ctx->pc = 0x355B48u;
    // 0x355b48: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x355B48u;
    SET_GPR_U32(ctx, 31, 0x355B50u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x355B48u, 0x355B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355B50u;
label_355b50:
    // 0x355b50: 0x1000043f  b           . + 4 + (0x43F << 2)
    ctx->pc = 0x355B50u;
    {
        const bool branch_taken_0x355b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b50) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x355B58u;
label_355b58:
    // 0x355b58: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x355b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x355b5c: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x355b5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x355b60: 0x1020043b  beqz        $at, . + 4 + (0x43B << 2)
    ctx->pc = 0x355B60u;
    {
        const bool branch_taken_0x355b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B60u;
        // 0x355b64: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b60) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x355B68u;
    // 0x355b68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x355b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x355b6c: 0x2484f930  addiu       $a0, $a0, -0x6D0
    ctx->pc = 0x355b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965552));
    // 0x355b70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x355b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x355b74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x355b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355b78: 0x600008  jr          $v1
    ctx->pc = 0x355B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x355B80u: goto label_355b80;
            case 0x355C00u: goto label_355c00;
            case 0x355CE0u: goto label_355ce0;
            case 0x356078u: goto label_356078;
            case 0x356188u: goto label_356188;
            case 0x3562E8u: goto label_3562e8;
            case 0x356460u: goto label_356460;
            case 0x356878u: goto label_356878;
            case 0x3568D8u: goto label_3568d8;
            case 0x3569D8u: goto label_3569d8;
            case 0x356A08u: goto label_356a08;
            case 0x356B88u: goto label_356b88;
            case 0x356BA8u: goto label_356ba8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355B78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x355B80u;
label_355b80:
    // 0x355b80: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x355B80u;
    {
        const bool branch_taken_0x355b80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x355b80) {
            ctx->pc = 0x355BE0u;
            goto label_355be0;
        }
    }
    ctx->pc = 0x355B88u;
    // 0x355b88: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x355b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x355b8c: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x355b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x355b90: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x355b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x355b94: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x355b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x355b98: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x355b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x355b9c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x355b9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x355ba0: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x355BA0u;
    SET_GPR_U32(ctx, 31, 0x355BA8u);
    ctx->pc = 0x355BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BA0u;
    // 0x355ba4: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x355BA0u, 0x355BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BA8u;
label_355ba8:
    // 0x355ba8: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x355ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x355bac: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x355BACu;
    SET_GPR_U32(ctx, 31, 0x355BB4u);
    ctx->pc = 0x355BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BACu;
    // 0x355bb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x355BACu, 0x355BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BB4u;
label_355bb4:
    // 0x355bb4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x355bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x355bb8: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x355BB8u;
    SET_GPR_U32(ctx, 31, 0x355BC0u);
    ctx->pc = 0x355BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BB8u;
    // 0x355bbc: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x355BB8u, 0x355BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BC0u;
label_355bc0:
    // 0x355bc0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x355bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x355bc4: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x355bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x355bc8: 0x9244053b  lbu         $a0, 0x53B($s2)
    ctx->pc = 0x355bc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1339)));
    // 0x355bcc: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x355bccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x355bd0: 0xc0aa89c  jal         func_2AA270
    ctx->pc = 0x355BD0u;
    SET_GPR_U32(ctx, 31, 0x355BD8u);
    ctx->pc = 0x355BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BD0u;
    // 0x355bd4: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA270u, 0x355BD0u, 0x355BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BD8u;
label_355bd8:
    // 0x355bd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x355BD8u;
    {
        const bool branch_taken_0x355bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355BD8u;
        // 0x355bdc: 0xae420560  sw          $v0, 0x560($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bd8) {
            ctx->pc = 0x355BF0u;
            goto label_355bf0;
        }
    }
    ctx->pc = 0x355BE0u;
label_355be0:
    // 0x355be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x355be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355be4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x355BE4u;
    SET_GPR_U32(ctx, 31, 0x355BECu);
    ctx->pc = 0x355BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BE4u;
    // 0x355be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x355BE4u, 0x355BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BECu;
label_355bec:
    // 0x355bec: 0x0  nop
    ctx->pc = 0x355becu;
    // NOP
label_355bf0:
    // 0x355bf0: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x355bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x355bf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355bf8: 0x10000415  b           . + 4 + (0x415 << 2)
    ctx->pc = 0x355BF8u;
    {
        const bool branch_taken_0x355bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355BF8u;
        // 0x355bfc: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bf8) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x355C00u;
label_355c00:
    // 0x355c00: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x355c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355c04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x355c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x355c08: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x355c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x355c0c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x355c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x355c10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355c14: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x355c14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x355c18: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x355c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355c1c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x355c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x355c20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355C20u;
    {
        const bool branch_taken_0x355c20 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x355C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C20u;
        // 0x355c24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c20) {
            ctx->pc = 0x355C34u;
            goto label_355c34;
        }
    }
    ctx->pc = 0x355C28u;
    // 0x355c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355c2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x355C2Cu;
    {
        const bool branch_taken_0x355c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C2Cu;
        // 0x355c30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355c2c) {
            ctx->pc = 0x355C4Cu;
            goto label_355c4c;
        }
    }
    ctx->pc = 0x355C34u;
label_355c34:
    // 0x355c34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x355c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x355c38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x355c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x355c3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x355c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355c40: 0x0  nop
    ctx->pc = 0x355c40u;
    // NOP
    // 0x355c44: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x355c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x355c48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x355c48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_355c4c:
    // 0x355c4c: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x355c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x355c50: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x355c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x355c54: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x355c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x355c58: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x355c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x355c5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x355c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355c64: 0x0  nop
    ctx->pc = 0x355c64u;
    // NOP
    // 0x355c68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x355c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x355c6c: 0xc0d55e8  jal         func_3557A0
    ctx->pc = 0x355C6Cu;
    SET_GPR_U32(ctx, 31, 0x355C74u);
    ctx->pc = 0x355C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355C6Cu;
    // 0x355c70: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557A0u, 0x355C6Cu, 0x355C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355C74u;
label_355c74:
    // 0x355c74: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x355c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355c78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x355c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x355c7c: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x355c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x355c80: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x355c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x355c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355c88: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x355c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x355c8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355c90: 0xaf8480e0  sw          $a0, -0x7F20($gp)
    ctx->pc = 0x355c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
    // 0x355c94: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x355c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355c98: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x355c98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x355c9c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x355c9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x355ca0: 0x0  nop
    ctx->pc = 0x355ca0u;
    // NOP
    // 0x355ca4: 0x0  nop
    ctx->pc = 0x355ca4u;
    // NOP
    // 0x355ca8: 0x1810  mfhi        $v1
    ctx->pc = 0x355ca8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x355cac: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x355cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x355cb0: 0xa6430526  sh          $v1, 0x526($s2)
    ctx->pc = 0x355cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x355cb4: 0x86430526  lh          $v1, 0x526($s2)
    ctx->pc = 0x355cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x355cb8: 0xa6430512  sh          $v1, 0x512($s2)
    ctx->pc = 0x355cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x355cbc: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x355cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x355cc0: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x355cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x355cc4: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x355cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x355cc8: 0xa64000c0  sh          $zero, 0xC0($s2)
    ctx->pc = 0x355cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x355ccc: 0xa64000c4  sh          $zero, 0xC4($s2)
    ctx->pc = 0x355cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 196), (uint16_t)GPR_U32(ctx, 0));
    // 0x355cd0: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x355cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x355cd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x355cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x355cd8: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x355cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x355cdc: 0xa2420522  sb          $v0, 0x522($s2)
    ctx->pc = 0x355cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 2));
label_355ce0:
    // 0x355ce0: 0x864400c2  lh          $a0, 0xC2($s2)
    ctx->pc = 0x355ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x355ce4: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x355ce4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x355ce8: 0xc097498  jal         func_25D260
    ctx->pc = 0x355CE8u;
    SET_GPR_U32(ctx, 31, 0x355CF0u);
    ctx->pc = 0x355CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CE8u;
    // 0x355cec: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x355CE8u, 0x355CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355CF0u;
label_355cf0:
    // 0x355cf0: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x355cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x355cf4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x355cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x355cf8: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x355CF8u;
    SET_GPR_U32(ctx, 31, 0x355D00u);
    ctx->pc = 0x355CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355CF8u;
    // 0x355cfc: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x355CF8u, 0x355D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D00u;
label_355d00:
    // 0x355d00: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x355d00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x355d04: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x355d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x355d08: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x355d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x355d0c: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x355d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x355d10: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x355D10u;
    SET_GPR_U32(ctx, 31, 0x355D18u);
    ctx->pc = 0x355D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355D10u;
    // 0x355d14: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x355D10u, 0x355D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D18u;
label_355d18:
    // 0x355d18: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x355d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355d1c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x355d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x355d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355d28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x355d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x355d2c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x355d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x355d30: 0x92430522  lbu         $v1, 0x522($s2)
    ctx->pc = 0x355d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x355d34: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x355D34u;
    {
        const bool branch_taken_0x355d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355d34) {
            ctx->pc = 0x355DA0u;
            goto label_355da0;
        }
    }
    ctx->pc = 0x355D3Cu;
    // 0x355d3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x355D3Cu;
    {
        const bool branch_taken_0x355d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d3c) {
            ctx->pc = 0x355D50u;
            goto label_355d50;
        }
    }
    ctx->pc = 0x355D44u;
    // 0x355d44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x355D44u;
    {
        const bool branch_taken_0x355d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d44) {
            ctx->pc = 0x355DF0u;
            goto label_355df0;
        }
    }
    ctx->pc = 0x355D4Cu;
    // 0x355d4c: 0x0  nop
    ctx->pc = 0x355d4cu;
    // NOP
label_355d50:
    // 0x355d50: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x355d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x355d54: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x355d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x355d58: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x355D58u;
    SET_GPR_U32(ctx, 31, 0x355D60u);
    ctx->pc = 0x355D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355D58u;
    // 0x355d5c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x355D58u, 0x355D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D60u;
label_355d60:
    // 0x355d60: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x355d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x355d64: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x355D64u;
    SET_GPR_U32(ctx, 31, 0x355D6Cu);
    ctx->pc = 0x355D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355D64u;
    // 0x355d68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x355D64u, 0x355D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D6Cu;
label_355d6c:
    // 0x355d6c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x355d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x355d70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x355d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x355d74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355d78: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x355D78u;
    SET_GPR_U32(ctx, 31, 0x355D80u);
    ctx->pc = 0x355D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355D78u;
    // 0x355d7c: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x355D78u, 0x355D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D80u;
label_355d80:
    // 0x355d80: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x355d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x355d84: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x355d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x355d88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355d8c: 0xc097414  jal         func_25D050
    ctx->pc = 0x355D8Cu;
    SET_GPR_U32(ctx, 31, 0x355D94u);
    ctx->pc = 0x355D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355D8Cu;
    // 0x355d90: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x355D8Cu, 0x355D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355D94u;
label_355d94:
    // 0x355d94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x355D94u;
    {
        const bool branch_taken_0x355d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355d94) {
            ctx->pc = 0x355DF0u;
            goto label_355df0;
        }
    }
    ctx->pc = 0x355D9Cu;
    // 0x355d9c: 0x0  nop
    ctx->pc = 0x355d9cu;
    // NOP
label_355da0:
    // 0x355da0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x355da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x355da4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x355da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x355da8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x355DA8u;
    SET_GPR_U32(ctx, 31, 0x355DB0u);
    ctx->pc = 0x355DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DA8u;
    // 0x355dac: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x355DA8u, 0x355DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DB0u;
label_355db0:
    // 0x355db0: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x355db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x355db4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x355DB4u;
    SET_GPR_U32(ctx, 31, 0x355DBCu);
    ctx->pc = 0x355DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DB4u;
    // 0x355db8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x355DB4u, 0x355DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DBCu;
label_355dbc:
    // 0x355dbc: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x355dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x355dc0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x355dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x355dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355dc8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x355DC8u;
    SET_GPR_U32(ctx, 31, 0x355DD0u);
    ctx->pc = 0x355DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DC8u;
    // 0x355dcc: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x355DC8u, 0x355DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DD0u;
label_355dd0:
    // 0x355dd0: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x355dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x355dd4: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x355dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x355dd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x355dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x355ddc: 0xc097414  jal         func_25D050
    ctx->pc = 0x355DDCu;
    SET_GPR_U32(ctx, 31, 0x355DE4u);
    ctx->pc = 0x355DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DDCu;
    // 0x355de0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x355DDCu, 0x355DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DE4u;
label_355de4:
    // 0x355de4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x355DE4u;
    {
        const bool branch_taken_0x355de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355de4) {
            ctx->pc = 0x355DF0u;
            goto label_355df0;
        }
    }
    ctx->pc = 0x355DECu;
    // 0x355dec: 0xa2400522  sb          $zero, 0x522($s2)
    ctx->pc = 0x355decu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 0));
label_355df0:
    // 0x355df0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x355df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x355df4: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x355DF4u;
    SET_GPR_U32(ctx, 31, 0x355DFCu);
    ctx->pc = 0x355DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355DF4u;
    // 0x355df8: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x355DF4u, 0x355DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355DFCu;
label_355dfc:
    // 0x355dfc: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x355dfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x355e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x355e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355e04: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x355e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x355e08: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x355e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x355e0c: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x355E0Cu;
    SET_GPR_U32(ctx, 31, 0x355E14u);
    ctx->pc = 0x355E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355E0Cu;
    // 0x355e10: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x355E0Cu, 0x355E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E14u;
label_355e14:
    // 0x355e14: 0x9243053a  lbu         $v1, 0x53A($s2)
    ctx->pc = 0x355e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1338)));
    // 0x355e18: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x355E18u;
    {
        const bool branch_taken_0x355e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E18u;
        // 0x355e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e18) {
            ctx->pc = 0x355ED0u;
            goto label_355ed0;
        }
    }
    ctx->pc = 0x355E20u;
    // 0x355e20: 0xc097404  jal         func_25D010
    ctx->pc = 0x355E20u;
    SET_GPR_U32(ctx, 31, 0x355E28u);
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x355E20u, 0x355E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355E28u;
label_355e28:
    // 0x355e28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x355E28u;
    {
        const bool branch_taken_0x355e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355e28) {
            ctx->pc = 0x355E68u;
            goto label_355e68;
        }
    }
    ctx->pc = 0x355E30u;
    // 0x355e30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x355e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x355e34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x355e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355e38: 0xae440518  sw          $a0, 0x518($s2)
    ctx->pc = 0x355e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 4));
    // 0x355e3c: 0x90440733  lbu         $a0, 0x733($v0)
    ctx->pc = 0x355e3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x355e40: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x355e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x355e44: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x355e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x355e48: 0x78840700  lq          $a0, 0x700($a0)
    ctx->pc = 0x355e48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 1792)));
    // 0x355e4c: 0x7e4405a0  sq          $a0, 0x5A0($s2)
    ctx->pc = 0x355e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1440), GPR_VEC(ctx, 4));
    // 0x355e50: 0x90440733  lbu         $a0, 0x733($v0)
    ctx->pc = 0x355e50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x355e54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x355e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x355e58: 0x90840730  lbu         $a0, 0x730($a0)
    ctx->pc = 0x355e58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1840)));
    // 0x355e5c: 0xa24405b0  sb          $a0, 0x5B0($s2)
    ctx->pc = 0x355e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1456), (uint8_t)GPR_U32(ctx, 4));
    // 0x355e60: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x355E60u;
    {
        const bool branch_taken_0x355e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355E60u;
        // 0x355e64: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355e60) {
            ctx->pc = 0x355EC0u;
            goto label_355ec0;
        }
    }
    ctx->pc = 0x355E68u;
label_355e68:
    // 0x355e68: 0xae400518  sw          $zero, 0x518($s2)
    ctx->pc = 0x355e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 0));
    // 0x355e6c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x355e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x355e70: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x355e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x355e74: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x355e74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x355e78: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x355e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
    // 0x355e7c: 0x7a260020  lq          $a2, 0x20($s1)
    ctx->pc = 0x355e7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x355e80: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x355e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x355e84: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x355e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x355e88: 0x7e460570  sq          $a2, 0x570($s2)
    ctx->pc = 0x355e88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1392), GPR_VEC(ctx, 6));
    // 0x355e8c: 0x862600c0  lh          $a2, 0xC0($s1)
    ctx->pc = 0x355e8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x355e90: 0xa6460580  sh          $a2, 0x580($s2)
    ctx->pc = 0x355e90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1408), (uint16_t)GPR_U32(ctx, 6));
    // 0x355e94: 0x862600c2  lh          $a2, 0xC2($s1)
    ctx->pc = 0x355e94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x355e98: 0xa6460582  sh          $a2, 0x582($s2)
    ctx->pc = 0x355e98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 6));
    // 0x355e9c: 0x862600c4  lh          $a2, 0xC4($s1)
    ctx->pc = 0x355e9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x355ea0: 0xa6460584  sh          $a2, 0x584($s2)
    ctx->pc = 0x355ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1412), (uint16_t)GPR_U32(ctx, 6));
    // 0x355ea4: 0x9246056d  lbu         $a2, 0x56D($s2)
    ctx->pc = 0x355ea4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1389)));
    // 0x355ea8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x355ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x355eac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x355eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x355eb0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x355eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355eb4: 0xe6400550  swc1        $f0, 0x550($s2)
    ctx->pc = 0x355eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1360), bits); }
    // 0x355eb8: 0xae440554  sw          $a0, 0x554($s2)
    ctx->pc = 0x355eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1364), GPR_U32(ctx, 4));
    // 0x355ebc: 0xae430558  sw          $v1, 0x558($s2)
    ctx->pc = 0x355ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1368), GPR_U32(ctx, 3));
label_355ec0:
    // 0x355ec0: 0xa24005bc  sb          $zero, 0x5BC($s2)
    ctx->pc = 0x355ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1468), (uint8_t)GPR_U32(ctx, 0));
    // 0x355ec4: 0x10000362  b           . + 4 + (0x362 << 2)
    ctx->pc = 0x355EC4u;
    {
        const bool branch_taken_0x355ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355EC4u;
        // 0x355ec8: 0xa240053a  sb          $zero, 0x53A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1338), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ec4) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x355ECCu;
    // 0x355ecc: 0x0  nop
    ctx->pc = 0x355eccu;
    // NOP
label_355ed0:
    // 0x355ed0: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x355ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x355ed4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x355ED4u;
    {
        const bool branch_taken_0x355ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x355ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355ED4u;
        // 0x355ed8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ed4) {
            ctx->pc = 0x355EE8u;
            goto label_355ee8;
        }
    }
    ctx->pc = 0x355EDCu;
    // 0x355edc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x355EDCu;
    {
        const bool branch_taken_0x355edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355edc) {
            ctx->pc = 0x355F68u;
            goto label_355f68;
        }
    }
    ctx->pc = 0x355EE4u;
    // 0x355ee4: 0x0  nop
    ctx->pc = 0x355ee4u;
    // NOP
label_355ee8:
    // 0x355ee8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x355ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x355eec: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x355eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x355ef0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x355ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x355ef4: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x355ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x355ef8: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x355ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x355efc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x355EFCu;
    {
        const bool branch_taken_0x355efc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355efc) {
            ctx->pc = 0x355F38u;
            goto label_355f38;
        }
    }
    ctx->pc = 0x355F04u;
    // 0x355f04: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x355f04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x355f08: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x355f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x355f0c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355F0Cu;
    {
        const bool branch_taken_0x355f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x355F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F0Cu;
        // 0x355f10: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f0c) {
            ctx->pc = 0x355F60u;
            goto label_355f60;
        }
    }
    ctx->pc = 0x355F14u;
    // 0x355f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355f18: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x355f18u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x355f1c: 0x0  nop
    ctx->pc = 0x355f1cu;
    // NOP
    // 0x355f20: 0x0  nop
    ctx->pc = 0x355f20u;
    // NOP
    // 0x355f24: 0x2010  mfhi        $a0
    ctx->pc = 0x355f24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x355f28: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x355f28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x355f2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x355F2Cu;
    {
        const bool branch_taken_0x355f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F2Cu;
        // 0x355f30: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f2c) {
            ctx->pc = 0x355F60u;
            goto label_355f60;
        }
    }
    ctx->pc = 0x355F34u;
    // 0x355f34: 0x0  nop
    ctx->pc = 0x355f34u;
    // NOP
label_355f38:
    // 0x355f38: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x355f38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x355f3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x355f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x355f40: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355F40u;
    {
        const bool branch_taken_0x355f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355f40) {
            ctx->pc = 0x355F60u;
            goto label_355f60;
        }
    }
    ctx->pc = 0x355F48u;
    // 0x355f48: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x355f48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x355f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355f50: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x355f50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x355f54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x355F54u;
    {
        const bool branch_taken_0x355f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F54u;
        // 0x355f58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f54) {
            ctx->pc = 0x355F68u;
            goto label_355f68;
        }
    }
    ctx->pc = 0x355F5Cu;
    // 0x355f5c: 0x0  nop
    ctx->pc = 0x355f5cu;
    // NOP
label_355f60:
    // 0x355f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355f64: 0x0  nop
    ctx->pc = 0x355f64u;
    // NOP
label_355f68:
    // 0x355f68: 0x14600339  bnez        $v1, . + 4 + (0x339 << 2)
    ctx->pc = 0x355F68u;
    {
        const bool branch_taken_0x355f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355f68) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x355F70u;
    // 0x355f70: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x355f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355f74: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x355f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x355f78: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x355f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x355f7c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x355f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x355f80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355f84: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x355f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x355f88: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x355f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355f8c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x355f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x355f90: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355F90u;
    {
        const bool branch_taken_0x355f90 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x355F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F90u;
        // 0x355f94: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f90) {
            ctx->pc = 0x355FA4u;
            goto label_355fa4;
        }
    }
    ctx->pc = 0x355F98u;
    // 0x355f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355f9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x355F9Cu;
    {
        const bool branch_taken_0x355f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355F9Cu;
        // 0x355fa0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355f9c) {
            ctx->pc = 0x355FBCu;
            goto label_355fbc;
        }
    }
    ctx->pc = 0x355FA4u;
label_355fa4:
    // 0x355fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x355fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x355fa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x355fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x355fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x355facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355fb0: 0x0  nop
    ctx->pc = 0x355fb0u;
    // NOP
    // 0x355fb4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x355fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x355fb8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x355fb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_355fbc:
    // 0x355fbc: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x355fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x355fc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x355fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x355fc4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x355fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x355fc8: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x355fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x355fcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x355fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x355fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355fd4: 0x0  nop
    ctx->pc = 0x355fd4u;
    // NOP
    // 0x355fd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x355fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x355fdc: 0xc0d55e8  jal         func_3557A0
    ctx->pc = 0x355FDCu;
    SET_GPR_U32(ctx, 31, 0x355FE4u);
    ctx->pc = 0x355FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355FDCu;
    // 0x355fe0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557A0u, 0x355FDCu, 0x355FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FE4u;
label_355fe4:
    // 0x355fe4: 0x8f8b80e0  lw          $t3, -0x7F20($gp)
    ctx->pc = 0x355fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x355fe8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x355fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x355fec: 0x344a0dcd  ori         $t2, $v0, 0xDCD
    ctx->pc = 0x355fecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x355ff0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x355ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x355ff4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x355ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x355ff8: 0x240c001e  addiu       $t4, $zero, 0x1E
    ctx->pc = 0x355ff8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x355ffc: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x355ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x356000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356004: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x356004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x356008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35600c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x35600cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x356010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356014: 0x16a1018  mult        $v0, $t3, $t2
    ctx->pc = 0x356014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x356018: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x356018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35601c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x356020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356024: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x356024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x356028: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x356028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35602c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x35602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x356030: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x356030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x356034: 0x4c001b  divu        $zero, $v0, $t4
    ctx->pc = 0x356034u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x356038: 0x0  nop
    ctx->pc = 0x356038u;
    // NOP
    // 0x35603c: 0x0  nop
    ctx->pc = 0x35603cu;
    // NOP
    // 0x356040: 0x1010  mfhi        $v0
    ctx->pc = 0x356040u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x356044: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x356044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x356048: 0xa6420526  sh          $v0, 0x526($s2)
    ctx->pc = 0x356048u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x35604c: 0xa2430522  sb          $v1, 0x522($s2)
    ctx->pc = 0x35604cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 3));
    // 0x356050: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x356050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x356054: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x356054u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x356058: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356058u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35605c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x35605cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356060: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x356060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x356064: 0x9242052e  lbu         $v0, 0x52E($s2)
    ctx->pc = 0x356064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x356068: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x356068u;
    SET_GPR_U32(ctx, 31, 0x356070u);
    ctx->pc = 0x35606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356068u;
    // 0x35606c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x356068u, 0x356070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356070u;
label_356070:
    // 0x356070: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x356070u;
    {
        const bool branch_taken_0x356070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356070) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356078u;
label_356078:
    // 0x356078: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x356078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x35607c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35607cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x356080: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x356080u;
    SET_GPR_U32(ctx, 31, 0x356088u);
    ctx->pc = 0x356084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356080u;
    // 0x356084: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x356080u, 0x356088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356088u;
label_356088:
    // 0x356088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35608c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35608Cu;
    {
        const bool branch_taken_0x35608c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x356090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35608Cu;
        // 0x356090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35608c) {
            ctx->pc = 0x3560A0u;
            goto label_3560a0;
        }
    }
    ctx->pc = 0x356094u;
    // 0x356094: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x356094u;
    {
        const bool branch_taken_0x356094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356094u;
        // 0x356098: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356094) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x35609Cu;
    // 0x35609c: 0x0  nop
    ctx->pc = 0x35609cu;
    // NOP
label_3560a0:
    // 0x3560a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3560A0u;
    {
        const bool branch_taken_0x3560a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560a0) {
            ctx->pc = 0x3560C0u;
            goto label_3560c0;
        }
    }
    ctx->pc = 0x3560A8u;
    // 0x3560a8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3560a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3560ac: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3560acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3560b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3560B0u;
    {
        const bool branch_taken_0x3560b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3560B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3560B0u;
        // 0x3560b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3560b0) {
            ctx->pc = 0x3560C0u;
            goto label_3560c0;
        }
    }
    ctx->pc = 0x3560B8u;
    // 0x3560b8: 0x100002e5  b           . + 4 + (0x2E5 << 2)
    ctx->pc = 0x3560B8u;
    {
        const bool branch_taken_0x3560b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3560BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3560B8u;
        // 0x3560bc: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3560b8) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3560C0u;
label_3560c0:
    // 0x3560c0: 0xc097864  jal         func_25E190
    ctx->pc = 0x3560C0u;
    SET_GPR_U32(ctx, 31, 0x3560C8u);
    ctx->pc = 0x3560C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3560C0u;
    // 0x3560c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x3560C0u, 0x3560C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560C8u;
label_3560c8:
    // 0x3560c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3560C8u;
    {
        const bool branch_taken_0x3560c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3560CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3560C8u;
        // 0x3560cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3560c8) {
            ctx->pc = 0x3560D8u;
            goto label_3560d8;
        }
    }
    ctx->pc = 0x3560D0u;
    // 0x3560d0: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x3560D0u;
    {
        const bool branch_taken_0x3560d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3560D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3560D0u;
        // 0x3560d4: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3560d0) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3560D8u;
label_3560d8:
    // 0x3560d8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3560d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3560dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3560e0: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x3560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x3560e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3560e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3560e8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3560e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3560ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3560ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3560f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3560f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3560f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3560f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3560f8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3560f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3560fc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3560fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x356100: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x356100u;
    {
        const bool branch_taken_0x356100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x356100) {
            ctx->pc = 0x35610Cu;
            goto label_35610c;
        }
    }
    ctx->pc = 0x356108u;
    // 0x356108: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x356108u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_35610c:
    // 0x35610c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x35610cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x356110: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x356110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x356114: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x356114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x356118: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x356118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x35611c: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x35611Cu;
    SET_GPR_U32(ctx, 31, 0x356124u);
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x35611Cu, 0x356124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356124u;
label_356124:
    // 0x356124: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x356124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x356128: 0xc0d55e8  jal         func_3557A0
    ctx->pc = 0x356128u;
    SET_GPR_U32(ctx, 31, 0x356130u);
    ctx->pc = 0x35612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356128u;
    // 0x35612c: 0x26440550  addiu       $a0, $s2, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557A0u, 0x356128u, 0x356130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356130u;
label_356130:
    // 0x356130: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x356130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x356134: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x356134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x356138: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x356138u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x35613c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x35613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x356140: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356140u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x356144: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x356144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x356148: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x356148u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x35614c: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x35614cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x356150: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x356150u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x356154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356158: 0x9242052e  lbu         $v0, 0x52E($s2)
    ctx->pc = 0x356158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x35615c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x35615cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x356160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356164: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x356164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356168: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x356168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35616c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35616cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356170: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x356170u;
    SET_GPR_U32(ctx, 31, 0x356178u);
    ctx->pc = 0x356174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356170u;
    // 0x356174: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x356170u, 0x356178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356178u;
label_356178:
    // 0x356178: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x356178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x35617c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356180: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x356180u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x356184: 0x0  nop
    ctx->pc = 0x356184u;
    // NOP
label_356188:
    // 0x356188: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x356188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x35618c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35618cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x356190: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x356190u;
    SET_GPR_U32(ctx, 31, 0x356198u);
    ctx->pc = 0x356194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356190u;
    // 0x356194: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x356190u, 0x356198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356198u;
label_356198:
    // 0x356198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35619c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35619Cu;
    {
        const bool branch_taken_0x35619c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3561A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35619Cu;
        // 0x3561a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35619c) {
            ctx->pc = 0x3561B0u;
            goto label_3561b0;
        }
    }
    ctx->pc = 0x3561A4u;
    // 0x3561a4: 0x100002aa  b           . + 4 + (0x2AA << 2)
    ctx->pc = 0x3561A4u;
    {
        const bool branch_taken_0x3561a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561A4u;
        // 0x3561a8: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561a4) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3561ACu;
    // 0x3561ac: 0x0  nop
    ctx->pc = 0x3561acu;
    // NOP
label_3561b0:
    // 0x3561b0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3561B0u;
    {
        const bool branch_taken_0x3561b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3561b0) {
            ctx->pc = 0x3561D0u;
            goto label_3561d0;
        }
    }
    ctx->pc = 0x3561B8u;
    // 0x3561b8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3561b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3561bc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3561bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3561c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3561C0u;
    {
        const bool branch_taken_0x3561c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3561C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561C0u;
        // 0x3561c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561c0) {
            ctx->pc = 0x3561D0u;
            goto label_3561d0;
        }
    }
    ctx->pc = 0x3561C8u;
    // 0x3561c8: 0x100002a1  b           . + 4 + (0x2A1 << 2)
    ctx->pc = 0x3561C8u;
    {
        const bool branch_taken_0x3561c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561C8u;
        // 0x3561cc: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561c8) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3561D0u;
label_3561d0:
    // 0x3561d0: 0xc097864  jal         func_25E190
    ctx->pc = 0x3561D0u;
    SET_GPR_U32(ctx, 31, 0x3561D8u);
    ctx->pc = 0x3561D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3561D0u;
    // 0x3561d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x3561D0u, 0x3561D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3561D8u;
label_3561d8:
    // 0x3561d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3561D8u;
    {
        const bool branch_taken_0x3561d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561D8u;
        // 0x3561dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561d8) {
            ctx->pc = 0x3561E8u;
            goto label_3561e8;
        }
    }
    ctx->pc = 0x3561E0u;
    // 0x3561e0: 0x1000029b  b           . + 4 + (0x29B << 2)
    ctx->pc = 0x3561E0u;
    {
        const bool branch_taken_0x3561e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561E0u;
        // 0x3561e4: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561e0) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3561E8u;
label_3561e8:
    // 0x3561e8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3561e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3561ec: 0x924305b0  lbu         $v1, 0x5B0($s2)
    ctx->pc = 0x3561ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x3561f0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3561f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3561f4: 0x264605a0  addiu       $a2, $s2, 0x5A0
    ctx->pc = 0x3561f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1440));
    // 0x3561f8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3561f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3561fc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3561fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x356200: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x356200u;
    SET_GPR_U32(ctx, 31, 0x356208u);
    ctx->pc = 0x356204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356200u;
    // 0x356204: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x356200u, 0x356208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356208u;
label_356208:
    // 0x356208: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x356208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x35620c: 0x26450550  addiu       $a1, $s2, 0x550
    ctx->pc = 0x35620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x356210: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x356210u;
    SET_GPR_U32(ctx, 31, 0x356218u);
    ctx->pc = 0x356214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356210u;
    // 0x356214: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x356210u, 0x356218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356218u;
label_356218:
    // 0x356218: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x356218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x35621c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x35621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x356220: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x356220u;
    SET_GPR_U32(ctx, 31, 0x356228u);
    ctx->pc = 0x356224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356220u;
    // 0x356224: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x356220u, 0x356228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356228u;
label_356228:
    // 0x356228: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x356228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x35622c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x35622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x356230: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x356230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x356234: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x356234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x356238: 0xc097384  jal         func_25CE10
    ctx->pc = 0x356238u;
    SET_GPR_U32(ctx, 31, 0x356240u);
    ctx->pc = 0x35623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356238u;
    // 0x35623c: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x356238u, 0x356240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356240u;
label_356240:
    // 0x356240: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x356240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x356244: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x356244u;
    SET_GPR_U32(ctx, 31, 0x35624Cu);
    ctx->pc = 0x356248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356244u;
    // 0x356248: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x356244u, 0x35624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35624Cu;
label_35624c:
    // 0x35624c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x35624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x356250: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x356250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x356254: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x356254u;
    SET_GPR_U32(ctx, 31, 0x35625Cu);
    ctx->pc = 0x356258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356254u;
    // 0x356258: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x356254u, 0x35625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35625Cu;
label_35625c:
    // 0x35625c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x35625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x356260: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x356260u;
    SET_GPR_U32(ctx, 31, 0x356268u);
    ctx->pc = 0x356264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356260u;
    // 0x356264: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x356260u, 0x356268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356268u;
label_356268:
    // 0x356268: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x356268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x35626c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x35626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x356270: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x356270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356274: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x356274u;
    SET_GPR_U32(ctx, 31, 0x35627Cu);
    ctx->pc = 0x356278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356274u;
    // 0x356278: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x356274u, 0x35627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35627Cu;
label_35627c:
    // 0x35627c: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x35627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x356280: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x356280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356284: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x356284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356288: 0xc097414  jal         func_25D050
    ctx->pc = 0x356288u;
    SET_GPR_U32(ctx, 31, 0x356290u);
    ctx->pc = 0x35628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356288u;
    // 0x35628c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x356288u, 0x356290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356290u;
label_356290:
    // 0x356290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356290u;
    {
        const bool branch_taken_0x356290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356290) {
            ctx->pc = 0x3562A0u;
            goto label_3562a0;
        }
    }
    ctx->pc = 0x356298u;
    // 0x356298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35629c: 0xa24205bc  sb          $v0, 0x5BC($s2)
    ctx->pc = 0x35629cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1468), (uint8_t)GPR_U32(ctx, 2));
label_3562a0:
    // 0x3562a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3562a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3562a4: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3562A4u;
    SET_GPR_U32(ctx, 31, 0x3562ACu);
    ctx->pc = 0x3562A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562A4u;
    // 0x3562a8: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3562A4u, 0x3562ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562ACu;
label_3562ac:
    // 0x3562ac: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3562acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3562b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3562b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562b4: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x3562b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x3562b8: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x3562b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x3562bc: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x3562BCu;
    SET_GPR_U32(ctx, 31, 0x3562C4u);
    ctx->pc = 0x3562C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562BCu;
    // 0x3562c0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x3562BCu, 0x3562C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562C4u;
label_3562c4:
    // 0x3562c4: 0xc0d5664  jal         func_355990
    ctx->pc = 0x3562C4u;
    SET_GPR_U32(ctx, 31, 0x3562CCu);
    ctx->pc = 0x355990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355990u, 0x3562C4u, 0x3562CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562CCu;
label_3562cc:
    // 0x3562cc: 0x10400260  beqz        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x3562CCu;
    {
        const bool branch_taken_0x3562cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562cc) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3562D4u;
    // 0x3562d4: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x3562d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3562d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3562d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3562dc: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x3562DCu;
    {
        const bool branch_taken_0x3562dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3562E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3562DCu;
        // 0x3562e0: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3562dc) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3562E4u;
    // 0x3562e4: 0x0  nop
    ctx->pc = 0x3562e4u;
    // NOP
label_3562e8:
    // 0x3562e8: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x3562e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x3562ec: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3562ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3562f0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3562F0u;
    SET_GPR_U32(ctx, 31, 0x3562F8u);
    ctx->pc = 0x3562F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562F0u;
    // 0x3562f4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3562F0u, 0x3562F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562F8u;
label_3562f8:
    // 0x3562f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3562f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3562fc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3562FCu;
    {
        const bool branch_taken_0x3562fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x356300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3562FCu;
        // 0x356300: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3562fc) {
            ctx->pc = 0x356310u;
            goto label_356310;
        }
    }
    ctx->pc = 0x356304u;
    // 0x356304: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x356304u;
    {
        const bool branch_taken_0x356304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356304u;
        // 0x356308: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356304) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x35630Cu;
    // 0x35630c: 0x0  nop
    ctx->pc = 0x35630cu;
    // NOP
label_356310:
    // 0x356310: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356310u;
    {
        const bool branch_taken_0x356310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x356310) {
            ctx->pc = 0x356330u;
            goto label_356330;
        }
    }
    ctx->pc = 0x356318u;
    // 0x356318: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x35631c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x35631cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356320: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356320u;
    {
        const bool branch_taken_0x356320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356320u;
        // 0x356324: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356320) {
            ctx->pc = 0x356330u;
            goto label_356330;
        }
    }
    ctx->pc = 0x356328u;
    // 0x356328: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x356328u;
    {
        const bool branch_taken_0x356328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356328u;
        // 0x35632c: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356328) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356330u;
label_356330:
    // 0x356330: 0xc097864  jal         func_25E190
    ctx->pc = 0x356330u;
    SET_GPR_U32(ctx, 31, 0x356338u);
    ctx->pc = 0x356334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356330u;
    // 0x356334: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x356330u, 0x356338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356338u;
label_356338:
    // 0x356338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x356338u;
    {
        const bool branch_taken_0x356338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356338u;
        // 0x35633c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356338) {
            ctx->pc = 0x356348u;
            goto label_356348;
        }
    }
    ctx->pc = 0x356340u;
    // 0x356340: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x356340u;
    {
        const bool branch_taken_0x356340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356340u;
        // 0x356344: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356340) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356348u;
label_356348:
    // 0x356348: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x356348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35634c: 0x924305b0  lbu         $v1, 0x5B0($s2)
    ctx->pc = 0x35634cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x356350: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x356350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x356354: 0x264605a0  addiu       $a2, $s2, 0x5A0
    ctx->pc = 0x356354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1440));
    // 0x356358: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x356358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x35635c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x35635cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x356360: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x356360u;
    SET_GPR_U32(ctx, 31, 0x356368u);
    ctx->pc = 0x356364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356360u;
    // 0x356364: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x356360u, 0x356368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356368u;
label_356368:
    // 0x356368: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x356368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x35636c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x35636cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356370: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x356370u;
    SET_GPR_U32(ctx, 31, 0x356378u);
    ctx->pc = 0x356374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356370u;
    // 0x356374: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x356370u, 0x356378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356378u;
label_356378:
    // 0x356378: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x356378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35637c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x35637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x356380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x356380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356384: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x356384u;
    SET_GPR_U32(ctx, 31, 0x35638Cu);
    ctx->pc = 0x356388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356384u;
    // 0x356388: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x356384u, 0x35638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35638Cu;
label_35638c:
    // 0x35638c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x35638cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x356390: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x356390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x356394: 0xe640058c  swc1        $f0, 0x58C($s2)
    ctx->pc = 0x356394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1420), bits); }
    // 0x356398: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x356398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x35639c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x35639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3563a0: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3563A0u;
    SET_GPR_U32(ctx, 31, 0x3563A8u);
    ctx->pc = 0x3563A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3563A0u;
    // 0x3563a4: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3563A0u, 0x3563A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3563A8u;
label_3563a8:
    // 0x3563a8: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x3563a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x3563ac: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x3563ACu;
    SET_GPR_U32(ctx, 31, 0x3563B4u);
    ctx->pc = 0x3563B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3563ACu;
    // 0x3563b0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x3563ACu, 0x3563B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3563B4u;
label_3563b4:
    // 0x3563b4: 0x86420580  lh          $v0, 0x580($s2)
    ctx->pc = 0x3563b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x3563b8: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x3563b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3563bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3563BCu;
    {
        const bool branch_taken_0x3563bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563BCu;
        // 0x3563c0: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3563bc) {
            ctx->pc = 0x3563CCu;
            goto label_3563cc;
        }
    }
    ctx->pc = 0x3563C4u;
    // 0x3563c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3563C4u;
    {
        const bool branch_taken_0x3563c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3563C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563C4u;
        // 0x3563c8: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3563c4) {
            ctx->pc = 0x3563DCu;
            goto label_3563dc;
        }
    }
    ctx->pc = 0x3563CCu;
label_3563cc:
    // 0x3563cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3563CCu;
    {
        const bool branch_taken_0x3563cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3563cc) {
            ctx->pc = 0x3563DCu;
            goto label_3563dc;
        }
    }
    ctx->pc = 0x3563D4u;
    // 0x3563d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3563D4u;
    {
        const bool branch_taken_0x3563d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3563D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563D4u;
        // 0x3563d8: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3563d4) {
            ctx->pc = 0x3563DCu;
            goto label_3563dc;
        }
    }
    ctx->pc = 0x3563DCu;
label_3563dc:
    // 0x3563dc: 0xa6420580  sh          $v0, 0x580($s2)
    ctx->pc = 0x3563dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1408), (uint16_t)GPR_U32(ctx, 2));
    // 0x3563e0: 0x86420580  lh          $v0, 0x580($s2)
    ctx->pc = 0x3563e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x3563e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3563E4u;
    {
        const bool branch_taken_0x3563e4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3563e4) {
            ctx->pc = 0x3563F8u;
            goto label_3563f8;
        }
    }
    ctx->pc = 0x3563ECu;
    // 0x3563ec: 0x2402ffd0  addiu       $v0, $zero, -0x30
    ctx->pc = 0x3563ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    // 0x3563f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3563F0u;
    {
        const bool branch_taken_0x3563f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3563F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563F0u;
        // 0x3563f4: 0xa6420586  sh          $v0, 0x586($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3563f0) {
            ctx->pc = 0x356400u;
            goto label_356400;
        }
    }
    ctx->pc = 0x3563F8u;
label_3563f8:
    // 0x3563f8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3563f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3563fc: 0xa6420586  sh          $v0, 0x586($s2)
    ctx->pc = 0x3563fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1414), (uint16_t)GPR_U32(ctx, 2));
label_356400:
    // 0x356400: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x356400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x356404: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x356404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x356408: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x356408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x35640c: 0x34450dcd  ori         $a1, $v0, 0xDCD
    ctx->pc = 0x35640cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x356410: 0x2403ffd0  addiu       $v1, $zero, -0x30
    ctx->pc = 0x356410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
    // 0x356414: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x356414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x356418: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x356418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x35641c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x356420: 0xaf8580e0  sw          $a1, -0x7F20($gp)
    ctx->pc = 0x356420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 5));
    // 0x356424: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x356424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x356428: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x356428u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x35642c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x35642cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x356430: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x356430u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x356434: 0xa6440588  sh          $a0, 0x588($s2)
    ctx->pc = 0x356434u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1416), (uint16_t)GPR_U32(ctx, 4));
    // 0x356438: 0xa640058a  sh          $zero, 0x58A($s2)
    ctx->pc = 0x356438u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1418), (uint16_t)GPR_U32(ctx, 0));
    // 0x35643c: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x35643cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x356440: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356440u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x356444: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x356444u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356448: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x356448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x35644c: 0xa2400522  sb          $zero, 0x522($s2)
    ctx->pc = 0x35644cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 0));
    // 0x356450: 0xa2400590  sb          $zero, 0x590($s2)
    ctx->pc = 0x356450u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1424), (uint8_t)GPR_U32(ctx, 0));
    // 0x356454: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x356454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x356458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35645c: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x35645cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
label_356460:
    // 0x356460: 0x8e450518  lw          $a1, 0x518($s2)
    ctx->pc = 0x356460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1304)));
    // 0x356464: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x356468: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x356468u;
    SET_GPR_U32(ctx, 31, 0x356470u);
    ctx->pc = 0x35646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356468u;
    // 0x35646c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x356468u, 0x356470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356470u;
label_356470:
    // 0x356470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356474: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x356474u;
    {
        const bool branch_taken_0x356474 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x356478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356474u;
        // 0x356478: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356474) {
            ctx->pc = 0x356488u;
            goto label_356488;
        }
    }
    ctx->pc = 0x35647Cu;
    // 0x35647c: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x35647Cu;
    {
        const bool branch_taken_0x35647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35647Cu;
        // 0x356480: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35647c) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356484u;
    // 0x356484: 0x0  nop
    ctx->pc = 0x356484u;
    // NOP
label_356488:
    // 0x356488: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356488u;
    {
        const bool branch_taken_0x356488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x356488) {
            ctx->pc = 0x3564A8u;
            goto label_3564a8;
        }
    }
    ctx->pc = 0x356490u;
    // 0x356490: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x356490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x356494: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x356494u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356498: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356498u;
    {
        const bool branch_taken_0x356498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356498u;
        // 0x35649c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356498) {
            ctx->pc = 0x3564A8u;
            goto label_3564a8;
        }
    }
    ctx->pc = 0x3564A0u;
    // 0x3564a0: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x3564A0u;
    {
        const bool branch_taken_0x3564a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3564A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564A0u;
        // 0x3564a4: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3564a0) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3564A8u;
label_3564a8:
    // 0x3564a8: 0xc097864  jal         func_25E190
    ctx->pc = 0x3564A8u;
    SET_GPR_U32(ctx, 31, 0x3564B0u);
    ctx->pc = 0x3564ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564A8u;
    // 0x3564ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x3564A8u, 0x3564B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564B0u;
label_3564b0:
    // 0x3564b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3564B0u;
    {
        const bool branch_taken_0x3564b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3564B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564B0u;
        // 0x3564b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3564b0) {
            ctx->pc = 0x3564C0u;
            goto label_3564c0;
        }
    }
    ctx->pc = 0x3564B8u;
    // 0x3564b8: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x3564B8u;
    {
        const bool branch_taken_0x3564b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564B8u;
        // 0x3564bc: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3564b8) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3564C0u;
label_3564c0:
    // 0x3564c0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3564c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3564c4: 0x924305b0  lbu         $v1, 0x5B0($s2)
    ctx->pc = 0x3564c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1456)));
    // 0x3564c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3564c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3564cc: 0x264605a0  addiu       $a2, $s2, 0x5A0
    ctx->pc = 0x3564ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1440));
    // 0x3564d0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3564d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3564d4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3564d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3564d8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x3564D8u;
    SET_GPR_U32(ctx, 31, 0x3564E0u);
    ctx->pc = 0x3564DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564D8u;
    // 0x3564dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x3564D8u, 0x3564E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564E0u;
label_3564e0:
    // 0x3564e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3564e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3564e4: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3564E4u;
    SET_GPR_U32(ctx, 31, 0x3564ECu);
    ctx->pc = 0x3564E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564E4u;
    // 0x3564e8: 0x26450580  addiu       $a1, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3564E4u, 0x3564ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564ECu;
label_3564ec:
    // 0x3564ec: 0xc64c058c  lwc1        $f12, 0x58C($s2)
    ctx->pc = 0x3564ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3564f0: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x3564f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3564f4: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3564f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3564f8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3564F8u;
    SET_GPR_U32(ctx, 31, 0x356500u);
    ctx->pc = 0x3564FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3564F8u;
    // 0x3564fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3564F8u, 0x356500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356500u;
label_356500:
    // 0x356500: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x356500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356504: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x356504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x356508: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x356508u;
    SET_GPR_U32(ctx, 31, 0x356510u);
    ctx->pc = 0x35650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356508u;
    // 0x35650c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x356508u, 0x356510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356510u;
label_356510:
    // 0x356510: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x356510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x356514: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x356514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x356518: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x356518u;
    SET_GPR_U32(ctx, 31, 0x356520u);
    ctx->pc = 0x35651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356518u;
    // 0x35651c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x356518u, 0x356520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356520u;
label_356520:
    // 0x356520: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x356520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x356524: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x356524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x356528: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x356528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x35652c: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x35652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x356530: 0xc097384  jal         func_25CE10
    ctx->pc = 0x356530u;
    SET_GPR_U32(ctx, 31, 0x356538u);
    ctx->pc = 0x356534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356530u;
    // 0x356534: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x356530u, 0x356538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356538u;
label_356538:
    // 0x356538: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x356538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x35653c: 0xc0763bc  jal         func_1D8EF0
    ctx->pc = 0x35653Cu;
    SET_GPR_U32(ctx, 31, 0x356544u);
    ctx->pc = 0x356540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35653Cu;
    // 0x356540: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8EF0u, 0x35653Cu, 0x356544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356544u;
label_356544:
    // 0x356544: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x356544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x356548: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x356548u;
    SET_GPR_U32(ctx, 31, 0x356550u);
    ctx->pc = 0x35654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356548u;
    // 0x35654c: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x356548u, 0x356550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356550u;
label_356550:
    // 0x356550: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x356550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x356554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x356554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356558: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x356558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x35655c: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x35655cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x356560: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x356560u;
    SET_GPR_U32(ctx, 31, 0x356568u);
    ctx->pc = 0x356564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356560u;
    // 0x356564: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x356560u, 0x356568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356568u;
label_356568:
    // 0x356568: 0x92430522  lbu         $v1, 0x522($s2)
    ctx->pc = 0x356568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1314)));
    // 0x35656c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35656cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356570: 0x10650063  beq         $v1, $a1, . + 4 + (0x63 << 2)
    ctx->pc = 0x356570u;
    {
        const bool branch_taken_0x356570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x356570) {
            ctx->pc = 0x356700u;
            goto label_356700;
        }
    }
    ctx->pc = 0x356578u;
    // 0x356578: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356578u;
    {
        const bool branch_taken_0x356578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356578) {
            ctx->pc = 0x356588u;
            goto label_356588;
        }
    }
    ctx->pc = 0x356580u;
    // 0x356580: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x356580u;
    {
        const bool branch_taken_0x356580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356580) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356588u;
label_356588:
    // 0x356588: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x356588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x35658c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35658Cu;
    {
        const bool branch_taken_0x35658c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35658Cu;
        // 0x356590: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35658c) {
            ctx->pc = 0x3565A0u;
            goto label_3565a0;
        }
    }
    ctx->pc = 0x356594u;
    // 0x356594: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x356594u;
    {
        const bool branch_taken_0x356594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356594) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x35659Cu;
    // 0x35659c: 0x0  nop
    ctx->pc = 0x35659cu;
    // NOP
label_3565a0:
    // 0x3565a0: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3565a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3565a4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3565a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3565a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3565a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3565ac: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3565acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3565b0: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x3565b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x3565b4: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3565B4u;
    {
        const bool branch_taken_0x3565b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3565b4) {
            ctx->pc = 0x3565E8u;
            goto label_3565e8;
        }
    }
    ctx->pc = 0x3565BCu;
    // 0x3565bc: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3565bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3565c0: 0x28837ff0  slti        $v1, $a0, 0x7FF0
    ctx->pc = 0x3565c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3565c4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3565C4u;
    {
        const bool branch_taken_0x3565c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565C4u;
        // 0x3565c8: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565c4) {
            ctx->pc = 0x356608u;
            goto label_356608;
        }
    }
    ctx->pc = 0x3565CCu;
    // 0x3565cc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3565ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3565d0: 0x0  nop
    ctx->pc = 0x3565d0u;
    // NOP
    // 0x3565d4: 0x0  nop
    ctx->pc = 0x3565d4u;
    // NOP
    // 0x3565d8: 0x1810  mfhi        $v1
    ctx->pc = 0x3565d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3565dc: 0xa6430510  sh          $v1, 0x510($s2)
    ctx->pc = 0x3565dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 3));
    // 0x3565e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3565E0u;
    {
        const bool branch_taken_0x3565e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3565E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3565E0u;
        // 0x3565e4: 0xa2450514  sb          $a1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3565e0) {
            ctx->pc = 0x356608u;
            goto label_356608;
        }
    }
    ctx->pc = 0x3565E8u;
label_3565e8:
    // 0x3565e8: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x3565e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3565ec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3565ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3565f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3565F0u;
    {
        const bool branch_taken_0x3565f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3565f0) {
            ctx->pc = 0x356608u;
            goto label_356608;
        }
    }
    ctx->pc = 0x3565F8u;
    // 0x3565f8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3565f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3565fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3565fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x356600u;
    {
        const bool branch_taken_0x356600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356600u;
        // 0x356604: 0xa2450515  sb          $a1, 0x515($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356600) {
            ctx->pc = 0x356610u;
            goto label_356610;
        }
    }
    ctx->pc = 0x356608u;
label_356608:
    // 0x356608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35660c: 0x0  nop
    ctx->pc = 0x35660cu;
    // NOP
label_356610:
    // 0x356610: 0x1460018f  bnez        $v1, . + 4 + (0x18F << 2)
    ctx->pc = 0x356610u;
    {
        const bool branch_taken_0x356610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356610) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356618u;
    // 0x356618: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x356618u;
    {
        const bool branch_taken_0x356618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356618u;
        // 0x35661c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356618) {
            ctx->pc = 0x356688u;
            goto label_356688;
        }
    }
    ctx->pc = 0x356620u;
    // 0x356620: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x356620u;
    SET_GPR_U32(ctx, 31, 0x356628u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x356620u, 0x356628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356628u;
label_356628:
    // 0x356628: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x356628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x35662c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356630: 0xc0aa88c  jal         func_2AA230
    ctx->pc = 0x356630u;
    SET_GPR_U32(ctx, 31, 0x356638u);
    ctx->pc = 0x356634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356630u;
    // 0x356634: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA230u, 0x356630u, 0x356638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356638u;
label_356638:
    // 0x356638: 0xae420564  sw          $v0, 0x564($s2)
    ctx->pc = 0x356638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1380), GPR_U32(ctx, 2));
    // 0x35663c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35663cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356640: 0x9244052e  lbu         $a0, 0x52E($s2)
    ctx->pc = 0x356640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x356644: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x356644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356648: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x356648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x35664c: 0xc0bc490  jal         func_2F1240
    ctx->pc = 0x35664Cu;
    SET_GPR_U32(ctx, 31, 0x356654u);
    ctx->pc = 0x356650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35664Cu;
    // 0x356650: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1240u, 0x35664Cu, 0x356654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356654u;
label_356654:
    // 0x356654: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x356654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x356658: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x356658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35665c: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x35665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x356660: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x356664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356668: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x356668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x35666c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x35666cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x356670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x356674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356678: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x356678u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35667c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35667cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356680: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x356680u;
    SET_GPR_U32(ctx, 31, 0x356688u);
    ctx->pc = 0x356684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356680u;
    // 0x356684: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x356680u, 0x356688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356688u;
label_356688:
    // 0x356688: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356688u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35668c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x35668cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356694: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x356694u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x356698: 0xa2420522  sb          $v0, 0x522($s2)
    ctx->pc = 0x356698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 2));
    // 0x35669c: 0x92420590  lbu         $v0, 0x590($s2)
    ctx->pc = 0x35669cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x3566a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3566a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3566a4: 0xa2420590  sb          $v0, 0x590($s2)
    ctx->pc = 0x3566a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1424), (uint8_t)GPR_U32(ctx, 2));
    // 0x3566a8: 0x92420590  lbu         $v0, 0x590($s2)
    ctx->pc = 0x3566a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x3566ac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3566acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3566b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3566B0u;
    {
        const bool branch_taken_0x3566b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3566B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3566B0u;
        // 0x3566b4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3566b0) {
            ctx->pc = 0x3566C0u;
            goto label_3566c0;
        }
    }
    ctx->pc = 0x3566B8u;
    // 0x3566b8: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x3566b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3566bc: 0x0  nop
    ctx->pc = 0x3566bcu;
    // NOP
label_3566c0:
    // 0x3566c0: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x3566c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3566c4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3566c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3566c8: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x3566c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x3566cc: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x3566ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3566d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3566d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3566d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3566d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566d8: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x3566d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x3566dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3566dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3566e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3566e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3566e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3566ECu;
    SET_GPR_U32(ctx, 31, 0x3566F4u);
    ctx->pc = 0x3566F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3566ECu;
    // 0x3566f0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3566ECu, 0x3566F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566F4u;
label_3566f4:
    // 0x3566f4: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x3566F4u;
    {
        const bool branch_taken_0x3566f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3566f4) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3566FCu;
    // 0x3566fc: 0x0  nop
    ctx->pc = 0x3566fcu;
    // NOP
label_356700:
    // 0x356700: 0x86440580  lh          $a0, 0x580($s2)
    ctx->pc = 0x356700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x356704: 0x86430586  lh          $v1, 0x586($s2)
    ctx->pc = 0x356704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1414)));
    // 0x356708: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x356708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35670c: 0xa6430580  sh          $v1, 0x580($s2)
    ctx->pc = 0x35670cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1408), (uint16_t)GPR_U32(ctx, 3));
    // 0x356710: 0x86440582  lh          $a0, 0x582($s2)
    ctx->pc = 0x356710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x356714: 0x86430588  lh          $v1, 0x588($s2)
    ctx->pc = 0x356714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1416)));
    // 0x356718: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x356718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35671c: 0xa6430582  sh          $v1, 0x582($s2)
    ctx->pc = 0x35671cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 3));
    // 0x356720: 0x86440584  lh          $a0, 0x584($s2)
    ctx->pc = 0x356720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1412)));
    // 0x356724: 0x8643058a  lh          $v1, 0x58A($s2)
    ctx->pc = 0x356724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1418)));
    // 0x356728: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x356728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35672c: 0xa6430584  sh          $v1, 0x584($s2)
    ctx->pc = 0x35672cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1412), (uint16_t)GPR_U32(ctx, 3));
    // 0x356730: 0x86430580  lh          $v1, 0x580($s2)
    ctx->pc = 0x356730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x356734: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x356734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x356738: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x356738u;
    {
        const bool branch_taken_0x356738 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x35673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356738u;
        // 0x35673c: 0x2861f800  slti        $at, $v1, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356738) {
            ctx->pc = 0x356748u;
            goto label_356748;
        }
    }
    ctx->pc = 0x356740u;
    // 0x356740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x356740u;
    {
        const bool branch_taken_0x356740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356740u;
        // 0x356744: 0x2463f000  addiu       $v1, $v1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356740) {
            ctx->pc = 0x356758u;
            goto label_356758;
        }
    }
    ctx->pc = 0x356748u;
label_356748:
    // 0x356748: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x356748u;
    {
        const bool branch_taken_0x356748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x356748) {
            ctx->pc = 0x356758u;
            goto label_356758;
        }
    }
    ctx->pc = 0x356750u;
    // 0x356750: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x356750u;
    {
        const bool branch_taken_0x356750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356750u;
        // 0x356754: 0x24631000  addiu       $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356750) {
            ctx->pc = 0x356758u;
            goto label_356758;
        }
    }
    ctx->pc = 0x356758u;
label_356758:
    // 0x356758: 0xa6430580  sh          $v1, 0x580($s2)
    ctx->pc = 0x356758u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1408), (uint16_t)GPR_U32(ctx, 3));
    // 0x35675c: 0x86430582  lh          $v1, 0x582($s2)
    ctx->pc = 0x35675cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x356760: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x356760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x356764: 0xa6430582  sh          $v1, 0x582($s2)
    ctx->pc = 0x356764u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1410), (uint16_t)GPR_U32(ctx, 3));
    // 0x356768: 0x86430584  lh          $v1, 0x584($s2)
    ctx->pc = 0x356768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1412)));
    // 0x35676c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x35676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x356770: 0xa6430584  sh          $v1, 0x584($s2)
    ctx->pc = 0x356770u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1412), (uint16_t)GPR_U32(ctx, 3));
    // 0x356774: 0x86430580  lh          $v1, 0x580($s2)
    ctx->pc = 0x356774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x356778: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356778u;
    {
        const bool branch_taken_0x356778 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x35677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356778u;
        // 0x35677c: 0x28610400  slti        $at, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356778) {
            ctx->pc = 0x356798u;
            goto label_356798;
        }
    }
    ctx->pc = 0x356780u;
    // 0x356780: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x356780u;
    {
        const bool branch_taken_0x356780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x356780) {
            ctx->pc = 0x356798u;
            goto label_356798;
        }
    }
    ctx->pc = 0x356788u;
    // 0x356788: 0x86430586  lh          $v1, 0x586($s2)
    ctx->pc = 0x356788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1414)));
    // 0x35678c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x35678cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x356790: 0xa6430586  sh          $v1, 0x586($s2)
    ctx->pc = 0x356790u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1414), (uint16_t)GPR_U32(ctx, 3));
    // 0x356794: 0x0  nop
    ctx->pc = 0x356794u;
    // NOP
label_356798:
    // 0x356798: 0x86430580  lh          $v1, 0x580($s2)
    ctx->pc = 0x356798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x35679c: 0x2861f801  slti        $at, $v1, -0x7FF
    ctx->pc = 0x35679cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965249) ? 1 : 0);
    // 0x3567a0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3567A0u;
    {
        const bool branch_taken_0x3567a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3567A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567A0u;
        // 0x3567a4: 0x2861fc00  slti        $at, $v1, -0x400 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966272) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3567a0) {
            ctx->pc = 0x3567C0u;
            goto label_3567c0;
        }
    }
    ctx->pc = 0x3567A8u;
    // 0x3567a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3567A8u;
    {
        const bool branch_taken_0x3567a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567a8) {
            ctx->pc = 0x3567C0u;
            goto label_3567c0;
        }
    }
    ctx->pc = 0x3567B0u;
    // 0x3567b0: 0x86430586  lh          $v1, 0x586($s2)
    ctx->pc = 0x3567b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1414)));
    // 0x3567b4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3567b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3567b8: 0xa6430586  sh          $v1, 0x586($s2)
    ctx->pc = 0x3567b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1414), (uint16_t)GPR_U32(ctx, 3));
    // 0x3567bc: 0x0  nop
    ctx->pc = 0x3567bcu;
    // NOP
label_3567c0:
    // 0x3567c0: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x3567c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x3567c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3567C4u;
    {
        const bool branch_taken_0x3567c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3567C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567C4u;
        // 0x3567c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3567c4) {
            ctx->pc = 0x3567D8u;
            goto label_3567d8;
        }
    }
    ctx->pc = 0x3567CCu;
    // 0x3567cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3567CCu;
    {
        const bool branch_taken_0x3567cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567cc) {
            ctx->pc = 0x356858u;
            goto label_356858;
        }
    }
    ctx->pc = 0x3567D4u;
    // 0x3567d4: 0x0  nop
    ctx->pc = 0x3567d4u;
    // NOP
label_3567d8:
    // 0x3567d8: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x3567d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3567dc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3567dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3567e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3567e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3567e4: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x3567e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3567e8: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x3567e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x3567ec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3567ECu;
    {
        const bool branch_taken_0x3567ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3567ec) {
            ctx->pc = 0x356828u;
            goto label_356828;
        }
    }
    ctx->pc = 0x3567F4u;
    // 0x3567f4: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x3567f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x3567f8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3567f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3567fc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3567FCu;
    {
        const bool branch_taken_0x3567fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567FCu;
        // 0x356800: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3567fc) {
            ctx->pc = 0x356850u;
            goto label_356850;
        }
    }
    ctx->pc = 0x356804u;
    // 0x356804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356808: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x356808u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35680c: 0x0  nop
    ctx->pc = 0x35680cu;
    // NOP
    // 0x356810: 0x0  nop
    ctx->pc = 0x356810u;
    // NOP
    // 0x356814: 0x2010  mfhi        $a0
    ctx->pc = 0x356814u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x356818: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356818u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35681c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35681Cu;
    {
        const bool branch_taken_0x35681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35681Cu;
        // 0x356820: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35681c) {
            ctx->pc = 0x356850u;
            goto label_356850;
        }
    }
    ctx->pc = 0x356824u;
    // 0x356824: 0x0  nop
    ctx->pc = 0x356824u;
    // NOP
label_356828:
    // 0x356828: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x356828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x35682c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x35682cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x356830: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356830u;
    {
        const bool branch_taken_0x356830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356830) {
            ctx->pc = 0x356850u;
            goto label_356850;
        }
    }
    ctx->pc = 0x356838u;
    // 0x356838: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356838u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35683c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356840: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x356840u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x356844: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356844u;
    {
        const bool branch_taken_0x356844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356844u;
        // 0x356848: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356844) {
            ctx->pc = 0x356858u;
            goto label_356858;
        }
    }
    ctx->pc = 0x35684Cu;
    // 0x35684c: 0x0  nop
    ctx->pc = 0x35684cu;
    // NOP
label_356850:
    // 0x356850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356854: 0x0  nop
    ctx->pc = 0x356854u;
    // NOP
label_356858:
    // 0x356858: 0x146000fd  bnez        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x356858u;
    {
        const bool branch_taken_0x356858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356858) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356860u;
    // 0x356860: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356860u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x356864: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x356864u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356868: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x356868u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x35686c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x35686Cu;
    {
        const bool branch_taken_0x35686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35686Cu;
        // 0x356870: 0xa2400522  sb          $zero, 0x522($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1314), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35686c) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356874u;
    // 0x356874: 0x0  nop
    ctx->pc = 0x356874u;
    // NOP
label_356878:
    // 0x356878: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x356878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35687c: 0xa6420526  sh          $v0, 0x526($s2)
    ctx->pc = 0x35687cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x356880: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x356880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x356884: 0x86430526  lh          $v1, 0x526($s2)
    ctx->pc = 0x356884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x356888: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x356888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x35688c: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x35688cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x356890: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x356890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x356894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356898: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x356898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x35689c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35689cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3568a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3568a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3568a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568ac: 0xa6430512  sh          $v1, 0x512($s2)
    ctx->pc = 0x3568acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x3568b0: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x3568b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3568b4: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x3568b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3568b8: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x3568b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3568bc: 0x9242052e  lbu         $v0, 0x52E($s2)
    ctx->pc = 0x3568bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x3568c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3568C0u;
    SET_GPR_U32(ctx, 31, 0x3568C8u);
    ctx->pc = 0x3568C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3568C0u;
    // 0x3568c4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3568C0u, 0x3568C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568C8u;
label_3568c8:
    // 0x3568c8: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3568c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3568cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3568ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3568d0: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x3568d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x3568d4: 0x0  nop
    ctx->pc = 0x3568d4u;
    // NOP
label_3568d8:
    // 0x3568d8: 0x864400c2  lh          $a0, 0xC2($s2)
    ctx->pc = 0x3568d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x3568dc: 0x86450582  lh          $a1, 0x582($s2)
    ctx->pc = 0x3568dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x3568e0: 0xc097498  jal         func_25D260
    ctx->pc = 0x3568E0u;
    SET_GPR_U32(ctx, 31, 0x3568E8u);
    ctx->pc = 0x3568E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3568E0u;
    // 0x3568e4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3568E0u, 0x3568E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568E8u;
label_3568e8:
    // 0x3568e8: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x3568e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3568ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3568ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3568f0: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3568F0u;
    SET_GPR_U32(ctx, 31, 0x3568F8u);
    ctx->pc = 0x3568F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3568F0u;
    // 0x3568f4: 0x26450580  addiu       $a1, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3568F0u, 0x3568F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568F8u;
label_3568f8:
    // 0x3568f8: 0x7a420570  lq          $v0, 0x570($s2)
    ctx->pc = 0x3568f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 1392)));
    // 0x3568fc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3568fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x356900: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x356900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x356904: 0x26460550  addiu       $a2, $s2, 0x550
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x356908: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x356908u;
    SET_GPR_U32(ctx, 31, 0x356910u);
    ctx->pc = 0x35690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356908u;
    // 0x35690c: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x356908u, 0x356910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356910u;
label_356910:
    // 0x356910: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x356910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356914: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x356914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x356918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x356918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35691c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x35691cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x356920: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x356920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x356924: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x356924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356928: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x356928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35692c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x35692Cu;
    SET_GPR_U32(ctx, 31, 0x356934u);
    ctx->pc = 0x356930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35692Cu;
    // 0x356930: 0xe7a00174  swc1        $f0, 0x174($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x35692Cu, 0x356934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356934u;
label_356934:
    // 0x356934: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x356934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x356938: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x356938u;
    SET_GPR_U32(ctx, 31, 0x356940u);
    ctx->pc = 0x35693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356938u;
    // 0x35693c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x356938u, 0x356940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356940u;
label_356940:
    // 0x356940: 0x3c02451f  lui         $v0, 0x451F
    ctx->pc = 0x356940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17695 << 16));
    // 0x356944: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x356944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x356948: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x356948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x35694c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35694cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356950: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x356950u;
    SET_GPR_U32(ctx, 31, 0x356958u);
    ctx->pc = 0x356954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356950u;
    // 0x356954: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x356950u, 0x356958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356958u;
label_356958:
    // 0x356958: 0x3c02451f  lui         $v0, 0x451F
    ctx->pc = 0x356958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17695 << 16));
    // 0x35695c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x35695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356960: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x356960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x356964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x356964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x356968: 0xc097414  jal         func_25D050
    ctx->pc = 0x356968u;
    SET_GPR_U32(ctx, 31, 0x356970u);
    ctx->pc = 0x35696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356968u;
    // 0x35696c: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x356968u, 0x356970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356970u;
label_356970:
    // 0x356970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356974: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x356974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x356978: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x356978u;
    SET_GPR_U32(ctx, 31, 0x356980u);
    ctx->pc = 0x35697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356978u;
    // 0x35697c: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x356978u, 0x356980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356980u;
label_356980:
    // 0x356980: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x356980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x356984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x356984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356988: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x356988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x35698c: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x35698cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x356990: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x356990u;
    SET_GPR_U32(ctx, 31, 0x356998u);
    ctx->pc = 0x356994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356990u;
    // 0x356994: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x356990u, 0x356998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356998u;
label_356998:
    // 0x356998: 0x864300c2  lh          $v1, 0xC2($s2)
    ctx->pc = 0x356998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x35699c: 0x86420582  lh          $v0, 0x582($s2)
    ctx->pc = 0x35699cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1410)));
    // 0x3569a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3569A0u;
    {
        const bool branch_taken_0x3569a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3569a0) {
            ctx->pc = 0x3569B8u;
            goto label_3569b8;
        }
    }
    ctx->pc = 0x3569A8u;
    // 0x3569a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3569A8u;
    {
        const bool branch_taken_0x3569a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3569ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569A8u;
        // 0x3569ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3569a8) {
            ctx->pc = 0x3569B8u;
            goto label_3569b8;
        }
    }
    ctx->pc = 0x3569B0u;
    // 0x3569b0: 0xa24205bc  sb          $v0, 0x5BC($s2)
    ctx->pc = 0x3569b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1468), (uint8_t)GPR_U32(ctx, 2));
    // 0x3569b4: 0x0  nop
    ctx->pc = 0x3569b4u;
    // NOP
label_3569b8:
    // 0x3569b8: 0xc0d5664  jal         func_355990
    ctx->pc = 0x3569B8u;
    SET_GPR_U32(ctx, 31, 0x3569C0u);
    ctx->pc = 0x355990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355990u, 0x3569B8u, 0x3569C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3569C0u;
label_3569c0:
    // 0x3569c0: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x3569C0u;
    {
        const bool branch_taken_0x3569c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3569c0) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3569C8u;
    // 0x3569c8: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x3569c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3569cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3569ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3569d0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3569D0u;
    {
        const bool branch_taken_0x3569d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3569D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569D0u;
        // 0x3569d4: 0xa2430521  sb          $v1, 0x521($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3569d0) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x3569D8u;
label_3569d8:
    // 0x3569d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3569d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3569dc: 0xa6420526  sh          $v0, 0x526($s2)
    ctx->pc = 0x3569dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3569e0: 0x86420526  lh          $v0, 0x526($s2)
    ctx->pc = 0x3569e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x3569e4: 0xa6420512  sh          $v0, 0x512($s2)
    ctx->pc = 0x3569e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3569e8: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x3569e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3569ec: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x3569ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3569f0: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x3569f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3569f4: 0xa2400590  sb          $zero, 0x590($s2)
    ctx->pc = 0x3569f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1424), (uint8_t)GPR_U32(ctx, 0));
    // 0x3569f8: 0x92420521  lbu         $v0, 0x521($s2)
    ctx->pc = 0x3569f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x3569fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3569fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356a00: 0xa2420521  sb          $v0, 0x521($s2)
    ctx->pc = 0x356a00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 2));
    // 0x356a04: 0x0  nop
    ctx->pc = 0x356a04u;
    // NOP
label_356a08:
    // 0x356a08: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x356a0c: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x356A0Cu;
    SET_GPR_U32(ctx, 31, 0x356A14u);
    ctx->pc = 0x356A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A0Cu;
    // 0x356a10: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x356A0Cu, 0x356A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A14u;
label_356a14:
    // 0x356a14: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x356a14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x356a18: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x356a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x356a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x356a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a20: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x356a20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x356a24: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x356a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    // 0x356a28: 0xc0c08c8  jal         func_302320
    ctx->pc = 0x356A28u;
    SET_GPR_U32(ctx, 31, 0x356A30u);
    ctx->pc = 0x356A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A28u;
    // 0x356a2c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302320u, 0x356A28u, 0x356A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A30u;
label_356a30:
    // 0x356a30: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x356a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x356a34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356A34u;
    {
        const bool branch_taken_0x356a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A34u;
        // 0x356a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a34) {
            ctx->pc = 0x356A48u;
            goto label_356a48;
        }
    }
    ctx->pc = 0x356A3Cu;
    // 0x356a3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x356A3Cu;
    {
        const bool branch_taken_0x356a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a3c) {
            ctx->pc = 0x356AC8u;
            goto label_356ac8;
        }
    }
    ctx->pc = 0x356A44u;
    // 0x356a44: 0x0  nop
    ctx->pc = 0x356a44u;
    // NOP
label_356a48:
    // 0x356a48: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x356a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x356a4c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x356a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x356a50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x356a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x356a54: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356a54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x356a58: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x356a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x356a5c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x356A5Cu;
    {
        const bool branch_taken_0x356a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x356a5c) {
            ctx->pc = 0x356A98u;
            goto label_356a98;
        }
    }
    ctx->pc = 0x356A64u;
    // 0x356a64: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x356a64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x356a68: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x356a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x356a6c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x356A6Cu;
    {
        const bool branch_taken_0x356a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A6Cu;
        // 0x356a70: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a6c) {
            ctx->pc = 0x356AC0u;
            goto label_356ac0;
        }
    }
    ctx->pc = 0x356A74u;
    // 0x356a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356a78: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x356a78u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x356a7c: 0x0  nop
    ctx->pc = 0x356a7cu;
    // NOP
    // 0x356a80: 0x0  nop
    ctx->pc = 0x356a80u;
    // NOP
    // 0x356a84: 0x2010  mfhi        $a0
    ctx->pc = 0x356a84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x356a88: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356a88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x356a8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x356A8Cu;
    {
        const bool branch_taken_0x356a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A8Cu;
        // 0x356a90: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a8c) {
            ctx->pc = 0x356AC0u;
            goto label_356ac0;
        }
    }
    ctx->pc = 0x356A94u;
    // 0x356a94: 0x0  nop
    ctx->pc = 0x356a94u;
    // NOP
label_356a98:
    // 0x356a98: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x356a98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x356a9c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x356a9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x356aa0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356AA0u;
    {
        const bool branch_taken_0x356aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356aa0) {
            ctx->pc = 0x356AC0u;
            goto label_356ac0;
        }
    }
    ctx->pc = 0x356AA8u;
    // 0x356aa8: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x356aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356ab0: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x356ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x356ab4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356AB4u;
    {
        const bool branch_taken_0x356ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AB4u;
        // 0x356ab8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ab4) {
            ctx->pc = 0x356AC8u;
            goto label_356ac8;
        }
    }
    ctx->pc = 0x356ABCu;
    // 0x356abc: 0x0  nop
    ctx->pc = 0x356abcu;
    // NOP
label_356ac0:
    // 0x356ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356ac4: 0x0  nop
    ctx->pc = 0x356ac4u;
    // NOP
label_356ac8:
    // 0x356ac8: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x356AC8u;
    {
        const bool branch_taken_0x356ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AC8u;
        // 0x356acc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ac8) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356AD0u;
    // 0x356ad0: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x356AD0u;
    SET_GPR_U32(ctx, 31, 0x356AD8u);
    ctx->pc = 0x356AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AD0u;
    // 0x356ad4: 0x26450580  addiu       $a1, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x356AD0u, 0x356AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AD8u;
label_356ad8:
    // 0x356ad8: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x356ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x356adc: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x356ADCu;
    {
        const bool branch_taken_0x356adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x356AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356ADCu;
        // 0x356ae0: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356adc) {
            ctx->pc = 0x356B50u;
            goto label_356b50;
        }
    }
    ctx->pc = 0x356AE4u;
    // 0x356ae4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x356AE4u;
    SET_GPR_U32(ctx, 31, 0x356AECu);
    ctx->pc = 0x356AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AE4u;
    // 0x356ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x356AE4u, 0x356AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AECu;
label_356aec:
    // 0x356aec: 0x9245052e  lbu         $a1, 0x52E($s2)
    ctx->pc = 0x356aecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x356af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356af4: 0xc0aa88c  jal         func_2AA230
    ctx->pc = 0x356AF4u;
    SET_GPR_U32(ctx, 31, 0x356AFCu);
    ctx->pc = 0x356AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AF4u;
    // 0x356af8: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA230u, 0x356AF4u, 0x356AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AFCu;
label_356afc:
    // 0x356afc: 0xae420564  sw          $v0, 0x564($s2)
    ctx->pc = 0x356afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1380), GPR_U32(ctx, 2));
    // 0x356b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x356b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b04: 0x9244052e  lbu         $a0, 0x52E($s2)
    ctx->pc = 0x356b04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x356b08: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x356b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356b0c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x356b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x356b10: 0xc0bc490  jal         func_2F1240
    ctx->pc = 0x356B10u;
    SET_GPR_U32(ctx, 31, 0x356B18u);
    ctx->pc = 0x356B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B10u;
    // 0x356b14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1240u, 0x356B10u, 0x356B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B18u;
label_356b18:
    // 0x356b18: 0x9243052e  lbu         $v1, 0x52E($s2)
    ctx->pc = 0x356b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1326)));
    // 0x356b1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x356b20: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x356b24: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x356b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x356b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b2c: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x356b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x356b30: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x356b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x356b34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x356b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x356b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x356b3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x356b40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356b44: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x356B44u;
    SET_GPR_U32(ctx, 31, 0x356B4Cu);
    ctx->pc = 0x356B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B44u;
    // 0x356b48: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x356B44u, 0x356B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B4Cu;
label_356b4c:
    // 0x356b4c: 0x0  nop
    ctx->pc = 0x356b4cu;
    // NOP
label_356b50:
    // 0x356b50: 0x92430590  lbu         $v1, 0x590($s2)
    ctx->pc = 0x356b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x356b54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356b58: 0xa2430590  sb          $v1, 0x590($s2)
    ctx->pc = 0x356b58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1424), (uint8_t)GPR_U32(ctx, 3));
    // 0x356b5c: 0x92430590  lbu         $v1, 0x590($s2)
    ctx->pc = 0x356b5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x356b60: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x356b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x356b64: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x356B64u;
    {
        const bool branch_taken_0x356b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B64u;
        // 0x356b68: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b64) {
            ctx->pc = 0x356B70u;
            goto label_356b70;
        }
    }
    ctx->pc = 0x356B6Cu;
    // 0x356b6c: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x356b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
label_356b70:
    // 0x356b70: 0x86430526  lh          $v1, 0x526($s2)
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1318)));
    // 0x356b74: 0xa6430512  sh          $v1, 0x512($s2)
    ctx->pc = 0x356b74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x356b78: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356b78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x356b7c: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x356b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b80: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x356B80u;
    {
        const bool branch_taken_0x356b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B80u;
        // 0x356b84: 0xa2400515  sb          $zero, 0x515($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b80) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356B88u;
label_356b88:
    // 0x356b88: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x356b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x356b8c: 0xa6430512  sh          $v1, 0x512($s2)
    ctx->pc = 0x356b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x356b90: 0xa6400510  sh          $zero, 0x510($s2)
    ctx->pc = 0x356b90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x356b94: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x356b94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b98: 0xa2400515  sb          $zero, 0x515($s2)
    ctx->pc = 0x356b98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x356b9c: 0x92430521  lbu         $v1, 0x521($s2)
    ctx->pc = 0x356b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1313)));
    // 0x356ba0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356ba4: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x356ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
label_356ba8:
    // 0x356ba8: 0x92430515  lbu         $v1, 0x515($s2)
    ctx->pc = 0x356ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1301)));
    // 0x356bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x356BACu;
    {
        const bool branch_taken_0x356bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BACu;
        // 0x356bb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356bac) {
            ctx->pc = 0x356BC0u;
            goto label_356bc0;
        }
    }
    ctx->pc = 0x356BB4u;
    // 0x356bb4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x356BB4u;
    {
        const bool branch_taken_0x356bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356bb4) {
            ctx->pc = 0x356C40u;
            goto label_356c40;
        }
    }
    ctx->pc = 0x356BBCu;
    // 0x356bbc: 0x0  nop
    ctx->pc = 0x356bbcu;
    // NOP
label_356bc0:
    // 0x356bc0: 0x86440510  lh          $a0, 0x510($s2)
    ctx->pc = 0x356bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x356bc4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x356bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x356bc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x356bcc: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356bccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x356bd0: 0x86440512  lh          $a0, 0x512($s2)
    ctx->pc = 0x356bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1298)));
    // 0x356bd4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x356BD4u;
    {
        const bool branch_taken_0x356bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x356bd4) {
            ctx->pc = 0x356C10u;
            goto label_356c10;
        }
    }
    ctx->pc = 0x356BDCu;
    // 0x356bdc: 0x86450510  lh          $a1, 0x510($s2)
    ctx->pc = 0x356bdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x356be0: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x356be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x356be4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x356BE4u;
    {
        const bool branch_taken_0x356be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356BE4u;
        // 0x356be8: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356be4) {
            ctx->pc = 0x356C38u;
            goto label_356c38;
        }
    }
    ctx->pc = 0x356BECu;
    // 0x356bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356bf0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x356bf0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x356bf4: 0x0  nop
    ctx->pc = 0x356bf4u;
    // NOP
    // 0x356bf8: 0x0  nop
    ctx->pc = 0x356bf8u;
    // NOP
    // 0x356bfc: 0x2010  mfhi        $a0
    ctx->pc = 0x356bfcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x356c00: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356c00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x356c04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x356C04u;
    {
        const bool branch_taken_0x356c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C04u;
        // 0x356c08: 0xa2430514  sb          $v1, 0x514($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c04) {
            ctx->pc = 0x356C38u;
            goto label_356c38;
        }
    }
    ctx->pc = 0x356C0Cu;
    // 0x356c0c: 0x0  nop
    ctx->pc = 0x356c0cu;
    // NOP
label_356c10:
    // 0x356c10: 0x86430510  lh          $v1, 0x510($s2)
    ctx->pc = 0x356c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x356c14: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x356c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x356c18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356C18u;
    {
        const bool branch_taken_0x356c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356c18) {
            ctx->pc = 0x356C38u;
            goto label_356c38;
        }
    }
    ctx->pc = 0x356C20u;
    // 0x356c20: 0xa6440510  sh          $a0, 0x510($s2)
    ctx->pc = 0x356c20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x356c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356c28: 0xa2430515  sb          $v1, 0x515($s2)
    ctx->pc = 0x356c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x356c2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x356C2Cu;
    {
        const bool branch_taken_0x356c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C2Cu;
        // 0x356c30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356c2c) {
            ctx->pc = 0x356C40u;
            goto label_356c40;
        }
    }
    ctx->pc = 0x356C34u;
    // 0x356c34: 0x0  nop
    ctx->pc = 0x356c34u;
    // NOP
label_356c38:
    // 0x356c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356c3c: 0x0  nop
    ctx->pc = 0x356c3cu;
    // NOP
label_356c40:
    // 0x356c40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356C40u;
    {
        const bool branch_taken_0x356c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356c40) {
            ctx->pc = 0x356C50u;
            goto label_356c50;
        }
    }
    ctx->pc = 0x356C48u;
    // 0x356c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356c4c: 0xa2430521  sb          $v1, 0x521($s2)
    ctx->pc = 0x356c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1313), (uint8_t)GPR_U32(ctx, 3));
label_356c50:
    // 0x356c50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x356c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356c54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x356c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356c58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x356c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356c5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x356c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356c60: 0x3e00008  jr          $ra
    ctx->pc = 0x356C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C60u;
        // 0x356c64: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356C68u;
}
