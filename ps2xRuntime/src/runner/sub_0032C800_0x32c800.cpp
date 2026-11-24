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

// Function: sub_0032C800
// Address: 0x32c800 - 0x32d0e8
void sub_0032C800_0x32c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C800_0x32c800");
#endif

    switch (ctx->pc) {
        case 0x32c904u: goto label_32c904;
        case 0x32c924u: goto label_32c924;
        case 0x32c934u: goto label_32c934;
        case 0x32c984u: goto label_32c984;
        case 0x32c9b8u: goto label_32c9b8;
        case 0x32c9e0u: goto label_32c9e0;
        case 0x32ca24u: goto label_32ca24;
        case 0x32ca58u: goto label_32ca58;
        case 0x32cac0u: goto label_32cac0;
        case 0x32caf4u: goto label_32caf4;
        case 0x32cb14u: goto label_32cb14;
        case 0x32cb68u: goto label_32cb68;
        case 0x32cb84u: goto label_32cb84;
        case 0x32cbd8u: goto label_32cbd8;
        case 0x32cbf4u: goto label_32cbf4;
        case 0x32cc28u: goto label_32cc28;
        case 0x32cc38u: goto label_32cc38;
        case 0x32cc48u: goto label_32cc48;
        case 0x32cc9cu: goto label_32cc9c;
        case 0x32ccb4u: goto label_32ccb4;
        case 0x32ccc4u: goto label_32ccc4;
        case 0x32cd28u: goto label_32cd28;
        case 0x32cd6cu: goto label_32cd6c;
        case 0x32cda0u: goto label_32cda0;
        case 0x32cdc4u: goto label_32cdc4;
        case 0x32cdccu: goto label_32cdcc;
        case 0x32ce10u: goto label_32ce10;
        case 0x32ce18u: goto label_32ce18;
        case 0x32ce2cu: goto label_32ce2c;
        case 0x32ce3cu: goto label_32ce3c;
        case 0x32ced4u: goto label_32ced4;
        case 0x32cf18u: goto label_32cf18;
        case 0x32cf3cu: goto label_32cf3c;
        case 0x32cf64u: goto label_32cf64;
        case 0x32cf7cu: goto label_32cf7c;
        case 0x32cf8cu: goto label_32cf8c;
        case 0x32cfacu: goto label_32cfac;
        case 0x32cfbcu: goto label_32cfbc;
        case 0x32cff4u: goto label_32cff4;
        case 0x32d000u: goto label_32d000;
        case 0x32d02cu: goto label_32d02c;
        case 0x32d040u: goto label_32d040;
        case 0x32d054u: goto label_32d054;
        case 0x32d064u: goto label_32d064;
        case 0x32d07cu: goto label_32d07c;
        case 0x32d08cu: goto label_32d08c;
        case 0x32d0c0u: goto label_32d0c0;
        case 0x32d0d0u: goto label_32d0d0;
        default: break;
    }

    ctx->pc = 0x32c800u;

    // 0x32c800: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32c804: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32c804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32c808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32c80c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32c810: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32c814: 0x246399c0  addiu       $v1, $v1, -0x6640
    ctx->pc = 0x32c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941120));
    // 0x32c818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32c81c: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x32c81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x32c820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c824: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x32c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x32c828: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x32c828u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x4E99C0u));
    // 0x32c82c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x32c82cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32c830: 0x90660010  lbu         $a2, 0x10($v1)
    ctx->pc = 0x32c830u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x4E99D0u));
    // 0x32c834: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x32c834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x32c838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32c838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c83c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x32c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x32c840: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x32c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32c844: 0xa1060010  sb          $a2, 0x10($t0)
    ctx->pc = 0x32c844u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x32c848: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x32c848u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x4E99E0u));
    // 0x32c84c: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x32c84cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x4E99F0u));
    // 0x32c850: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x32c850u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x4E9A00u));
    // 0x32c854: 0x84a50030  lh          $a1, 0x30($a1)
    ctx->pc = 0x32c854u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x4E9A10u));
    // 0x32c858: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x32c858u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x32c85c: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x32c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 7));
    // 0x32c860: 0x7d260020  sq          $a2, 0x20($t1)
    ctx->pc = 0x32c860u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 6));
    // 0x32c864: 0xa5250030  sh          $a1, 0x30($t1)
    ctx->pc = 0x32c864u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x32c868: 0x8085000e  lb          $a1, 0xE($a0)
    ctx->pc = 0x32c868u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x32c86c: 0x90870004  lbu         $a3, 0x4($a0)
    ctx->pc = 0x32c86cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c870: 0x8c28ea24  lw          $t0, -0x15DC($at)
    ctx->pc = 0x32c870u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x32c874: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32c878: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x32c878u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32c87c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x32c87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x32c880: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32c880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32c884: 0xa085000e  sb          $a1, 0xE($a0)
    ctx->pc = 0x32c884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x32c888: 0x80870001  lb          $a3, 0x1($a0)
    ctx->pc = 0x32c888u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32c88c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x32c88cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x32c890: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x32c890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x32c894: 0x10e301f6  beq         $a3, $v1, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x32C894u;
    {
        const bool branch_taken_0x32c894 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x32C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C894u;
        // 0x32c898: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c894) {
            ctx->pc = 0x32D070u;
            goto label_32d070;
        }
    }
    ctx->pc = 0x32C89Cu;
    // 0x32c89c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x32c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x32c8a0: 0x10e301bd  beq         $a3, $v1, . + 4 + (0x1BD << 2)
    ctx->pc = 0x32C8A0u;
    {
        const bool branch_taken_0x32c8a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x32C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8A0u;
        // 0x32c8a4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8a0) {
            ctx->pc = 0x32CF98u;
            goto label_32cf98;
        }
    }
    ctx->pc = 0x32C8A8u;
    // 0x32c8a8: 0x10e30167  beq         $a3, $v1, . + 4 + (0x167 << 2)
    ctx->pc = 0x32C8A8u;
    {
        const bool branch_taken_0x32c8a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x32C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8A8u;
        // 0x32c8ac: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8a8) {
            ctx->pc = 0x32CE48u;
            goto label_32ce48;
        }
    }
    ctx->pc = 0x32C8B0u;
    // 0x32c8b0: 0x10e6015b  beq         $a3, $a2, . + 4 + (0x15B << 2)
    ctx->pc = 0x32C8B0u;
    {
        const bool branch_taken_0x32c8b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x32C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8B0u;
        // 0x32c8b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8b0) {
            ctx->pc = 0x32CE20u;
            goto label_32ce20;
        }
    }
    ctx->pc = 0x32C8B8u;
    // 0x32c8b8: 0x10e300fb  beq         $a3, $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x32C8B8u;
    {
        const bool branch_taken_0x32c8b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x32C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8B8u;
        // 0x32c8bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8b8) {
            ctx->pc = 0x32CCA8u;
            goto label_32cca8;
        }
    }
    ctx->pc = 0x32C8C0u;
    // 0x32c8c0: 0x10e5001f  beq         $a3, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32C8C0u;
    {
        const bool branch_taken_0x32c8c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x32c8c0) {
            ctx->pc = 0x32C940u;
            goto label_32c940;
        }
    }
    ctx->pc = 0x32C8C8u;
    // 0x32c8c8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C8C8u;
    {
        const bool branch_taken_0x32c8c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8c8) {
            ctx->pc = 0x32C8D8u;
            goto label_32c8d8;
        }
    }
    ctx->pc = 0x32C8D0u;
    // 0x32c8d0: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x32C8D0u;
    {
        const bool branch_taken_0x32c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8d0) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32C8D8u;
label_32c8d8:
    // 0x32c8d8: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x32c8d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32c8dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32C8DCu;
    {
        const bool branch_taken_0x32c8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8DCu;
        // 0x32c8e0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8dc) {
            ctx->pc = 0x32C918u;
            goto label_32c918;
        }
    }
    ctx->pc = 0x32C8E4u;
    // 0x32c8e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32c8e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32c8ec: 0x3445000b  ori         $a1, $v0, 0xB
    ctx->pc = 0x32c8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11);
    // 0x32c8f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32c8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32c8f4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32c8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32c8f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32c8f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c8fc: 0xc09565c  jal         func_255970
    ctx->pc = 0x32C8FCu;
    SET_GPR_U32(ctx, 31, 0x32C904u);
    ctx->pc = 0x32C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8FCu;
    // 0x32c900: 0x262900a6  addiu       $t1, $s1, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32C8FCu, 0x32C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C904u;
label_32c904:
    // 0x32c904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c908: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x32c908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c90c: 0x100001f0  b           . + 4 + (0x1F0 << 2)
    ctx->pc = 0x32C90Cu;
    {
        const bool branch_taken_0x32c90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C90Cu;
        // 0x32c910: 0xa223000f  sb          $v1, 0xF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c90c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32C914u;
    // 0x32c914: 0x0  nop
    ctx->pc = 0x32c914u;
    // NOP
label_32c918:
    // 0x32c918: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32c918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32c91c: 0xc095150  jal         func_254540
    ctx->pc = 0x32C91Cu;
    SET_GPR_U32(ctx, 31, 0x32C924u);
    ctx->pc = 0x32C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C91Cu;
    // 0x32c920: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32C91Cu, 0x32C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C924u;
label_32c924:
    // 0x32c924: 0x144001ea  bnez        $v0, . + 4 + (0x1EA << 2)
    ctx->pc = 0x32C924u;
    {
        const bool branch_taken_0x32c924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C924u;
        // 0x32c928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c924) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32C92Cu;
    // 0x32c92c: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32C92Cu;
    SET_GPR_U32(ctx, 31, 0x32C934u);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32C92Cu, 0x32C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C934u;
label_32c934:
    // 0x32c934: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x32C934u;
    {
        const bool branch_taken_0x32c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c934) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32C93Cu;
    // 0x32c93c: 0x0  nop
    ctx->pc = 0x32c93cu;
    // NOP
label_32c940:
    // 0x32c940: 0x31022000  andi        $v0, $t0, 0x2000
    ctx->pc = 0x32c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x32c944: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x32C944u;
    {
        const bool branch_taken_0x32c944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c944) {
            ctx->pc = 0x32CB00u;
            goto label_32cb00;
        }
    }
    ctx->pc = 0x32C94Cu;
    // 0x32c94c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x32c94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32c950: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x32C950u;
    {
        const bool branch_taken_0x32c950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c950) {
            ctx->pc = 0x32C9C0u;
            goto label_32c9c0;
        }
    }
    ctx->pc = 0x32C958u;
    // 0x32c958: 0xa2260001  sb          $a2, 0x1($s1)
    ctx->pc = 0x32c958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x32c95c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32c960: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32c960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32c964: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32c968: 0x262900a6  addiu       $t1, $s1, 0xA6
    ctx->pc = 0x32c968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    // 0x32c96c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32c96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32c970: 0x3445001d  ori         $a1, $v0, 0x1D
    ctx->pc = 0x32c970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x32c974: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32c974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32c978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32c978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c97c: 0xc09565c  jal         func_255970
    ctx->pc = 0x32C97Cu;
    SET_GPR_U32(ctx, 31, 0x32C984u);
    ctx->pc = 0x32C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C97Cu;
    // 0x32c980: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32C97Cu, 0x32C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C984u;
label_32c984:
    // 0x32c984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c988: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c98c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32c990: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32c994: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x32c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x32c998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c99c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32c99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32c9a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32c9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c9a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32c9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c9a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32c9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c9ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32c9acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c9b0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32C9B0u;
    SET_GPR_U32(ctx, 31, 0x32C9B8u);
    ctx->pc = 0x32C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9B0u;
    // 0x32c9b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32C9B0u, 0x32C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C9B8u;
label_32c9b8:
    // 0x32c9b8: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x32C9B8u;
    {
        const bool branch_taken_0x32c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c9b8) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32C9C0u;
label_32c9c0:
    // 0x32c9c0: 0x8222000b  lb          $v0, 0xB($s1)
    ctx->pc = 0x32c9c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32c9c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32c9c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32c9cc: 0x8445007a  lh          $a1, 0x7A($v0)
    ctx->pc = 0x32c9ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x32c9d0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x32c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x32c9d4: 0x80520001  lb          $s2, 0x1($v0)
    ctx->pc = 0x32c9d4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32c9d8: 0xc0cbacc  jal         func_32EB30
    ctx->pc = 0x32C9D8u;
    SET_GPR_U32(ctx, 31, 0x32C9E0u);
    ctx->pc = 0x32C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9D8u;
    // 0x32c9dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB30u, 0x32C9D8u, 0x32C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C9E0u;
label_32c9e0:
    // 0x32c9e0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32c9e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32c9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32c9e8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32c9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32c9ec: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32C9ECu;
    {
        const bool branch_taken_0x32c9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c9ec) {
            ctx->pc = 0x32CA60u;
            goto label_32ca60;
        }
    }
    ctx->pc = 0x32C9F4u;
    // 0x32c9f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x32c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32c9f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32c9fc: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x32c9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ca00: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32ca04: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32ca08: 0x262900a6  addiu       $t1, $s1, 0xA6
    ctx->pc = 0x32ca08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    // 0x32ca0c: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x32ca0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x32ca10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32ca10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ca14: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32ca14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32ca18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32ca18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca1c: 0xc09565c  jal         func_255970
    ctx->pc = 0x32CA1Cu;
    SET_GPR_U32(ctx, 31, 0x32CA24u);
    ctx->pc = 0x32CA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA1Cu;
    // 0x32ca20: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32CA1Cu, 0x32CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA24u;
label_32ca24:
    // 0x32ca24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ca28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32ca2c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32ca30: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32ca34: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x32ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x32ca38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32ca38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca3c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32ca3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32ca40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32ca40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32ca44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32ca48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32ca4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca50: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32CA50u;
    SET_GPR_U32(ctx, 31, 0x32CA58u);
    ctx->pc = 0x32CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA50u;
    // 0x32ca54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32CA50u, 0x32CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA58u;
label_32ca58:
    // 0x32ca58: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x32CA58u;
    {
        const bool branch_taken_0x32ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ca58) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CA60u;
label_32ca60:
    // 0x32ca60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ca64: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x32ca64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ca68: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32ca6c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x32ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32ca70: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32ca74: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x32ca74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ca78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32ca78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ca7c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32ca7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32ca80: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32ca84: 0x34450012  ori         $a1, $v0, 0x12
    ctx->pc = 0x32ca84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x32ca88: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32ca88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32ca8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32ca8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca90: 0x262900a6  addiu       $t1, $s1, 0xA6
    ctx->pc = 0x32ca90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    // 0x32ca94: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x32ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32ca98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x32ca98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ca9c: 0x8222000b  lb          $v0, 0xB($s1)
    ctx->pc = 0x32ca9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32caa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32caa4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32caa8: 0x8442007a  lh          $v0, 0x7A($v0)
    ctx->pc = 0x32caa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x32caac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x32caacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32cab0: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x32cab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x32cab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32cab8: 0xc09565c  jal         func_255970
    ctx->pc = 0x32CAB8u;
    SET_GPR_U32(ctx, 31, 0x32CAC0u);
    ctx->pc = 0x32CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CAB8u;
    // 0x32cabc: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32CAB8u, 0x32CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CAC0u;
label_32cac0:
    // 0x32cac0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32cac4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32cac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32cac8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32cacc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32caccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32cad0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x32cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x32cad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32cad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cad8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32cad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32cadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32cae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cae4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32cae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cae8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32cae8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32caec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32CAECu;
    SET_GPR_U32(ctx, 31, 0x32CAF4u);
    ctx->pc = 0x32CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CAECu;
    // 0x32caf0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32CAECu, 0x32CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CAF4u;
label_32caf4:
    // 0x32caf4: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x32CAF4u;
    {
        const bool branch_taken_0x32caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32caf4) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CAFCu;
    // 0x32cafc: 0x0  nop
    ctx->pc = 0x32cafcu;
    // NOP
label_32cb00:
    // 0x32cb00: 0x31020400  andi        $v0, $t0, 0x400
    ctx->pc = 0x32cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
    // 0x32cb04: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32CB04u;
    {
        const bool branch_taken_0x32cb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cb04) {
            ctx->pc = 0x32CB70u;
            goto label_32cb70;
        }
    }
    ctx->pc = 0x32CB0Cu;
    // 0x32cb0c: 0xc0cb5f8  jal         func_32D7E0
    ctx->pc = 0x32CB0Cu;
    SET_GPR_U32(ctx, 31, 0x32CB14u);
    ctx->pc = 0x32CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB0Cu;
    // 0x32cb10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7E0u, 0x32CB0Cu, 0x32CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB14u;
label_32cb14:
    // 0x32cb14: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32cb18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32cb1c: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32cb20: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32cb24: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32cb28: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32cb2c: 0x8223000b  lb          $v1, 0xB($s1)
    ctx->pc = 0x32cb2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32cb30: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32cb34: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32cb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32cb38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb3c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32cb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32cb40: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32cb40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32cb44: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32cb44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32cb48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32cb48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cb4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cb50: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x32cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x32cb54: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32cb54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32cb58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32cb5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cb60: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32CB60u;
    SET_GPR_U32(ctx, 31, 0x32CB68u);
    ctx->pc = 0x32CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CB60u;
    // 0x32cb64: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32CB60u, 0x32CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB68u;
label_32cb68:
    // 0x32cb68: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x32CB68u;
    {
        const bool branch_taken_0x32cb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cb68) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CB70u;
label_32cb70:
    // 0x32cb70: 0x31020900  andi        $v0, $t0, 0x900
    ctx->pc = 0x32cb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2304);
    // 0x32cb74: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32CB74u;
    {
        const bool branch_taken_0x32cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cb74) {
            ctx->pc = 0x32CBE0u;
            goto label_32cbe0;
        }
    }
    ctx->pc = 0x32CB7Cu;
    // 0x32cb7c: 0xc0cb5f8  jal         func_32D7E0
    ctx->pc = 0x32CB7Cu;
    SET_GPR_U32(ctx, 31, 0x32CB84u);
    ctx->pc = 0x32D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7E0u, 0x32CB7Cu, 0x32CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CB84u;
label_32cb84:
    // 0x32cb84: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32cb88: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32cb8c: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32cb90: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32cb94: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32cb98: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32cb9c: 0x8223000b  lb          $v1, 0xB($s1)
    ctx->pc = 0x32cb9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32cba0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32cba4: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32cba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32cba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32cbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32cbb0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32cbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32cbb4: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32cbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32cbb8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32cbb8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cbbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cbc0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x32cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x32cbc4: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32cbc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32cbc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32cbcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cbd0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32CBD0u;
    SET_GPR_U32(ctx, 31, 0x32CBD8u);
    ctx->pc = 0x32CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CBD0u;
    // 0x32cbd4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32CBD0u, 0x32CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBD8u;
label_32cbd8:
    // 0x32cbd8: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x32CBD8u;
    {
        const bool branch_taken_0x32cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cbd8) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CBE0u;
label_32cbe0:
    // 0x32cbe0: 0x31024000  andi        $v0, $t0, 0x4000
    ctx->pc = 0x32cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x32cbe4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32CBE4u;
    {
        const bool branch_taken_0x32cbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cbe4) {
            ctx->pc = 0x32CC30u;
            goto label_32cc30;
        }
    }
    ctx->pc = 0x32CBECu;
    // 0x32cbec: 0xc0cb5ec  jal         func_32D7B0
    ctx->pc = 0x32CBECu;
    SET_GPR_U32(ctx, 31, 0x32CBF4u);
    ctx->pc = 0x32D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7B0u, 0x32CBECu, 0x32CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CBF4u;
label_32cbf4:
    // 0x32cbf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32cbf8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32cbfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32cbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32cc00: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32cc04: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32cc08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32cc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc0c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32cc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32cc10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cc10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32cc14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32cc18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32cc1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc20: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32CC20u;
    SET_GPR_U32(ctx, 31, 0x32CC28u);
    ctx->pc = 0x32CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC20u;
    // 0x32cc24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32CC20u, 0x32CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC28u;
label_32cc28:
    // 0x32cc28: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x32CC28u;
    {
        const bool branch_taken_0x32cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc28) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CC30u;
label_32cc30:
    // 0x32cc30: 0xc0cb704  jal         func_32DC10
    ctx->pc = 0x32CC30u;
    SET_GPR_U32(ctx, 31, 0x32CC38u);
    ctx->pc = 0x32DC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC10u, 0x32CC30u, 0x32CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC38u;
label_32cc38:
    // 0x32cc38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CC38u;
    {
        const bool branch_taken_0x32cc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CC38u;
        // 0x32cc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cc38) {
            ctx->pc = 0x32CC48u;
            goto label_32cc48;
        }
    }
    ctx->pc = 0x32CC40u;
    // 0x32cc40: 0xc0cb738  jal         func_32DCE0
    ctx->pc = 0x32CC40u;
    SET_GPR_U32(ctx, 31, 0x32CC48u);
    ctx->pc = 0x32DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCE0u, 0x32CC40u, 0x32CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC48u;
label_32cc48:
    // 0x32cc48: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32cc4c: 0x2442cd70  addiu       $v0, $v0, -0x3290
    ctx->pc = 0x32cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x32cc50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32cc54: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32cc58: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32cc5c: 0x8223000b  lb          $v1, 0xB($s1)
    ctx->pc = 0x32cc5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32cc60: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32cc64: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32cc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32cc68: 0x24060166  addiu       $a2, $zero, 0x166
    ctx->pc = 0x32cc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x32cc6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc70: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32cc70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32cc74: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32cc74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32cc78: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32cc78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32cc7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32cc7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cc84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x32cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x32cc88: 0x8463007c  lh          $v1, 0x7C($v1)
    ctx->pc = 0x32cc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x32cc8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32cc90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32cc94: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32CC94u;
    SET_GPR_U32(ctx, 31, 0x32CC9Cu);
    ctx->pc = 0x32CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC94u;
    // 0x32cc98: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32CC94u, 0x32CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC9Cu;
label_32cc9c:
    // 0x32cc9c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x32CC9Cu;
    {
        const bool branch_taken_0x32cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cc9c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CCA4u;
    // 0x32cca4: 0x0  nop
    ctx->pc = 0x32cca4u;
    // NOP
label_32cca8:
    // 0x32cca8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32ccac: 0xc095150  jal         func_254540
    ctx->pc = 0x32CCACu;
    SET_GPR_U32(ctx, 31, 0x32CCB4u);
    ctx->pc = 0x32CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCACu;
    // 0x32ccb0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32CCACu, 0x32CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCB4u;
label_32ccb4:
    // 0x32ccb4: 0x14400106  bnez        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x32CCB4u;
    {
        const bool branch_taken_0x32ccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCB4u;
        // 0x32ccb8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ccb4) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CCBCu;
    // 0x32ccbc: 0xc095154  jal         func_254550
    ctx->pc = 0x32CCBCu;
    SET_GPR_U32(ctx, 31, 0x32CCC4u);
    ctx->pc = 0x32CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCBCu;
    // 0x32ccc0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x32CCBCu, 0x32CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCC4u;
label_32ccc4:
    // 0x32ccc4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32ccc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32ccc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32cccc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32ccccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32ccd0: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x32CCD0u;
    {
        const bool branch_taken_0x32ccd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCD0u;
        // 0x32ccd4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ccd0) {
            ctx->pc = 0x32CDD8u;
            goto label_32cdd8;
        }
    }
    ctx->pc = 0x32CCD8u;
    // 0x32ccd8: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x32CCD8u;
    {
        const bool branch_taken_0x32ccd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32ccd8) {
            ctx->pc = 0x32CDD8u;
            goto label_32cdd8;
        }
    }
    ctx->pc = 0x32CCE0u;
    // 0x32cce0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CCE0u;
    {
        const bool branch_taken_0x32cce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cce0) {
            ctx->pc = 0x32CCF0u;
            goto label_32ccf0;
        }
    }
    ctx->pc = 0x32CCE8u;
    // 0x32cce8: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x32CCE8u;
    {
        const bool branch_taken_0x32cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cce8) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CCF0u;
label_32ccf0:
    // 0x32ccf0: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x32ccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ccf4: 0x8223000b  lb          $v1, 0xB($s1)
    ctx->pc = 0x32ccf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32ccf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32ccfc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x32ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x32cd00: 0x8463007a  lh          $v1, 0x7A($v1)
    ctx->pc = 0x32cd00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x32cd04: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x32cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32cd08: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x32cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x32cd0c: 0x80840001  lb          $a0, 0x1($a0)
    ctx->pc = 0x32cd0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32cd10: 0x80630090  lb          $v1, 0x90($v1)
    ctx->pc = 0x32cd10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x32cd14: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x32cd14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32cd18: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x32CD18u;
    {
        const bool branch_taken_0x32cd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD18u;
        // 0x32cd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd18) {
            ctx->pc = 0x32CDB0u;
            goto label_32cdb0;
        }
    }
    ctx->pc = 0x32CD20u;
    // 0x32cd20: 0xc0cbae0  jal         func_32EB80
    ctx->pc = 0x32CD20u;
    SET_GPR_U32(ctx, 31, 0x32CD28u);
    ctx->pc = 0x32EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB80u, 0x32CD20u, 0x32CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD28u;
label_32cd28:
    // 0x32cd28: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x32cd28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x32cd2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32cd30: 0x82230010  lb          $v1, 0x10($s1)
    ctx->pc = 0x32cd30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32cd34: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x32CD34u;
    {
        const bool branch_taken_0x32cd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x32CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CD34u;
        // 0x32cd38: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cd34) {
            ctx->pc = 0x32CDA8u;
            goto label_32cda8;
        }
    }
    ctx->pc = 0x32CD3Cu;
    // 0x32cd3c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x32cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32cd40: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x32cd40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x32cd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd48: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x32cd48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32cd4c: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x32cd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x32cd50: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x32cd50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x32cd54: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32cd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32cd58: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x32cd58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x32cd5c: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x32cd5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32cd60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32cd64: 0xc0cb954  jal         func_32E550
    ctx->pc = 0x32CD64u;
    SET_GPR_U32(ctx, 31, 0x32CD6Cu);
    ctx->pc = 0x32CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CD64u;
    // 0x32cd68: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E550u, 0x32CD64u, 0x32CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD6Cu;
label_32cd6c:
    // 0x32cd6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32cd70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32cd74: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32cd78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32cd7c: 0x3c020b00  lui         $v0, 0xB00
    ctx->pc = 0x32cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2816 << 16));
    // 0x32cd80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32cd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd84: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32cd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32cd88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32cd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32cd8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32cd90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32cd94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cd98: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32CD98u;
    SET_GPR_U32(ctx, 31, 0x32CDA0u);
    ctx->pc = 0x32CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CD98u;
    // 0x32cd9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32CD98u, 0x32CDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDA0u;
label_32cda0:
    // 0x32cda0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32CDA0u;
    {
        const bool branch_taken_0x32cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cda0) {
            ctx->pc = 0x32CDB0u;
            goto label_32cdb0;
        }
    }
    ctx->pc = 0x32CDA8u;
label_32cda8:
    // 0x32cda8: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x32cda8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x32cdac: 0x0  nop
    ctx->pc = 0x32cdacu;
    // NOP
label_32cdb0:
    // 0x32cdb0: 0x82230010  lb          $v1, 0x10($s1)
    ctx->pc = 0x32cdb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32cdb4: 0x146000c6  bnez        $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x32CDB4u;
    {
        const bool branch_taken_0x32cdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CDB4u;
        // 0x32cdb8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cdb4) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CDBCu;
    // 0x32cdbc: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x32CDBCu;
    SET_GPR_U32(ctx, 31, 0x32CDC4u);
    ctx->pc = 0x32CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDBCu;
    // 0x32cdc0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x32CDBCu, 0x32CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDC4u;
label_32cdc4:
    // 0x32cdc4: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32CDC4u;
    SET_GPR_U32(ctx, 31, 0x32CDCCu);
    ctx->pc = 0x32CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CDC4u;
    // 0x32cdc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32CDC4u, 0x32CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CDCCu;
label_32cdcc:
    // 0x32cdcc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x32CDCCu;
    {
        const bool branch_taken_0x32cdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cdcc) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CDD4u;
    // 0x32cdd4: 0x0  nop
    ctx->pc = 0x32cdd4u;
    // NOP
label_32cdd8:
    // 0x32cdd8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x32cdd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32cddc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32cde0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32cde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32cde4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32cde8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x32cde8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32cdec: 0x8222000b  lb          $v0, 0xB($s1)
    ctx->pc = 0x32cdecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x32cdf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32cdf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32cdf8: 0x8442007a  lh          $v0, 0x7A($v0)
    ctx->pc = 0x32cdf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x32cdfc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x32cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32ce00: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x32ce00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x32ce04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32ce08: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x32CE08u;
    SET_GPR_U32(ctx, 31, 0x32CE10u);
    ctx->pc = 0x32CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE08u;
    // 0x32ce0c: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x32CE08u, 0x32CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE10u;
label_32ce10:
    // 0x32ce10: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32CE10u;
    SET_GPR_U32(ctx, 31, 0x32CE18u);
    ctx->pc = 0x32CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE10u;
    // 0x32ce14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32CE10u, 0x32CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE18u;
label_32ce18:
    // 0x32ce18: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x32CE18u;
    {
        const bool branch_taken_0x32ce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce18) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CE20u;
label_32ce20:
    // 0x32ce20: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32ce24: 0xc095150  jal         func_254540
    ctx->pc = 0x32CE24u;
    SET_GPR_U32(ctx, 31, 0x32CE2Cu);
    ctx->pc = 0x32CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CE24u;
    // 0x32ce28: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32CE24u, 0x32CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE2Cu;
label_32ce2c:
    // 0x32ce2c: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x32CE2Cu;
    {
        const bool branch_taken_0x32ce2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE2Cu;
        // 0x32ce30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce2c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CE34u;
    // 0x32ce34: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32CE34u;
    SET_GPR_U32(ctx, 31, 0x32CE3Cu);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32CE34u, 0x32CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CE3Cu;
label_32ce3c:
    // 0x32ce3c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x32CE3Cu;
    {
        const bool branch_taken_0x32ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce3c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CE44u;
    // 0x32ce44: 0x0  nop
    ctx->pc = 0x32ce44u;
    // NOP
label_32ce48:
    // 0x32ce48: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x32ce48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32ce4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ce50: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x32CE50u;
    {
        const bool branch_taken_0x32ce50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CE50u;
        // 0x32ce54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ce50) {
            ctx->pc = 0x32CF70u;
            goto label_32cf70;
        }
    }
    ctx->pc = 0x32CE58u;
    // 0x32ce58: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x32CE58u;
    {
        const bool branch_taken_0x32ce58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32ce58) {
            ctx->pc = 0x32CF30u;
            goto label_32cf30;
        }
    }
    ctx->pc = 0x32CE60u;
    // 0x32ce60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CE60u;
    {
        const bool branch_taken_0x32ce60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce60) {
            ctx->pc = 0x32CE70u;
            goto label_32ce70;
        }
    }
    ctx->pc = 0x32CE68u;
    // 0x32ce68: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x32CE68u;
    {
        const bool branch_taken_0x32ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce68) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CE70u;
label_32ce70:
    // 0x32ce70: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x32ce70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x32ce74: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x32ce74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32ce78: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x32CE78u;
    {
        const bool branch_taken_0x32ce78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ce78) {
            ctx->pc = 0x32CF20u;
            goto label_32cf20;
        }
    }
    ctx->pc = 0x32CE80u;
    // 0x32ce80: 0xa2200011  sb          $zero, 0x11($s1)
    ctx->pc = 0x32ce80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ce84: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32ce88: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x32ce88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x32ce8c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32ce90: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32ce94: 0x34450011  ori         $a1, $v0, 0x11
    ctx->pc = 0x32ce94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x32ce98: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32ce98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32ce9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32ce9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cea0: 0x262900a6  addiu       $t1, $s1, 0xA6
    ctx->pc = 0x32cea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    // 0x32cea4: 0x306300df  andi        $v1, $v1, 0xDF
    ctx->pc = 0x32cea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)223);
    // 0x32cea8: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x32cea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ceac: 0x82230010  lb          $v1, 0x10($s1)
    ctx->pc = 0x32ceacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ceb0: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x32ceb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32ceb4: 0x35040  sll         $t2, $v1, 1
    ctx->pc = 0x32ceb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32ceb8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x32ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x32cebc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32cec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cec4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x32cec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x32cec8: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x32cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x32cecc: 0xc09565c  jal         func_255970
    ctx->pc = 0x32CECCu;
    SET_GPR_U32(ctx, 31, 0x32CED4u);
    ctx->pc = 0x32CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CECCu;
    // 0x32ced0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32CECCu, 0x32CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CED4u;
label_32ced4:
    // 0x32ced4: 0x82220010  lb          $v0, 0x10($s1)
    ctx->pc = 0x32ced4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32ced8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x32ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32cedc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CEDCu;
    {
        const bool branch_taken_0x32cedc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x32CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CEDCu;
        // 0x32cee0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cedc) {
            ctx->pc = 0x32CEECu;
            goto label_32ceec;
        }
    }
    ctx->pc = 0x32CEE4u;
    // 0x32cee4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x32cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32cee8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x32cee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_32ceec:
    // 0x32ceec: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x32ceecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32cef0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x32cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32cef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32cef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cef8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32cefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32cf00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32cf04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x32cf08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x32cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32cf0c: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x32cf0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x32cf10: 0xc0cb5ec  jal         func_32D7B0
    ctx->pc = 0x32CF10u;
    SET_GPR_U32(ctx, 31, 0x32CF18u);
    ctx->pc = 0x32CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF10u;
    // 0x32cf14: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7B0u, 0x32CF10u, 0x32CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF18u;
label_32cf18:
    // 0x32cf18: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x32CF18u;
    {
        const bool branch_taken_0x32cf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cf18) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CF20u;
label_32cf20:
    // 0x32cf20: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x32cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x32cf24: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x32CF24u;
    {
        const bool branch_taken_0x32cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF24u;
        // 0x32cf28: 0xa2230011  sb          $v1, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf24) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CF2Cu;
    // 0x32cf2c: 0x0  nop
    ctx->pc = 0x32cf2cu;
    // NOP
label_32cf30:
    // 0x32cf30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32cf34: 0xc095150  jal         func_254540
    ctx->pc = 0x32CF34u;
    SET_GPR_U32(ctx, 31, 0x32CF3Cu);
    ctx->pc = 0x32CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF34u;
    // 0x32cf38: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32CF34u, 0x32CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF3Cu;
label_32cf3c:
    // 0x32cf3c: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x32CF3Cu;
    {
        const bool branch_taken_0x32cf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF3Cu;
        // 0x32cf40: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf3c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CF44u;
    // 0x32cf44: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32cf48: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32cf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32cf4c: 0x3445001f  ori         $a1, $v0, 0x1F
    ctx->pc = 0x32cf4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x32cf50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32cf54: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32cf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32cf58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32cf58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf5c: 0xc09565c  jal         func_255970
    ctx->pc = 0x32CF5Cu;
    SET_GPR_U32(ctx, 31, 0x32CF64u);
    ctx->pc = 0x32CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF5Cu;
    // 0x32cf60: 0x262900a6  addiu       $t1, $s1, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32CF5Cu, 0x32CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF64u;
label_32cf64:
    // 0x32cf64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32cf68: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x32CF68u;
    {
        const bool branch_taken_0x32cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF68u;
        // 0x32cf6c: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf68) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CF70u;
label_32cf70:
    // 0x32cf70: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32cf74: 0xc095150  jal         func_254540
    ctx->pc = 0x32CF74u;
    SET_GPR_U32(ctx, 31, 0x32CF7Cu);
    ctx->pc = 0x32CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF74u;
    // 0x32cf78: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32CF74u, 0x32CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF7Cu;
label_32cf7c:
    // 0x32cf7c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x32CF7Cu;
    {
        const bool branch_taken_0x32cf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF7Cu;
        // 0x32cf80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf7c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CF84u;
    // 0x32cf84: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32CF84u;
    SET_GPR_U32(ctx, 31, 0x32CF8Cu);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32CF84u, 0x32CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF8Cu;
label_32cf8c:
    // 0x32cf8c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x32CF8Cu;
    {
        const bool branch_taken_0x32cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cf8c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CF94u;
    // 0x32cf94: 0x0  nop
    ctx->pc = 0x32cf94u;
    // NOP
label_32cf98:
    // 0x32cf98: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x32cf98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32cf9c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x32CF9Cu;
    {
        const bool branch_taken_0x32cf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF9Cu;
        // 0x32cfa0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cf9c) {
            ctx->pc = 0x32D048u;
            goto label_32d048;
        }
    }
    ctx->pc = 0x32CFA4u;
    // 0x32cfa4: 0xc095150  jal         func_254540
    ctx->pc = 0x32CFA4u;
    SET_GPR_U32(ctx, 31, 0x32CFACu);
    ctx->pc = 0x32CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFA4u;
    // 0x32cfa8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32CFA4u, 0x32CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFACu;
label_32cfac:
    // 0x32cfac: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x32CFACu;
    {
        const bool branch_taken_0x32cfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFACu;
        // 0x32cfb0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cfac) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CFB4u;
    // 0x32cfb4: 0xc095154  jal         func_254550
    ctx->pc = 0x32CFB4u;
    SET_GPR_U32(ctx, 31, 0x32CFBCu);
    ctx->pc = 0x32CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFB4u;
    // 0x32cfb8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x32CFB4u, 0x32CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFBCu;
label_32cfbc:
    // 0x32cfbc: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32cfbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32cfc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32cfc4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32cfc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32cfc8: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x32CFC8u;
    {
        const bool branch_taken_0x32cfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFC8u;
        // 0x32cfcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cfc8) {
            ctx->pc = 0x32D038u;
            goto label_32d038;
        }
    }
    ctx->pc = 0x32CFD0u;
    // 0x32cfd0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x32CFD0u;
    {
        const bool branch_taken_0x32cfd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32cfd0) {
            ctx->pc = 0x32D038u;
            goto label_32d038;
        }
    }
    ctx->pc = 0x32CFD8u;
    // 0x32cfd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32CFD8u;
    {
        const bool branch_taken_0x32cfd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cfd8) {
            ctx->pc = 0x32CFE8u;
            goto label_32cfe8;
        }
    }
    ctx->pc = 0x32CFE0u;
    // 0x32cfe0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x32CFE0u;
    {
        const bool branch_taken_0x32cfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cfe0) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32CFE8u;
label_32cfe8:
    // 0x32cfe8: 0x92250004  lbu         $a1, 0x4($s1)
    ctx->pc = 0x32cfe8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32cfec: 0xc0cb65c  jal         func_32D970
    ctx->pc = 0x32CFECu;
    SET_GPR_U32(ctx, 31, 0x32CFF4u);
    ctx->pc = 0x32CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFECu;
    // 0x32cff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D970u, 0x32CFECu, 0x32CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFF4u;
label_32cff4:
    // 0x32cff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32cff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cff8: 0xc0cb954  jal         func_32E550
    ctx->pc = 0x32CFF8u;
    SET_GPR_U32(ctx, 31, 0x32D000u);
    ctx->pc = 0x32CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFF8u;
    // 0x32cffc: 0xa220000b  sb          $zero, 0xB($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E550u, 0x32CFF8u, 0x32D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D000u;
label_32d000:
    // 0x32d000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d004: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d008: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x32d008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d00c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32d010: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32d014: 0x262900a6  addiu       $t1, $s1, 0xA6
    ctx->pc = 0x32d014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 166));
    // 0x32d018: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32d018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d01c: 0x34450014  ori         $a1, $v0, 0x14
    ctx->pc = 0x32d01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x32d020: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x32d020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x32d024: 0xc09565c  jal         func_255970
    ctx->pc = 0x32D024u;
    SET_GPR_U32(ctx, 31, 0x32D02Cu);
    ctx->pc = 0x32D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D024u;
    // 0x32d028: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x32D024u, 0x32D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D02Cu;
label_32d02c:
    // 0x32d02c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x32D02Cu;
    {
        const bool branch_taken_0x32d02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d02c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D034u;
    // 0x32d034: 0x0  nop
    ctx->pc = 0x32d034u;
    // NOP
label_32d038:
    // 0x32d038: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32D038u;
    SET_GPR_U32(ctx, 31, 0x32D040u);
    ctx->pc = 0x32D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D038u;
    // 0x32d03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32D038u, 0x32D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D040u;
label_32d040:
    // 0x32d040: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x32D040u;
    {
        const bool branch_taken_0x32d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d040) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D048u;
label_32d048:
    // 0x32d048: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d04c: 0xc095150  jal         func_254540
    ctx->pc = 0x32D04Cu;
    SET_GPR_U32(ctx, 31, 0x32D054u);
    ctx->pc = 0x32D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D04Cu;
    // 0x32d050: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32D04Cu, 0x32D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D054u;
label_32d054:
    // 0x32d054: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32D054u;
    {
        const bool branch_taken_0x32d054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D054u;
        // 0x32d058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d054) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D05Cu;
    // 0x32d05c: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32D05Cu;
    SET_GPR_U32(ctx, 31, 0x32D064u);
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32D05Cu, 0x32D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D064u;
label_32d064:
    // 0x32d064: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32D064u;
    {
        const bool branch_taken_0x32d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d064) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D06Cu;
    // 0x32d06c: 0x0  nop
    ctx->pc = 0x32d06cu;
    // NOP
label_32d070:
    // 0x32d070: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32d070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32d074: 0xc095150  jal         func_254540
    ctx->pc = 0x32D074u;
    SET_GPR_U32(ctx, 31, 0x32D07Cu);
    ctx->pc = 0x32D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D074u;
    // 0x32d078: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32D074u, 0x32D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D07Cu;
label_32d07c:
    // 0x32d07c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32D07Cu;
    {
        const bool branch_taken_0x32d07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D07Cu;
        // 0x32d080: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d07c) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D084u;
    // 0x32d084: 0xc095154  jal         func_254550
    ctx->pc = 0x32D084u;
    SET_GPR_U32(ctx, 31, 0x32D08Cu);
    ctx->pc = 0x32D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D084u;
    // 0x32d088: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x32D084u, 0x32D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D08Cu;
label_32d08c:
    // 0x32d08c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x32d08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d090: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d094: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x32d094u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x32d098: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32D098u;
    {
        const bool branch_taken_0x32d098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D098u;
        // 0x32d09c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d098) {
            ctx->pc = 0x32D0C8u;
            goto label_32d0c8;
        }
    }
    ctx->pc = 0x32D0A0u;
    // 0x32d0a0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32D0A0u;
    {
        const bool branch_taken_0x32d0a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d0a0) {
            ctx->pc = 0x32D0C8u;
            goto label_32d0c8;
        }
    }
    ctx->pc = 0x32D0A8u;
    // 0x32d0a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D0A8u;
    {
        const bool branch_taken_0x32d0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0a8) {
            ctx->pc = 0x32D0B8u;
            goto label_32d0b8;
        }
    }
    ctx->pc = 0x32D0B0u;
    // 0x32d0b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32D0B0u;
    {
        const bool branch_taken_0x32d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0b0) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D0B8u;
label_32d0b8:
    // 0x32d0b8: 0xc0cb5ec  jal         func_32D7B0
    ctx->pc = 0x32D0B8u;
    SET_GPR_U32(ctx, 31, 0x32D0C0u);
    ctx->pc = 0x32D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0B8u;
    // 0x32d0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D7B0u, 0x32D0B8u, 0x32D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D0C0u;
label_32d0c0:
    // 0x32d0c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32D0C0u;
    {
        const bool branch_taken_0x32d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0c0) {
            ctx->pc = 0x32D0D0u;
            goto label_32d0d0;
        }
    }
    ctx->pc = 0x32D0C8u;
label_32d0c8:
    // 0x32d0c8: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x32D0C8u;
    SET_GPR_U32(ctx, 31, 0x32D0D0u);
    ctx->pc = 0x32D0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D0C8u;
    // 0x32d0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x32D0C8u, 0x32D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D0D0u;
label_32d0d0:
    // 0x32d0d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d0d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32d0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d0d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32d0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d0dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32d0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0E0u;
        // 0x32d0e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D0E8u;
}
