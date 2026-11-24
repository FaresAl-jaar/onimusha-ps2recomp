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

// Function: sub_003C9950
// Address: 0x3c9950 - 0x3c9a8c
void sub_003C9950_0x3c9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9950_0x3c9950");
#endif

    switch (ctx->pc) {
        case 0x3c9950u: goto label_3c9950;
        case 0x3c9954u: goto label_3c9954;
        case 0x3c9958u: goto label_3c9958;
        case 0x3c995cu: goto label_3c995c;
        case 0x3c9960u: goto label_3c9960;
        case 0x3c9964u: goto label_3c9964;
        case 0x3c9968u: goto label_3c9968;
        case 0x3c996cu: goto label_3c996c;
        case 0x3c9970u: goto label_3c9970;
        case 0x3c9974u: goto label_3c9974;
        case 0x3c9978u: goto label_3c9978;
        case 0x3c997cu: goto label_3c997c;
        case 0x3c9980u: goto label_3c9980;
        case 0x3c9984u: goto label_3c9984;
        case 0x3c9988u: goto label_3c9988;
        case 0x3c998cu: goto label_3c998c;
        case 0x3c9990u: goto label_3c9990;
        case 0x3c9994u: goto label_3c9994;
        case 0x3c9998u: goto label_3c9998;
        case 0x3c999cu: goto label_3c999c;
        case 0x3c99a0u: goto label_3c99a0;
        case 0x3c99a4u: goto label_3c99a4;
        case 0x3c99a8u: goto label_3c99a8;
        case 0x3c99acu: goto label_3c99ac;
        case 0x3c99b0u: goto label_3c99b0;
        case 0x3c99b4u: goto label_3c99b4;
        case 0x3c99b8u: goto label_3c99b8;
        case 0x3c99bcu: goto label_3c99bc;
        case 0x3c99c0u: goto label_3c99c0;
        case 0x3c99c4u: goto label_3c99c4;
        case 0x3c99c8u: goto label_3c99c8;
        case 0x3c99ccu: goto label_3c99cc;
        case 0x3c99d0u: goto label_3c99d0;
        case 0x3c99d4u: goto label_3c99d4;
        case 0x3c99d8u: goto label_3c99d8;
        case 0x3c99dcu: goto label_3c99dc;
        case 0x3c99e0u: goto label_3c99e0;
        case 0x3c99e4u: goto label_3c99e4;
        case 0x3c99e8u: goto label_3c99e8;
        case 0x3c99ecu: goto label_3c99ec;
        case 0x3c99f0u: goto label_3c99f0;
        case 0x3c99f4u: goto label_3c99f4;
        case 0x3c99f8u: goto label_3c99f8;
        case 0x3c99fcu: goto label_3c99fc;
        case 0x3c9a00u: goto label_3c9a00;
        case 0x3c9a04u: goto label_3c9a04;
        case 0x3c9a08u: goto label_3c9a08;
        case 0x3c9a0cu: goto label_3c9a0c;
        case 0x3c9a10u: goto label_3c9a10;
        case 0x3c9a14u: goto label_3c9a14;
        case 0x3c9a18u: goto label_3c9a18;
        case 0x3c9a1cu: goto label_3c9a1c;
        case 0x3c9a20u: goto label_3c9a20;
        case 0x3c9a24u: goto label_3c9a24;
        case 0x3c9a28u: goto label_3c9a28;
        case 0x3c9a2cu: goto label_3c9a2c;
        case 0x3c9a30u: goto label_3c9a30;
        case 0x3c9a34u: goto label_3c9a34;
        case 0x3c9a38u: goto label_3c9a38;
        case 0x3c9a3cu: goto label_3c9a3c;
        case 0x3c9a40u: goto label_3c9a40;
        case 0x3c9a44u: goto label_3c9a44;
        case 0x3c9a48u: goto label_3c9a48;
        case 0x3c9a4cu: goto label_3c9a4c;
        case 0x3c9a50u: goto label_3c9a50;
        case 0x3c9a54u: goto label_3c9a54;
        case 0x3c9a58u: goto label_3c9a58;
        case 0x3c9a5cu: goto label_3c9a5c;
        case 0x3c9a60u: goto label_3c9a60;
        case 0x3c9a64u: goto label_3c9a64;
        case 0x3c9a68u: goto label_3c9a68;
        case 0x3c9a6cu: goto label_3c9a6c;
        case 0x3c9a70u: goto label_3c9a70;
        case 0x3c9a74u: goto label_3c9a74;
        case 0x3c9a78u: goto label_3c9a78;
        case 0x3c9a7cu: goto label_3c9a7c;
        case 0x3c9a80u: goto label_3c9a80;
        case 0x3c9a84u: goto label_3c9a84;
        case 0x3c9a88u: goto label_3c9a88;
        default: break;
    }

    ctx->pc = 0x3c9950u;

label_3c9950:
    // 0x3c9950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c9954:
    // 0x3c9954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c9954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9958:
    // 0x3c9958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c995c:
    // 0x3c995c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c995cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c9960:
    // 0x3c9960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c9960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c9964:
    // 0x3c9964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c9964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c9968:
    // 0x3c9968: 0xc09ffb0  jal         func_27FEC0
label_3c996c:
    if (ctx->pc == 0x3C996Cu) {
        ctx->pc = 0x3C996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9968u;
        // 0x3c996c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9970u;
        goto label_3c9970;
    }
    ctx->pc = 0x3C9968u;
    SET_GPR_U32(ctx, 31, 0x3C9970u);
    ctx->pc = 0x3C996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9968u;
    // 0x3c996c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x3C9968u, 0x3C9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9970u;
label_3c9970:
    // 0x3c9970: 0x92250821  lbu         $a1, 0x821($s1)
    ctx->pc = 0x3c9970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
label_3c9974:
    // 0x3c9974: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c9974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c9978:
    // 0x3c9978: 0x10a4003b  beq         $a1, $a0, . + 4 + (0x3B << 2)
label_3c997c:
    if (ctx->pc == 0x3C997Cu) {
        ctx->pc = 0x3C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9978u;
        // 0x3c997c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9980u;
        goto label_3c9980;
    }
    ctx->pc = 0x3C9978u;
    {
        const bool branch_taken_0x3c9978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9978u;
        // 0x3c997c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9978) {
            ctx->pc = 0x3C9A68u;
            goto label_3c9a68;
        }
    }
    ctx->pc = 0x3C9980u;
label_3c9980:
    // 0x3c9980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c9984:
    // 0x3c9984: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_3c9988:
    if (ctx->pc == 0x3C9988u) {
        ctx->pc = 0x3C998Cu;
        goto label_3c998c;
    }
    ctx->pc = 0x3C9984u;
    {
        const bool branch_taken_0x3c9984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9984) {
            ctx->pc = 0x3C9A58u;
            goto label_3c9a58;
        }
    }
    ctx->pc = 0x3C998Cu;
label_3c998c:
    // 0x3c998c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3c9990:
    if (ctx->pc == 0x3C9990u) {
        ctx->pc = 0x3C9994u;
        goto label_3c9994;
    }
    ctx->pc = 0x3C998Cu;
    {
        const bool branch_taken_0x3c998c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c998c) {
            ctx->pc = 0x3C99A0u;
            goto label_3c99a0;
        }
    }
    ctx->pc = 0x3C9994u;
label_3c9994:
    // 0x3c9994: 0x10000038  b           . + 4 + (0x38 << 2)
label_3c9998:
    if (ctx->pc == 0x3C9998u) {
        ctx->pc = 0x3C999Cu;
        goto label_3c999c;
    }
    ctx->pc = 0x3C9994u;
    {
        const bool branch_taken_0x3c9994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9994) {
            ctx->pc = 0x3C9A78u;
            goto label_3c9a78;
        }
    }
    ctx->pc = 0x3C999Cu;
label_3c999c:
    // 0x3c999c: 0x0  nop
    ctx->pc = 0x3c999cu;
    // NOP
label_3c99a0:
    // 0x3c99a0: 0xa2242b25  sb          $a0, 0x2B25($s1)
    ctx->pc = 0x3c99a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11045), (uint8_t)GPR_U32(ctx, 4));
label_3c99a4:
    // 0x3c99a4: 0xa6202b26  sh          $zero, 0x2B26($s1)
    ctx->pc = 0x3c99a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11046), (uint16_t)GPR_U32(ctx, 0));
label_3c99a8:
    // 0x3c99a8: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x3c99a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_3c99ac:
    // 0x3c99ac: 0xa22329d1  sb          $v1, 0x29D1($s1)
    ctx->pc = 0x3c99acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10705), (uint8_t)GPR_U32(ctx, 3));
label_3c99b0:
    // 0x3c99b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3c99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c99b4:
    // 0x3c99b4: 0xa620078c  sh          $zero, 0x78C($s1)
    ctx->pc = 0x3c99b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1932), (uint16_t)GPR_U32(ctx, 0));
label_3c99b8:
    // 0x3c99b8: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x3c99b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3c99bc:
    // 0x3c99bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c99bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c99c0:
    // 0x3c99c0: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x3c99c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3c99c4:
    // 0x3c99c4: 0xc050ed4  jal         func_143B50
label_3c99c8:
    if (ctx->pc == 0x3C99C8u) {
        ctx->pc = 0x3C99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99C4u;
        // 0x3c99c8: 0xa2200237  sb          $zero, 0x237($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99CCu;
        goto label_3c99cc;
    }
    ctx->pc = 0x3C99C4u;
    SET_GPR_U32(ctx, 31, 0x3C99CCu);
    ctx->pc = 0x3C99C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99C4u;
    // 0x3c99c8: 0xa2200237  sb          $zero, 0x237($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x3C99C4u, 0x3C99CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C99CCu;
label_3c99cc:
    // 0x3c99cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3c99d0:
    if (ctx->pc == 0x3C99D0u) {
        ctx->pc = 0x3C99D4u;
        goto label_3c99d4;
    }
    ctx->pc = 0x3C99CCu;
    {
        const bool branch_taken_0x3c99cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c99cc) {
            ctx->pc = 0x3C9A18u;
            goto label_3c9a18;
        }
    }
    ctx->pc = 0x3C99D4u;
label_3c99d4:
    // 0x3c99d4: 0x922608e8  lbu         $a2, 0x8E8($s1)
    ctx->pc = 0x3c99d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3c99d8:
    // 0x3c99d8: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x3c99d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_3c99dc:
    // 0x3c99dc: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x3c99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3c99e0:
    // 0x3c99e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c99e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c99e4:
    // 0x3c99e4: 0x24e7c910  addiu       $a3, $a3, -0x36F0
    ctx->pc = 0x3c99e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953232));
label_3c99e8:
    // 0x3c99e8: 0xc0b2fa4  jal         func_2CBE90
label_3c99ec:
    if (ctx->pc == 0x3C99ECu) {
        ctx->pc = 0x3C99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99E8u;
        // 0x3c99ec: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99F0u;
        goto label_3c99f0;
    }
    ctx->pc = 0x3C99E8u;
    SET_GPR_U32(ctx, 31, 0x3C99F0u);
    ctx->pc = 0x3C99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C99E8u;
    // 0x3c99ec: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x3C99E8u, 0x3C99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C99F0u;
label_3c99f0:
    // 0x3c99f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3c99f4:
    if (ctx->pc == 0x3C99F4u) {
        ctx->pc = 0x3C99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99F0u;
        // 0x3c99f4: 0xae222b20  sw          $v0, 0x2B20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C99F8u;
        goto label_3c99f8;
    }
    ctx->pc = 0x3C99F0u;
    {
        const bool branch_taken_0x3c99f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C99F0u;
        // 0x3c99f4: 0xae222b20  sw          $v0, 0x2B20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c99f0) {
            ctx->pc = 0x3C9A18u;
            goto label_3c9a18;
        }
    }
    ctx->pc = 0x3C99F8u;
label_3c99f8:
    // 0x3c99f8: 0x8e242b20  lw          $a0, 0x2B20($s1)
    ctx->pc = 0x3c99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
label_3c99fc:
    // 0x3c99fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c99fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a00:
    // 0x3c9a00: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3c9a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_3c9a04:
    // 0x3c9a04: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c9a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c9a08:
    // 0x3c9a08: 0x320f809  jalr        $t9
label_3c9a0c:
    if (ctx->pc == 0x3C9A0Cu) {
        ctx->pc = 0x3C9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A08u;
        // 0x3c9a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A10u;
        goto label_3c9a10;
    }
    ctx->pc = 0x3C9A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C9A10u);
        ctx->pc = 0x3C9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A08u;
        // 0x3c9a0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A08u, 0x3C9A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C9A10u;
label_3c9a10:
    // 0x3c9a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c9a14:
    // 0x3c9a14: 0xa2222b24  sb          $v0, 0x2B24($s1)
    ctx->pc = 0x3c9a14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11044), (uint8_t)GPR_U32(ctx, 2));
label_3c9a18:
    // 0x3c9a18: 0xc0b2d94  jal         func_2CB650
label_3c9a1c:
    if (ctx->pc == 0x3C9A1Cu) {
        ctx->pc = 0x3C9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A18u;
        // 0x3c9a1c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A20u;
        goto label_3c9a20;
    }
    ctx->pc = 0x3C9A18u;
    SET_GPR_U32(ctx, 31, 0x3C9A20u);
    ctx->pc = 0x3C9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9A18u;
    // 0x3c9a1c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x3C9A18u, 0x3C9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A20u;
label_3c9a20:
    // 0x3c9a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c9a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c9a24:
    // 0x3c9a24: 0xc0bfaa8  jal         func_2FEAA0
label_3c9a28:
    if (ctx->pc == 0x3C9A28u) {
        ctx->pc = 0x3C9A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A24u;
        // 0x3c9a28: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A2Cu;
        goto label_3c9a2c;
    }
    ctx->pc = 0x3C9A24u;
    SET_GPR_U32(ctx, 31, 0x3C9A2Cu);
    ctx->pc = 0x3C9A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9A24u;
    // 0x3c9a28: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x3C9A24u, 0x3C9A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9A2Cu;
label_3c9a2c:
    // 0x3c9a2c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3c9a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3c9a30:
    // 0x3c9a30: 0x240400c6  addiu       $a0, $zero, 0xC6
    ctx->pc = 0x3c9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_3c9a34:
    // 0x3c9a34: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3c9a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3c9a38:
    // 0x3c9a38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3c9a3c:
    // 0x3c9a3c: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3c9a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_3c9a40:
    // 0x3c9a40: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3c9a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3c9a44:
    // 0x3c9a44: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3c9a44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_3c9a48:
    // 0x3c9a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c9a4c:
    // 0x3c9a4c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x3c9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_3c9a50:
    // 0x3c9a50: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3c9a50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3c9a54:
    // 0x3c9a54: 0x0  nop
    ctx->pc = 0x3c9a54u;
    // NOP
label_3c9a58:
    // 0x3c9a58: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3c9a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_3c9a5c:
    // 0x3c9a5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3c9a60:
    if (ctx->pc == 0x3C9A60u) {
        ctx->pc = 0x3C9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A5Cu;
        // 0x3c9a60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A64u;
        goto label_3c9a64;
    }
    ctx->pc = 0x3C9A5Cu;
    {
        const bool branch_taken_0x3c9a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A5Cu;
        // 0x3c9a60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9a5c) {
            ctx->pc = 0x3C9A78u;
            goto label_3c9a78;
        }
    }
    ctx->pc = 0x3C9A64u;
label_3c9a64:
    // 0x3c9a64: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3c9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3c9a68:
    // 0x3c9a68: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3c9a6c:
    if (ctx->pc == 0x3C9A6Cu) {
        ctx->pc = 0x3C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A68u;
        // 0x3c9a6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A70u;
        goto label_3c9a70;
    }
    ctx->pc = 0x3C9A68u;
    {
        const bool branch_taken_0x3c9a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A68u;
        // 0x3c9a6c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9a68) {
            ctx->pc = 0x3C9A78u;
            goto label_3c9a78;
        }
    }
    ctx->pc = 0x3C9A70u;
label_3c9a70:
    // 0x3c9a70: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3c9a70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3c9a74:
    // 0x3c9a74: 0x0  nop
    ctx->pc = 0x3c9a74u;
    // NOP
label_3c9a78:
    // 0x3c9a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c9a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9a7c:
    // 0x3c9a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c9a80:
    // 0x3c9a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9a84:
    // 0x3c9a84: 0x3e00008  jr          $ra
label_3c9a88:
    if (ctx->pc == 0x3C9A88u) {
        ctx->pc = 0x3C9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A84u;
        // 0x3c9a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C9A8Cu;
        goto label_fallthrough_0x3c9a84;
    }
    ctx->pc = 0x3C9A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9A84u;
        // 0x3c9a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c9a84:
    ctx->pc = 0x3C9A8Cu;
}
