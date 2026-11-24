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

// Function: sub_003E6890
// Address: 0x3e6890 - 0x3e728c
void sub_003E6890_0x3e6890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6890_0x3e6890");
#endif

    switch (ctx->pc) {
        case 0x3e68f8u: goto label_3e68f8;
        case 0x3e6950u: goto label_3e6950;
        case 0x3e6968u: goto label_3e6968;
        case 0x3e69ccu: goto label_3e69cc;
        case 0x3e6a30u: goto label_3e6a30;
        case 0x3e6a7cu: goto label_3e6a7c;
        case 0x3e6ac0u: goto label_3e6ac0;
        case 0x3e6ad0u: goto label_3e6ad0;
        case 0x3e6b34u: goto label_3e6b34;
        case 0x3e6b84u: goto label_3e6b84;
        case 0x3e6bc0u: goto label_3e6bc0;
        case 0x3e6c10u: goto label_3e6c10;
        case 0x3e6c50u: goto label_3e6c50;
        case 0x3e6cc0u: goto label_3e6cc0;
        case 0x3e6d08u: goto label_3e6d08;
        case 0x3e6d48u: goto label_3e6d48;
        case 0x3e6db4u: goto label_3e6db4;
        case 0x3e6df4u: goto label_3e6df4;
        case 0x3e6e7cu: goto label_3e6e7c;
        case 0x3e6edcu: goto label_3e6edc;
        case 0x3e6f48u: goto label_3e6f48;
        case 0x3e6f88u: goto label_3e6f88;
        case 0x3e6fd8u: goto label_3e6fd8;
        case 0x3e7018u: goto label_3e7018;
        case 0x3e7068u: goto label_3e7068;
        case 0x3e70b0u: goto label_3e70b0;
        case 0x3e70f0u: goto label_3e70f0;
        case 0x3e7138u: goto label_3e7138;
        case 0x3e7178u: goto label_3e7178;
        case 0x3e71bcu: goto label_3e71bc;
        case 0x3e71fcu: goto label_3e71fc;
        case 0x3e7208u: goto label_3e7208;
        case 0x3e7224u: goto label_3e7224;
        case 0x3e7264u: goto label_3e7264;
        case 0x3e7270u: goto label_3e7270;
        default: break;
    }

    ctx->pc = 0x3e6890u;

    // 0x3e6890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e6894: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e6894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e6898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e689c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e68a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e68a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e68a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e68a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e68a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e68ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e68acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68b0: 0x90840055  lbu         $a0, 0x55($a0)
    ctx->pc = 0x3e68b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x3e68b4: 0x10830232  beq         $a0, $v1, . + 4 + (0x232 << 2)
    ctx->pc = 0x3E68B4u;
    {
        const bool branch_taken_0x3e68b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68B4u;
        // 0x3e68b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68b4) {
            ctx->pc = 0x3E7180u;
            goto label_3e7180;
        }
    }
    ctx->pc = 0x3E68BCu;
    // 0x3e68bc: 0x1083020e  beq         $a0, $v1, . + 4 + (0x20E << 2)
    ctx->pc = 0x3E68BCu;
    {
        const bool branch_taken_0x3e68bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e68bc) {
            ctx->pc = 0x3E70F8u;
            goto label_3e70f8;
        }
    }
    ctx->pc = 0x3E68C4u;
    // 0x3e68c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e68c8: 0x108301e9  beq         $a0, $v1, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x3E68C8u;
    {
        const bool branch_taken_0x3e68c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68C8u;
        // 0x3e68cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68c8) {
            ctx->pc = 0x3E7070u;
            goto label_3e7070;
        }
    }
    ctx->pc = 0x3E68D0u;
    // 0x3e68d0: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x3E68D0u;
    {
        const bool branch_taken_0x3e68d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e68d0) {
            ctx->pc = 0x3E6AC8u;
            goto label_3e6ac8;
        }
    }
    ctx->pc = 0x3E68D8u;
    // 0x3e68d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E68D8u;
    {
        const bool branch_taken_0x3e68d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e68d8) {
            ctx->pc = 0x3E68E8u;
            goto label_3e68e8;
        }
    }
    ctx->pc = 0x3E68E0u;
    // 0x3e68e0: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x3E68E0u;
    {
        const bool branch_taken_0x3e68e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e68e0) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E68E8u;
label_3e68e8:
    // 0x3e68e8: 0x3c120066  lui         $s2, 0x66
    ctx->pc = 0x3e68e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
    // 0x3e68ec: 0x2652faa0  addiu       $s2, $s2, -0x560
    ctx->pc = 0x3e68ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965920));
    // 0x3e68f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e68f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68f4: 0x0  nop
    ctx->pc = 0x3e68f4u;
    // NOP
label_3e68f8:
    // 0x3e68f8: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x3e68f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e68fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6900: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e6900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3e6904: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e6904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e6908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E6908u;
    {
        const bool branch_taken_0x3e6908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6908u;
        // 0x3e690c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6908) {
            ctx->pc = 0x3E6950u;
            goto label_3e6950;
        }
    }
    ctx->pc = 0x3E6910u;
    // 0x3e6910: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6914: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6918: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e691c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6920: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6924: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x3e6924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3e6928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e692c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e692cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6930: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e6930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6934: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e6934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6938: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e6938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e693c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6940: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x3e6940u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e6944: 0x96460002  lhu         $a2, 0x2($s2)
    ctx->pc = 0x3e6944u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3e6948: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6948u;
    SET_GPR_U32(ctx, 31, 0x3E6950u);
    ctx->pc = 0x3E694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6948u;
    // 0x3e694c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6948u, 0x3E6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6950u;
label_3e6950:
    // 0x3e6950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e6950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e6954: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x3e6954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e6958: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3E6958u;
    {
        const bool branch_taken_0x3e6958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6958u;
        // 0x3e695c: 0x26520006  addiu       $s2, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6958) {
            ctx->pc = 0x3E68F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e68f8;
        }
    }
    ctx->pc = 0x3E6960u;
    // 0x3e6960: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e6960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6964: 0x2411006b  addiu       $s1, $zero, 0x6B
    ctx->pc = 0x3e6964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_3e6968:
    // 0x3e6968: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x3e6968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e696c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e696cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6970: 0x24b1004  sllv        $v0, $t3, $s2
    ctx->pc = 0x3e6970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 18) & 0x1F));
    // 0x3e6974: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e6974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e6978: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E6978u;
    {
        const bool branch_taken_0x3e6978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6978u;
        // 0x3e697c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6978) {
            ctx->pc = 0x3E69D0u;
            goto label_3e69d0;
        }
    }
    ctx->pc = 0x3E6980u;
    // 0x3e6980: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6984: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6988: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x3e6988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3e698c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6990: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x3e6990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3e6994: 0x804c000f  lb          $t4, 0xF($v0)
    ctx->pc = 0x3e6994u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x3e6998: 0x27838468  addiu       $v1, $gp, -0x7B98
    ctx->pc = 0x3e6998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935656));
    // 0x3e699c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e69a0: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x3e69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x3e69a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e69a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e69a8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e69a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e69ac: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e69acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e69b0: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e69b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e69b4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3e69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3e69b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e69bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e69bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e69c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e69c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e69c4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E69C4u;
    SET_GPR_U32(ctx, 31, 0x3E69CCu);
    ctx->pc = 0x3E69C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E69C4u;
    // 0x3e69c8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E69C4u, 0x3E69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E69CCu;
label_3e69cc:
    // 0x3e69cc: 0x0  nop
    ctx->pc = 0x3e69ccu;
    // NOP
label_3e69d0:
    // 0x3e69d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e69d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e69d4: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x3e69d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e69d8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3E69D8u;
    {
        const bool branch_taken_0x3e69d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E69D8u;
        // 0x3e69dc: 0x26310019  addiu       $s1, $s1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e69d8) {
            ctx->pc = 0x3E6968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6968;
        }
    }
    ctx->pc = 0x3E69E0u;
    // 0x3e69e0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e69e4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e69e8: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e69ec: 0x27838470  addiu       $v1, $gp, -0x7B90
    ctx->pc = 0x3e69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935664));
    // 0x3e69f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e69f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e69f4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e69f8: 0x820c0058  lb          $t4, 0x58($s0)
    ctx->pc = 0x3e69f8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e69fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6a00: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3e6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e6a04: 0x2406014a  addiu       $a2, $zero, 0x14A
    ctx->pc = 0x3e6a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x3e6a08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a0c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6a10: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x3e6a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6a14: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x3e6a14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3e6a18: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e6a18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6a1c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3e6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3e6a20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e6a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6a24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e6a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e6a28: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6A28u;
    SET_GPR_U32(ctx, 31, 0x3E6A30u);
    ctx->pc = 0x3E6A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A28u;
    // 0x3e6a2c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6A28u, 0x3E6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A30u;
label_3e6a30:
    // 0x3e6a30: 0x82020058  lb          $v0, 0x58($s0)
    ctx->pc = 0x3e6a30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e6a34: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x3e6a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e6a38: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E6A38u;
    {
        const bool branch_taken_0x3e6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6A38u;
        // 0x3e6a3c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6a38) {
            ctx->pc = 0x3E6A80u;
            goto label_3e6a80;
        }
    }
    ctx->pc = 0x3E6A40u;
    // 0x3e6a40: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6a44: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6a48: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6a4c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6a50: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3e6a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3e6a54: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6a58: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6a5c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6a60: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e6a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e6a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6a68: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6a6c: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e6a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e6a70: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e6a70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6a74: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6A74u;
    SET_GPR_U32(ctx, 31, 0x3E6A7Cu);
    ctx->pc = 0x3E6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6A74u;
    // 0x3e6a78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6A74u, 0x3E6A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6A7Cu;
label_3e6a7c:
    // 0x3e6a7c: 0x0  nop
    ctx->pc = 0x3e6a7cu;
    // NOP
label_3e6a80:
    // 0x3e6a80: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e6a84: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e6a88: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6a8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e6a90: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6a94: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6a98: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3e6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3e6a9c: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x3e6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x3e6aa0: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e6aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e6aa4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6aac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6ab0: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e6ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e6ab4: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e6ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6ab8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6AB8u;
    SET_GPR_U32(ctx, 31, 0x3E6AC0u);
    ctx->pc = 0x3E6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6AB8u;
    // 0x3e6abc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6AB8u, 0x3E6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6AC0u;
label_3e6ac0:
    // 0x3e6ac0: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x3E6AC0u;
    {
        const bool branch_taken_0x3e6ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6ac0) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E6AC8u;
label_3e6ac8:
    // 0x3e6ac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e6ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6acc: 0x24110043  addiu       $s1, $zero, 0x43
    ctx->pc = 0x3e6accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_3e6ad0:
    // 0x3e6ad0: 0x82040081  lb          $a0, 0x81($s0)
    ctx->pc = 0x3e6ad0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x3e6ad4: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x3e6ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3e6ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6adc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3e6adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e6ae0: 0x80850014  lb          $a1, 0x14($a0)
    ctx->pc = 0x3e6ae0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6ae4: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x3e6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3e6ae8: 0x8084001e  lb          $a0, 0x1E($a0)
    ctx->pc = 0x3e6ae8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x3e6aec: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6AECu;
    {
        const bool branch_taken_0x3e6aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6AECu;
        // 0x3e6af0: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6aec) {
            ctx->pc = 0x3E6B40u;
            goto label_3e6b40;
        }
    }
    ctx->pc = 0x3E6AF4u;
    // 0x3e6af4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3e6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e6af8: 0x246349c8  addiu       $v1, $v1, 0x49C8
    ctx->pc = 0x3e6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18888));
    // 0x3e6afc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6b00: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6b04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3e6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3e6b08: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3e6b0c: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x3e6b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3e6b10: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b18: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6b1c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3e6b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6b20: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x3e6b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6b24: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6b28: 0x97858478  lhu         $a1, -0x7B88($gp)
    ctx->pc = 0x3e6b28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935672)));
    // 0x3e6b2c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6B2Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B34u);
    ctx->pc = 0x3E6B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B2Cu;
    // 0x3e6b30: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6B2Cu, 0x3E6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B34u;
label_3e6b34:
    // 0x3e6b34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6B34u;
    {
        const bool branch_taken_0x3e6b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6b34) {
            ctx->pc = 0x3E6B88u;
            goto label_3e6b88;
        }
    }
    ctx->pc = 0x3E6B3Cu;
    // 0x3e6b3c: 0x0  nop
    ctx->pc = 0x3e6b3cu;
    // NOP
label_3e6b40:
    // 0x3e6b40: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x3e6b40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e6b44: 0x148b0010  bne         $a0, $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E6B44u;
    {
        const bool branch_taken_0x3e6b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        ctx->pc = 0x3E6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B44u;
        // 0x3e6b48: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b44) {
            ctx->pc = 0x3E6B88u;
            goto label_3e6b88;
        }
    }
    ctx->pc = 0x3E6B4Cu;
    // 0x3e6b4c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6b50: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6b54: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6b58: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6b5c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x3e6b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x3e6b60: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6b64: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x3e6b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3e6b68: 0x97858478  lhu         $a1, -0x7B88($gp)
    ctx->pc = 0x3e6b68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935672)));
    // 0x3e6b6c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6b70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6b74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6b78: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3e6b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6b7c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6B7Cu;
    SET_GPR_U32(ctx, 31, 0x3E6B84u);
    ctx->pc = 0x3E6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6B7Cu;
    // 0x3e6b80: 0x240a0012  addiu       $t2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6B7Cu, 0x3E6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6B84u;
label_3e6b84:
    // 0x3e6b84: 0x0  nop
    ctx->pc = 0x3e6b84u;
    // NOP
label_3e6b88:
    // 0x3e6b88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e6b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e6b8c: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x3e6b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e6b90: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3E6B90u;
    {
        const bool branch_taken_0x3e6b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6B90u;
        // 0x3e6b94: 0x26310019  addiu       $s1, $s1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6b90) {
            ctx->pc = 0x3E6AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6ad0;
        }
    }
    ctx->pc = 0x3E6B98u;
    // 0x3e6b98: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x3e6b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3e6b9c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x3e6b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6ba0: 0x14600097  bnez        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x3E6BA0u;
    {
        const bool branch_taken_0x3e6ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BA0u;
        // 0x3e6ba4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ba0) {
            ctx->pc = 0x3E6E00u;
            goto label_3e6e00;
        }
    }
    ctx->pc = 0x3E6BA8u;
    // 0x3e6ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6bac: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e6bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3e6bb0: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3E6BB0u;
    {
        const bool branch_taken_0x3e6bb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BB0u;
        // 0x3e6bb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bb0) {
            ctx->pc = 0x3E6C68u;
            goto label_3e6c68;
        }
    }
    ctx->pc = 0x3E6BB8u;
    // 0x3e6bb8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3e6bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e6bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6bc0:
    // 0x3e6bc0: 0x82420090  lb          $v0, 0x90($s2)
    ctx->pc = 0x3e6bc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x3e6bc4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6BC4u;
    {
        const bool branch_taken_0x3e6bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6BC4u;
        // 0x3e6bc8: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6bc4) {
            ctx->pc = 0x3E6C18u;
            goto label_3e6c18;
        }
    }
    ctx->pc = 0x3E6BCCu;
    // 0x3e6bcc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6bd0: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6bd4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6bd8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6bdc: 0x3442003a  ori         $v0, $v0, 0x3A
    ctx->pc = 0x3e6bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58);
    // 0x3e6be0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6be4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6be8: 0x8f82847c  lw          $v0, -0x7B84($gp)
    ctx->pc = 0x3e6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x3e6bec: 0x240600d9  addiu       $a2, $zero, 0xD9
    ctx->pc = 0x3e6becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x3e6bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6bf4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6bf8: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e6bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6bfc: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e6bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6c00: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e6c00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6c04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6c08: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6C08u;
    SET_GPR_U32(ctx, 31, 0x3E6C10u);
    ctx->pc = 0x3E6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C08u;
    // 0x3e6c0c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6C08u, 0x3E6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C10u;
label_3e6c10:
    // 0x3e6c10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E6C10u;
    {
        const bool branch_taken_0x3e6c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6c10) {
            ctx->pc = 0x3E6C50u;
            goto label_3e6c50;
        }
    }
    ctx->pc = 0x3E6C18u;
label_3e6c18:
    // 0x3e6c18: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x3e6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x3e6c1c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e6c20: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6c24: 0x8f82847c  lw          $v0, -0x7B84($gp)
    ctx->pc = 0x3e6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x3e6c28: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6c2c: 0x240600d9  addiu       $a2, $zero, 0xD9
    ctx->pc = 0x3e6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x3e6c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6c34: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6c38: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e6c38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6c3c: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e6c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6c40: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e6c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6c44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6c48: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6C48u;
    SET_GPR_U32(ctx, 31, 0x3E6C50u);
    ctx->pc = 0x3E6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6C48u;
    // 0x3e6c4c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6C48u, 0x3E6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6C50u;
label_3e6c50:
    // 0x3e6c50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e6c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3e6c54: 0x2a630008  slti        $v1, $s3, 0x8
    ctx->pc = 0x3e6c54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e6c58: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3e6c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3e6c5c: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3E6C5Cu;
    {
        const bool branch_taken_0x3e6c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C5Cu;
        // 0x3e6c60: 0x26310012  addiu       $s1, $s1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6c5c) {
            ctx->pc = 0x3E6BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6bc0;
        }
    }
    ctx->pc = 0x3E6C64u;
    // 0x3e6c64: 0x0  nop
    ctx->pc = 0x3e6c64u;
    // NOP
label_3e6c68:
    // 0x3e6c68: 0x92040080  lbu         $a0, 0x80($s0)
    ctx->pc = 0x3e6c68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3e6c6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6c70: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6C70u;
    {
        const bool branch_taken_0x3e6c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6C70u;
        // 0x3e6c74: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6c70) {
            ctx->pc = 0x3E6C80u;
            goto label_3e6c80;
        }
    }
    ctx->pc = 0x3E6C78u;
    // 0x3e6c78: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E6C78u;
    {
        const bool branch_taken_0x3e6c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e6c78) {
            ctx->pc = 0x3E6CC0u;
            goto label_3e6cc0;
        }
    }
    ctx->pc = 0x3E6C80u;
label_3e6c80:
    // 0x3e6c80: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e6c84: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e6c88: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6c8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e6c90: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6c94: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6c98: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3e6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e6c9c: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x3e6c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x3e6ca0: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x3e6ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x3e6ca4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6cb0: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e6cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6cb4: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e6cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6cb8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6CB8u;
    SET_GPR_U32(ctx, 31, 0x3E6CC0u);
    ctx->pc = 0x3E6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6CB8u;
    // 0x3e6cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6CB8u, 0x3E6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6CC0u;
label_3e6cc0:
    // 0x3e6cc0: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x3e6cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3e6cc4: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e6cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6cc8: 0x1469001f  bne         $v1, $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E6CC8u;
    {
        const bool branch_taken_0x3e6cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x3E6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6CC8u;
        // 0x3e6ccc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6cc8) {
            ctx->pc = 0x3E6D48u;
            goto label_3e6d48;
        }
    }
    ctx->pc = 0x3E6CD0u;
    // 0x3e6cd0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6cd4: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6cd8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6cdc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6ce0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x3e6ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x3e6ce4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6ce8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6cec: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3e6cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e6cf0: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x3e6cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x3e6cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6cf8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6cfc: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e6cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6d00: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6D00u;
    SET_GPR_U32(ctx, 31, 0x3E6D08u);
    ctx->pc = 0x3E6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D00u;
    // 0x3e6d04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6D00u, 0x3E6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D08u;
label_3e6d08:
    // 0x3e6d08: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e6d0c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6d10: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6d14: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6d18: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6d1c: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x3e6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x3e6d20: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6d24: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6d28: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3e6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3e6d2c: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e6d30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6d30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d34: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6d38: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e6d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e6d3c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e6d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6d40: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6D40u;
    SET_GPR_U32(ctx, 31, 0x3E6D48u);
    ctx->pc = 0x3E6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6D40u;
    // 0x3e6d44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6D40u, 0x3E6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6D48u;
label_3e6d48:
    // 0x3e6d48: 0x92040080  lbu         $a0, 0x80($s0)
    ctx->pc = 0x3e6d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3e6d4c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3e6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6d50: 0x148300b1  bne         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x3E6D50u;
    {
        const bool branch_taken_0x3e6d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e6d50) {
            ctx->pc = 0x3E7018u;
            goto label_3e7018;
        }
    }
    ctx->pc = 0x3E6D58u;
    // 0x3e6d58: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e6d5c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e6d60: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e6d64: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6d68: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e6d6c: 0x2463faf0  addiu       $v1, $v1, -0x510
    ctx->pc = 0x3e6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966000));
    // 0x3e6d70: 0x820c0084  lb          $t4, 0x84($s0)
    ctx->pc = 0x3e6d70u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e6d74: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6d78: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6d7c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3e6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e6d80: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x3e6d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x3e6d84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d88: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6d8c: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x3e6d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e6d90: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x3e6d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6d94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e6d94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6d98: 0x1906021  addu        $t4, $t4, $s0
    ctx->pc = 0x3e6d98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x3e6d9c: 0x818c0014  lb          $t4, 0x14($t4)
    ctx->pc = 0x3e6d9cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x3e6da0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3e6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3e6da4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e6da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6da8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e6da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e6dac: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6DACu;
    SET_GPR_U32(ctx, 31, 0x3E6DB4u);
    ctx->pc = 0x3E6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DACu;
    // 0x3e6db0: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6DACu, 0x3E6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DB4u;
label_3e6db4:
    // 0x3e6db4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e6db8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6dbc: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6dc0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6dc4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6dc8: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x3e6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x3e6dcc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6dd0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6dd4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3e6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3e6dd8: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e6ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6de0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6de4: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e6de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e6de8: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e6de8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6dec: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6DECu;
    SET_GPR_U32(ctx, 31, 0x3E6DF4u);
    ctx->pc = 0x3E6DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6DECu;
    // 0x3e6df0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6DECu, 0x3E6DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6DF4u;
label_3e6df4:
    // 0x3e6df4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3E6DF4u;
    {
        const bool branch_taken_0x3e6df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6df4) {
            ctx->pc = 0x3E7018u;
            goto label_3e7018;
        }
    }
    ctx->pc = 0x3E6DFCu;
    // 0x3e6dfc: 0x0  nop
    ctx->pc = 0x3e6dfcu;
    // NOP
label_3e6e00:
    // 0x3e6e00: 0x82040084  lb          $a0, 0x84($s0)
    ctx->pc = 0x3e6e00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3e6e04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e6e08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e6e0c: 0x2463fae0  addiu       $v1, $v1, -0x520
    ctx->pc = 0x3e6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965984));
    // 0x3e6e10: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3e6e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3e6e14: 0x80850014  lb          $a1, 0x14($a0)
    ctx->pc = 0x3e6e14u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3e6e18: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x3e6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e6e1c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x3e6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3e6e20: 0x8063001e  lb          $v1, 0x1E($v1)
    ctx->pc = 0x3e6e20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x3e6e24: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E6E24u;
    {
        const bool branch_taken_0x3e6e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E24u;
        // 0x3e6e28: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e24) {
            ctx->pc = 0x3E6E88u;
            goto label_3e6e88;
        }
    }
    ctx->pc = 0x3E6E2Cu;
    // 0x3e6e2c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e6e30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e6e34: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6e38: 0x2442faf0  addiu       $v0, $v0, -0x510
    ctx->pc = 0x3e6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
    // 0x3e6e3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6e40: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6e44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6e48: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6e4c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6e50: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x3e6e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3e6e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6e58: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6e5c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6e60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e6e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e6e64: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6e68: 0x97868480  lhu         $a2, -0x7B80($gp)
    ctx->pc = 0x3e6e68u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x3e6e6c: 0x93898484  lbu         $t1, -0x7B7C($gp)
    ctx->pc = 0x3e6e6cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935684)));
    // 0x3e6e70: 0x938a8488  lbu         $t2, -0x7B78($gp)
    ctx->pc = 0x3e6e70u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x3e6e74: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6E74u;
    SET_GPR_U32(ctx, 31, 0x3E6E7Cu);
    ctx->pc = 0x3E6E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6E74u;
    // 0x3e6e78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6E74u, 0x3E6E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6E7Cu;
label_3e6e7c:
    // 0x3e6e7c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3E6E7Cu;
    {
        const bool branch_taken_0x3e6e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e7c) {
            ctx->pc = 0x3E6F88u;
            goto label_3e6f88;
        }
    }
    ctx->pc = 0x3E6E84u;
    // 0x3e6e84: 0x0  nop
    ctx->pc = 0x3e6e84u;
    // NOP
label_3e6e88:
    // 0x3e6e88: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3E6E88u;
    {
        const bool branch_taken_0x3e6e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E88u;
        // 0x3e6e8c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e88) {
            ctx->pc = 0x3E6EE8u;
            goto label_3e6ee8;
        }
    }
    ctx->pc = 0x3E6E90u;
    // 0x3e6e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6e94: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e6e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3e6e98: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3E6E98u;
    {
        const bool branch_taken_0x3e6e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E98u;
        // 0x3e6e9c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e98) {
            ctx->pc = 0x3E6F88u;
            goto label_3e6f88;
        }
    }
    ctx->pc = 0x3E6EA0u;
    // 0x3e6ea0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6ea4: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6ea8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6eac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6eb0: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x3e6eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
    // 0x3e6eb4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6eb8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6ebc: 0x97868480  lhu         $a2, -0x7B80($gp)
    ctx->pc = 0x3e6ebcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x3e6ec0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x3e6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3e6ec4: 0x9389848c  lbu         $t1, -0x7B74($gp)
    ctx->pc = 0x3e6ec4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
    // 0x3e6ec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ecc: 0x938a8490  lbu         $t2, -0x7B70($gp)
    ctx->pc = 0x3e6eccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x3e6ed0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6ed4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6ED4u;
    SET_GPR_U32(ctx, 31, 0x3E6EDCu);
    ctx->pc = 0x3E6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6ED4u;
    // 0x3e6ed8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6ED4u, 0x3E6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EDCu;
label_3e6edc:
    // 0x3e6edc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3E6EDCu;
    {
        const bool branch_taken_0x3e6edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6edc) {
            ctx->pc = 0x3E6F88u;
            goto label_3e6f88;
        }
    }
    ctx->pc = 0x3E6EE4u;
    // 0x3e6ee4: 0x0  nop
    ctx->pc = 0x3e6ee4u;
    // NOP
label_3e6ee8:
    // 0x3e6ee8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e6ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e6eec: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e6eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e6ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6ef4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3E6EF4u;
    {
        const bool branch_taken_0x3e6ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EF4u;
        // 0x3e6ef8: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ef4) {
            ctx->pc = 0x3E6F88u;
            goto label_3e6f88;
        }
    }
    ctx->pc = 0x3E6EFCu;
    // 0x3e6efc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e6f00: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6f04: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x3e6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
    // 0x3e6f08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3e6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3e6f0c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6f10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3e6f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e6f14: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6f18: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6f1c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x3e6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3e6f20: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x3e6f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x3e6f24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6f28: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6f2c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6f30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e6f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e6f34: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6f38: 0x93898494  lbu         $t1, -0x7B6C($gp)
    ctx->pc = 0x3e6f38u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x3e6f3c: 0x938a8498  lbu         $t2, -0x7B68($gp)
    ctx->pc = 0x3e6f3cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935704)));
    // 0x3e6f40: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6F40u;
    SET_GPR_U32(ctx, 31, 0x3E6F48u);
    ctx->pc = 0x3E6F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6F40u;
    // 0x3e6f44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6F40u, 0x3E6F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6F48u;
label_3e6f48:
    // 0x3e6f48: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e6f4c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6f50: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6f54: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6f58: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6f5c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3e6f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3e6f60: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6f64: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6f68: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e6f6c: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e6f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e6f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6f74: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6f78: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e6f78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e6f7c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e6f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e6f80: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6F80u;
    SET_GPR_U32(ctx, 31, 0x3E6F88u);
    ctx->pc = 0x3E6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6F80u;
    // 0x3e6f84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6F80u, 0x3E6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6F88u;
label_3e6f88:
    // 0x3e6f88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e6f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e6f8c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e6f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e6f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e6f94: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E6F94u;
    {
        const bool branch_taken_0x3e6f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F94u;
        // 0x3e6f98: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f94) {
            ctx->pc = 0x3E6FD8u;
            goto label_3e6fd8;
        }
    }
    ctx->pc = 0x3E6F9Cu;
    // 0x3e6f9c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6fa0: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e6fa4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6fa8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3e6fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3e6fac: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e6facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e6fb0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e6fb4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6fb8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3e6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3e6fbc: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x3e6fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x3e6fc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e6fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6fc4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e6fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e6fc8: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x3e6fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3e6fcc: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x3e6fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e6fd0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E6FD0u;
    SET_GPR_U32(ctx, 31, 0x3E6FD8u);
    ctx->pc = 0x3E6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FD0u;
    // 0x3e6fd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E6FD0u, 0x3E6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FD8u;
label_3e6fd8:
    // 0x3e6fd8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e6fdc: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e6fe0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e6fe4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e6fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e6fe8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e6fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e6fec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e6ff0: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3e6ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3e6ff4: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x3e6ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x3e6ff8: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e6ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e6ffc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e7000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7004: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e7004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e7008: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e7008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e700c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e700cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e7010: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E7010u;
    SET_GPR_U32(ctx, 31, 0x3E7018u);
    ctx->pc = 0x3E7014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7010u;
    // 0x3e7014: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E7010u, 0x3E7018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7018u;
label_3e7018:
    // 0x3e7018: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e7018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e701c: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e701cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e7020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7024: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x3E7024u;
    {
        const bool branch_taken_0x3e7024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7024u;
        // 0x3e7028: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7024) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E702Cu;
    // 0x3e702c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e7030: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e7030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e7034: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7038: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e7038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e703c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3e703cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3e7040: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e7040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e7044: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e7044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e7048: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x3e7048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3e704c: 0x240600d9  addiu       $a2, $zero, 0xD9
    ctx->pc = 0x3e704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x3e7050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7054: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e7054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e7058: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e7058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e705c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e705cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e7060: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E7060u;
    SET_GPR_U32(ctx, 31, 0x3E7068u);
    ctx->pc = 0x3E7064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7060u;
    // 0x3e7064: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E7060u, 0x3E7068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7068u;
label_3e7068:
    // 0x3e7068: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3E7068u;
    {
        const bool branch_taken_0x3e7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7068) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E7070u;
label_3e7070:
    // 0x3e7070: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e7070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e7074: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e7078: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e707c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e707cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e7080: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e7080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e7084: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e7084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e7088: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e7088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e708c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3e708cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3e7090: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e7094: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e7094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e7098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e709c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e709cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e70a0: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e70a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e70a4: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e70a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e70a8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E70A8u;
    SET_GPR_U32(ctx, 31, 0x3E70B0u);
    ctx->pc = 0x3E70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70A8u;
    // 0x3e70ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E70A8u, 0x3E70B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70B0u;
label_3e70b0:
    // 0x3e70b0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e70b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e70b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e70b8: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e70bc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e70c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e70c4: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x3e70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x3e70c8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e70c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e70cc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e70d0: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3e70d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3e70d4: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e70d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e70d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e70d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e70dc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e70dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e70e0: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e70e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e70e4: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e70e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e70e8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E70E8u;
    SET_GPR_U32(ctx, 31, 0x3E70F0u);
    ctx->pc = 0x3E70ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E70E8u;
    // 0x3e70ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E70E8u, 0x3E70F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E70F0u;
label_3e70f0:
    // 0x3e70f0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3E70F0u;
    {
        const bool branch_taken_0x3e70f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e70f0) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E70F8u;
label_3e70f8:
    // 0x3e70f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e70fc: 0x244249c0  addiu       $v0, $v0, 0x49C0
    ctx->pc = 0x3e70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18880));
    // 0x3e7100: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7104: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e7104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e7108: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e7108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e710c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e7110: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3e7110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e7114: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x3e7114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3e7118: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e7118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e711c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e711cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e7120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7124: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e7124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e7128: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e7128u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e712c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e712cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e7130: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E7130u;
    SET_GPR_U32(ctx, 31, 0x3E7138u);
    ctx->pc = 0x3E7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7130u;
    // 0x3e7134: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E7130u, 0x3E7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7138u;
label_3e7138:
    // 0x3e7138: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e7138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e713c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e713cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e7140: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e7140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e7144: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7148: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e714c: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x3e714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x3e7150: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e7154: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e7154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e7158: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x3e7158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3e715c: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x3e715cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x3e7160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7164: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e7164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e7168: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x3e7168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3e716c: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x3e716cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3e7170: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E7170u;
    SET_GPR_U32(ctx, 31, 0x3E7178u);
    ctx->pc = 0x3E7174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7170u;
    // 0x3e7174: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E7170u, 0x3E7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7178u;
label_3e7178:
    // 0x3e7178: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3E7178u;
    {
        const bool branch_taken_0x3e7178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7178) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E7180u;
label_3e7180:
    // 0x3e7180: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x3e7180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x3e7184: 0x902464ca  lbu         $a0, 0x64CA($at)
    ctx->pc = 0x3e7184u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x6964CAu));
    // 0x3e7188: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e7188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e718c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E718Cu;
    {
        const bool branch_taken_0x3e718c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E718Cu;
        // 0x3e7190: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e718c) {
            ctx->pc = 0x3E7210u;
            goto label_3e7210;
        }
    }
    ctx->pc = 0x3E7194u;
    // 0x3e7194: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7194u;
    {
        const bool branch_taken_0x3e7194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e7194) {
            ctx->pc = 0x3E71A8u;
            goto label_3e71a8;
        }
    }
    ctx->pc = 0x3E719Cu;
    // 0x3e719c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3E719Cu;
    {
        const bool branch_taken_0x3e719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e719c) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E71A4u;
    // 0x3e71a4: 0x0  nop
    ctx->pc = 0x3e71a4u;
    // NOP
label_3e71a8:
    // 0x3e71a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e71ac: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e71acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e71b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3e71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e71b4: 0xc0951c8  jal         func_254720
    ctx->pc = 0x3E71B4u;
    SET_GPR_U32(ctx, 31, 0x3E71BCu);
    ctx->pc = 0x3E71B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71B4u;
    // 0x3e71b8: 0x3406fffe  ori         $a2, $zero, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254720u, 0x3E71B4u, 0x3E71BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71BCu;
label_3e71bc:
    // 0x3e71bc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e71c0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e71c4: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e71c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e71cc: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x3e71ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e71d0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e71d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e71d4: 0x34420034  ori         $v0, $v0, 0x34
    ctx->pc = 0x3e71d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52);
    // 0x3e71d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e71d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e71dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e71dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e71e0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3e71e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3e71e4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x3e71e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x3e71e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e71e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71ec: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e71ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e71f0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e71f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e71f4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E71F4u;
    SET_GPR_U32(ctx, 31, 0x3E71FCu);
    ctx->pc = 0x3E71F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71F4u;
    // 0x3e71f8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E71F4u, 0x3E71FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71FCu;
label_3e71fc:
    // 0x3e71fc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7200: 0xc0951d8  jal         func_254760
    ctx->pc = 0x3E7200u;
    SET_GPR_U32(ctx, 31, 0x3E7208u);
    ctx->pc = 0x3E7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7200u;
    // 0x3e7204: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x3E7200u, 0x3E7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7208u;
label_3e7208:
    // 0x3e7208: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3E7208u;
    {
        const bool branch_taken_0x3e7208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7208) {
            ctx->pc = 0x3E7270u;
            goto label_3e7270;
        }
    }
    ctx->pc = 0x3E7210u;
label_3e7210:
    // 0x3e7210: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7214: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e7214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e7218: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3e7218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e721c: 0xc0951c8  jal         func_254720
    ctx->pc = 0x3E721Cu;
    SET_GPR_U32(ctx, 31, 0x3E7224u);
    ctx->pc = 0x3E7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E721Cu;
    // 0x3e7220: 0x3406fffe  ori         $a2, $zero, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254720u, 0x3E721Cu, 0x3E7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7224u;
label_3e7224:
    // 0x3e7224: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e7224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e7228: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e7228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e722c: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3e722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3e7230: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7234: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x3e7234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e7238: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3e7238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3e723c: 0x34420035  ori         $v0, $v0, 0x35
    ctx->pc = 0x3e723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
    // 0x3e7240: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3e7240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3e7244: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3e7244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3e7248: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3e7248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3e724c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x3e724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x3e7250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e7250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7254: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3e7254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e7258: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3e7258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e725c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3E725Cu;
    SET_GPR_U32(ctx, 31, 0x3E7264u);
    ctx->pc = 0x3E7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E725Cu;
    // 0x3e7260: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3E725Cu, 0x3E7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7264u;
label_3e7264:
    // 0x3e7264: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e7264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e7268: 0xc0951d8  jal         func_254760
    ctx->pc = 0x3E7268u;
    SET_GPR_U32(ctx, 31, 0x3E7270u);
    ctx->pc = 0x3E726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7268u;
    // 0x3e726c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254760u, 0x3E7268u, 0x3E7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7270u;
label_3e7270:
    // 0x3e7270: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e7270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e7274: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e7274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e7278: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e7278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e727c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e727cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e7280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7284: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7284u;
        // 0x3e7288: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E728Cu;
}
