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

// Function: sub_00257980
// Address: 0x257980 - 0x257b7c
void sub_00257980_0x257980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257980_0x257980");
#endif

    switch (ctx->pc) {
        case 0x2579d8u: goto label_2579d8;
        case 0x2579e4u: goto label_2579e4;
        case 0x257a60u: goto label_257a60;
        case 0x257a7cu: goto label_257a7c;
        case 0x257af4u: goto label_257af4;
        case 0x257b28u: goto label_257b28;
        default: break;
    }

    ctx->pc = 0x257980u;

    // 0x257980: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x257980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x257984: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x257984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x257988: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x257988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25798c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25798cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x257990: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x257990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x257994: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x257994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x257998: 0x30be00ff  andi        $fp, $a1, 0xFF
    ctx->pc = 0x257998u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25799c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2579a0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2579a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2579a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2579a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2579a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2579ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2579acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2579b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2579b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2579b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2579b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2579bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2579bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2579c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2579c4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x2579c4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2579c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2579c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2579cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2579ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579d0: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x2579d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2579d4: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x2579d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
label_2579d8:
    // 0x2579d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2579d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579dc: 0xc097958  jal         func_25E560
    ctx->pc = 0x2579DCu;
    SET_GPR_U32(ctx, 31, 0x2579E4u);
    ctx->pc = 0x2579E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2579DCu;
    // 0x2579e0: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E560u, 0x2579DCu, 0x2579E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2579E4u;
label_2579e4:
    // 0x2579e4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2579E4u;
    {
        const bool branch_taken_0x2579e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2579e4) {
            ctx->pc = 0x257B48u;
            goto label_257b48;
        }
    }
    ctx->pc = 0x2579ECu;
    // 0x2579ec: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2579ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2579f0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2579f4: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2579F4u;
    {
        const bool branch_taken_0x2579f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2579f4) {
            ctx->pc = 0x257B18u;
            goto label_257b18;
        }
    }
    ctx->pc = 0x2579FCu;
    // 0x2579fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x257a00: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x257A00u;
    {
        const bool branch_taken_0x257a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A00u;
        // 0x257a04: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a00) {
            ctx->pc = 0x257B08u;
            goto label_257b08;
        }
    }
    ctx->pc = 0x257A08u;
    // 0x257a08: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x257A08u;
    {
        const bool branch_taken_0x257a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257a08) {
            ctx->pc = 0x257AD0u;
            goto label_257ad0;
        }
    }
    ctx->pc = 0x257A10u;
    // 0x257a10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x257a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257a14: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x257A14u;
    {
        const bool branch_taken_0x257a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A14u;
        // 0x257a18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a14) {
            ctx->pc = 0x257A48u;
            goto label_257a48;
        }
    }
    ctx->pc = 0x257A1Cu;
    // 0x257a1c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257A1Cu;
    {
        const bool branch_taken_0x257a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257a1c) {
            ctx->pc = 0x257A40u;
            goto label_257a40;
        }
    }
    ctx->pc = 0x257A24u;
    // 0x257a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257a28: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257A28u;
    {
        const bool branch_taken_0x257a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257a28) {
            ctx->pc = 0x257A40u;
            goto label_257a40;
        }
    }
    ctx->pc = 0x257A30u;
    // 0x257a30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x257A30u;
    {
        const bool branch_taken_0x257a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a30) {
            ctx->pc = 0x257A40u;
            goto label_257a40;
        }
    }
    ctx->pc = 0x257A38u;
    // 0x257a38: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x257A38u;
    {
        const bool branch_taken_0x257a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a38) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257A40u;
label_257a40:
    // 0x257a40: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x257A40u;
    {
        const bool branch_taken_0x257a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A40u;
        // 0x257a44: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a40) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257A48u;
label_257a48:
    // 0x257a48: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x257a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x257a4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x257a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x257a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a54: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x257a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x257a58: 0xc095f80  jal         func_257E00
    ctx->pc = 0x257A58u;
    SET_GPR_U32(ctx, 31, 0x257A60u);
    ctx->pc = 0x257A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A58u;
    // 0x257a5c: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x257A58u, 0x257A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A60u;
label_257a60:
    // 0x257a60: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x257a60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257a64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x257a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a68: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x257a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a6c: 0x27a600ce  addiu       $a2, $sp, 0xCE
    ctx->pc = 0x257a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 206));
    // 0x257a70: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x257a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x257a74: 0xc0955c4  jal         func_255710
    ctx->pc = 0x257A74u;
    SET_GPR_U32(ctx, 31, 0x257A7Cu);
    ctx->pc = 0x257A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A74u;
    // 0x257a78: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255710u, 0x257A74u, 0x257A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A7Cu;
label_257a7c:
    // 0x257a7c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x257a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x257a80: 0x97a300ce  lhu         $v1, 0xCE($sp)
    ctx->pc = 0x257a80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x257a84: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x257a84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257a88: 0x97a200cc  lhu         $v0, 0xCC($sp)
    ctx->pc = 0x257a88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x257a8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x257a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257a90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x257a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257a94: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x257a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x257a98: 0x17c00027  bnez        $fp, . + 4 + (0x27 << 2)
    ctx->pc = 0x257A98u;
    {
        const bool branch_taken_0x257a98 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A98u;
        // 0x257a9c: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a98) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257AA0u;
    // 0x257aa0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x257aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x257aa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257aa8: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x257aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x257aac: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x257AACu;
    {
        const bool branch_taken_0x257aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x257AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AACu;
        // 0x257ab0: 0x32c200ff  andi        $v0, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257aac) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257AB4u;
    // 0x257ab4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x257ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257ab8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x257AB8u;
    {
        const bool branch_taken_0x257ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257ab8) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257AC0u;
    // 0x257ac0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x257ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x257ac4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x257AC4u;
    {
        const bool branch_taken_0x257ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AC4u;
        // 0x257ac8: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257ac4) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257ACCu;
    // 0x257acc: 0x0  nop
    ctx->pc = 0x257accu;
    // NOP
label_257ad0:
    // 0x257ad0: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x257ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
    // 0x257ad4: 0xafb000c0  sw          $s0, 0xC0($sp)
    ctx->pc = 0x257ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 16));
    // 0x257ad8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x257ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257adc: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x257adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x257ae0: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x257ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x257ae4: 0x92850001  lbu         $a1, 0x1($s4)
    ctx->pc = 0x257ae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x257ae8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x257ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x257aec: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x257AECu;
    SET_GPR_U32(ctx, 31, 0x257AF4u);
    ctx->pc = 0x257AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257AECu;
    // 0x257af0: 0x27a800bc  addiu       $t0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x257AECu, 0x257AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257AF4u;
label_257af4:
    // 0x257af4: 0x97a200c4  lhu         $v0, 0xC4($sp)
    ctx->pc = 0x257af4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x257af8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x257af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x257afc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x257AFCu;
    {
        const bool branch_taken_0x257afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257AFCu;
        // 0x257b00: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257afc) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257B04u;
    // 0x257b04: 0x0  nop
    ctx->pc = 0x257b04u;
    // NOP
label_257b08:
    // 0x257b08: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x257b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x257b0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x257B0Cu;
    {
        const bool branch_taken_0x257b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B0Cu;
        // 0x257b10: 0x3051ffff  andi        $s1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b0c) {
            ctx->pc = 0x257B38u;
            goto label_257b38;
        }
    }
    ctx->pc = 0x257B14u;
    // 0x257b14: 0x0  nop
    ctx->pc = 0x257b14u;
    // NOP
label_257b18:
    // 0x257b18: 0x82850002  lb          $a1, 0x2($s4)
    ctx->pc = 0x257b18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x257b1c: 0x87a600a0  lh          $a2, 0xA0($sp)
    ctx->pc = 0x257b1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x257b20: 0xc095c40  jal         func_257100
    ctx->pc = 0x257B20u;
    SET_GPR_U32(ctx, 31, 0x257B28u);
    ctx->pc = 0x257B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B20u;
    // 0x257b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257100u, 0x257B20u, 0x257B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B28u;
label_257b28:
    // 0x257b28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x257b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257b2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x257b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x257b30: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x257b30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257b34: 0x0  nop
    ctx->pc = 0x257b34u;
    // NOP
label_257b38:
    // 0x257b38: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x257b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x257b3c: 0x1640ffa6  bnez        $s2, . + 4 + (-0x5A << 2)
    ctx->pc = 0x257B3Cu;
    {
        const bool branch_taken_0x257b3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x257B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B3Cu;
        // 0x257b40: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b3c) {
            ctx->pc = 0x2579D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2579d8;
        }
    }
    ctx->pc = 0x257B44u;
    // 0x257b44: 0x0  nop
    ctx->pc = 0x257b44u;
    // NOP
label_257b48:
    // 0x257b48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x257b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x257b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x257b50: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x257b50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x257b54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x257b54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x257b58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x257b58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257b5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x257b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257b60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x257b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257b64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257b68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257b74: 0x3e00008  jr          $ra
    ctx->pc = 0x257B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B74u;
        // 0x257b78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B7Cu;
}
