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

// Function: sub_0036B7D0
// Address: 0x36b7d0 - 0x36bb20
void sub_0036B7D0_0x36b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B7D0_0x36b7d0");
#endif

    switch (ctx->pc) {
        case 0x36b844u: goto label_36b844;
        case 0x36b860u: goto label_36b860;
        case 0x36b870u: goto label_36b870;
        case 0x36b890u: goto label_36b890;
        case 0x36b8b4u: goto label_36b8b4;
        case 0x36b8fcu: goto label_36b8fc;
        case 0x36b90cu: goto label_36b90c;
        case 0x36b920u: goto label_36b920;
        case 0x36b92cu: goto label_36b92c;
        case 0x36b998u: goto label_36b998;
        case 0x36ba40u: goto label_36ba40;
        case 0x36ba50u: goto label_36ba50;
        case 0x36ba68u: goto label_36ba68;
        case 0x36ba80u: goto label_36ba80;
        case 0x36bab8u: goto label_36bab8;
        case 0x36bac8u: goto label_36bac8;
        case 0x36bad8u: goto label_36bad8;
        default: break;
    }

    ctx->pc = 0x36b7d0u;

    // 0x36b7d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x36b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x36b7d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x36b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x36b7d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x36b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x36b7dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x36b7e0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x36b7e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36b7e8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x36b7e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36b7f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x36b7f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36b7f8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36b7f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36b800: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x36b800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36b804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36b808: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x36b808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b80c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36b810: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x36b810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36b818: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36B818u;
    {
        const bool branch_taken_0x36b818 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B818u;
        // 0x36b81c: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b818) {
            ctx->pc = 0x36B828u;
            goto label_36b828;
        }
    }
    ctx->pc = 0x36B820u;
    // 0x36b820: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x36B820u;
    {
        const bool branch_taken_0x36b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B820u;
        // 0x36b824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b820) {
            ctx->pc = 0x36BAF0u;
            goto label_36baf0;
        }
    }
    ctx->pc = 0x36B828u;
label_36b828:
    // 0x36b828: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x36b828u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x36b82c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36b82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36b834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b838: 0x240705f0  addiu       $a3, $zero, 0x5F0
    ctx->pc = 0x36b838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x36b83c: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x36B83Cu;
    SET_GPR_U32(ctx, 31, 0x36B844u);
    ctx->pc = 0x36B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B83Cu;
    // 0x36b840: 0x2508b760  addiu       $t0, $t0, -0x48A0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x36B83Cu, 0x36B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B844u;
label_36b844:
    // 0x36b844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36b844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b848: 0x120000a7  beqz        $s0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x36B848u;
    {
        const bool branch_taken_0x36b848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B848u;
        // 0x36b84c: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b848) {
            ctx->pc = 0x36BAE8u;
            goto label_36bae8;
        }
    }
    ctx->pc = 0x36B850u;
    // 0x36b850: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36b850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36b854: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36b854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b858: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x36B858u;
    SET_GPR_U32(ctx, 31, 0x36B860u);
    ctx->pc = 0x36B85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B858u;
    // 0x36b85c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x36B858u, 0x36B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B860u;
label_36b860:
    // 0x36b860: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36b860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36b864: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36b864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36b868: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x36B868u;
    SET_GPR_U32(ctx, 31, 0x36B870u);
    ctx->pc = 0x36B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B868u;
    // 0x36b86c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x36B868u, 0x36B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B870u;
label_36b870:
    // 0x36b870: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x36b870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b874: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x36b874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b87c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x36b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36b880: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x36b880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36b884: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x36b884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b888: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x36B888u;
    SET_GPR_U32(ctx, 31, 0x36B890u);
    ctx->pc = 0x36B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B888u;
    // 0x36b88c: 0x27aa00c0  addiu       $t2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x36B888u, 0x36B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B890u;
label_36b890:
    // 0x36b890: 0xa6000526  sh          $zero, 0x526($s0)
    ctx->pc = 0x36b890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 0));
    // 0x36b894: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x36b894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x36b898: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x36b898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x36b89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b8a0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x36b8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x36b8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8a8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x36b8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x36b8ac: 0xc0c09ac  jal         func_3026B0
    ctx->pc = 0x36B8ACu;
    SET_GPR_U32(ctx, 31, 0x36B8B4u);
    ctx->pc = 0x36B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8ACu;
    // 0x36b8b0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3026B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3026B0u, 0x36B8ACu, 0x36B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B8B4u;
label_36b8b4:
    // 0x36b8b4: 0xa21705d2  sb          $s7, 0x5D2($s0)
    ctx->pc = 0x36b8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1490), (uint8_t)GPR_U32(ctx, 23));
    // 0x36b8b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b8bc: 0xa21e05d3  sb          $fp, 0x5D3($s0)
    ctx->pc = 0x36b8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1491), (uint8_t)GPR_U32(ctx, 30));
    // 0x36b8c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x36b8c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8c4: 0x93a30110  lbu         $v1, 0x110($sp)
    ctx->pc = 0x36b8c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36b8c8: 0xa20305e0  sb          $v1, 0x5E0($s0)
    ctx->pc = 0x36b8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1504), (uint8_t)GPR_U32(ctx, 3));
    // 0x36b8cc: 0xa21205d4  sb          $s2, 0x5D4($s0)
    ctx->pc = 0x36b8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1492), (uint8_t)GPR_U32(ctx, 18));
    // 0x36b8d0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x36b8d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36b8d4: 0x7e030590  sq          $v1, 0x590($s0)
    ctx->pc = 0x36b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), GPR_VEC(ctx, 3));
    // 0x36b8d8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x36b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x36b8dc: 0xae030518  sw          $v1, 0x518($s0)
    ctx->pc = 0x36b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 3));
    // 0x36b8e0: 0xa20205d5  sb          $v0, 0x5D5($s0)
    ctx->pc = 0x36b8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1493), (uint8_t)GPR_U32(ctx, 2));
    // 0x36b8e4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x36b8e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x36b8e8: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x36B8E8u;
    {
        const bool branch_taken_0x36b8e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B8E8u;
        // 0x36b8ec: 0x7e0205a0  sq          $v0, 0x5A0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 1440), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b8e8) {
            ctx->pc = 0x36B948u;
            goto label_36b948;
        }
    }
    ctx->pc = 0x36B8F0u;
    // 0x36b8f0: 0x868500c2  lh          $a1, 0xC2($s4)
    ctx->pc = 0x36b8f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x36b8f4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x36B8F4u;
    SET_GPR_U32(ctx, 31, 0x36B8FCu);
    ctx->pc = 0x36B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8F4u;
    // 0x36b8f8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x36B8F4u, 0x36B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B8FCu;
label_36b8fc:
    // 0x36b8fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x36b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36b900: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x36b900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x36b904: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x36B904u;
    SET_GPR_U32(ctx, 31, 0x36B90Cu);
    ctx->pc = 0x36B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B904u;
    // 0x36b908: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x36B904u, 0x36B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B90Cu;
label_36b90c:
    // 0x36b90c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x36b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36b910: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x36b910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x36b914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36b914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b918: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x36B918u;
    SET_GPR_U32(ctx, 31, 0x36B920u);
    ctx->pc = 0x36B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B918u;
    // 0x36b91c: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x36B918u, 0x36B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B920u;
label_36b920:
    // 0x36b920: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36b920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36b924: 0xc076654  jal         func_1D9950
    ctx->pc = 0x36B924u;
    SET_GPR_U32(ctx, 31, 0x36B92Cu);
    ctx->pc = 0x36B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B924u;
    // 0x36b928: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x36B924u, 0x36B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B92Cu;
label_36b92c:
    // 0x36b92c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x36b92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36b930: 0x0  nop
    ctx->pc = 0x36b930u;
    // NOP
    // 0x36b934: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36b934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36b938: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x36B938u;
    {
        const bool branch_taken_0x36b938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36b938) {
            ctx->pc = 0x36B948u;
            goto label_36b948;
        }
    }
    ctx->pc = 0x36B940u;
    // 0x36b940: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x36b940u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b944: 0x0  nop
    ctx->pc = 0x36b944u;
    // NOP
label_36b948:
    // 0x36b948: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x36B948u;
    {
        const bool branch_taken_0x36b948 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b948) {
            ctx->pc = 0x36B958u;
            goto label_36b958;
        }
    }
    ctx->pc = 0x36B950u;
    // 0x36b950: 0x16600041  bnez        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x36B950u;
    {
        const bool branch_taken_0x36b950 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x36b950) {
            ctx->pc = 0x36BA58u;
            goto label_36ba58;
        }
    }
    ctx->pc = 0x36B958u;
label_36b958:
    // 0x36b958: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x36b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x36b95c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x36b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x36b960: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36b960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36b964: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x36b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x36b968: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x36b968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x36b96c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36b970: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x36b970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x36b974: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x36b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x36b978: 0x868300c2  lh          $v1, 0xC2($s4)
    ctx->pc = 0x36b978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x36b97c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x36b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x36b980: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x36b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x36b984: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x36b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x36b988: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36b98c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x36b98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36b990: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x36B990u;
    SET_GPR_U32(ctx, 31, 0x36B998u);
    ctx->pc = 0x36B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B990u;
    // 0x36b994: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x36B990u, 0x36B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B998u;
label_36b998:
    // 0x36b998: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x36b998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x36b99c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x36b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x36b9a0: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x36b9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x36b9a4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x36b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x36b9a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36b9ac: 0x93a50110  lbu         $a1, 0x110($sp)
    ctx->pc = 0x36b9acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36b9b0: 0x244218bc  addiu       $v0, $v0, 0x18BC
    ctx->pc = 0x36b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6332));
    // 0x36b9b4: 0x246318b8  addiu       $v1, $v1, 0x18B8
    ctx->pc = 0x36b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6328));
    // 0x36b9b8: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x36b9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x36b9bc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x36b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36b9c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36b9c4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x36b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36b9c8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x36b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36b9cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36b9d0: 0xaf8480e0  sw          $a0, -0x7F20($gp)
    ctx->pc = 0x36b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 4));
    // 0x36b9d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36b9d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x36b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b9dc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x36b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b9e0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x36b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x36b9e4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x36b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x36b9e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36B9E8u;
    {
        const bool branch_taken_0x36b9e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x36B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9E8u;
        // 0x36b9ec: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9e8) {
            ctx->pc = 0x36B9FCu;
            goto label_36b9fc;
        }
    }
    ctx->pc = 0x36B9F0u;
    // 0x36b9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36b9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36b9f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36B9F4u;
    {
        const bool branch_taken_0x36b9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9F4u;
        // 0x36b9f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9f4) {
            ctx->pc = 0x36BA18u;
            goto label_36ba18;
        }
    }
    ctx->pc = 0x36B9FCu;
label_36b9fc:
    // 0x36b9fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x36b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x36ba00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36ba04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36ba04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36ba08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36ba08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ba0c: 0x0  nop
    ctx->pc = 0x36ba0cu;
    // NOP
    // 0x36ba10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36ba10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36ba14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x36ba14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_36ba18:
    // 0x36ba18: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x36ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x36ba1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36ba20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x36ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x36ba24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36ba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ba28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ba2c: 0x0  nop
    ctx->pc = 0x36ba2cu;
    // NOP
    // 0x36ba30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36ba30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36ba34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x36ba34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36ba38: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x36BA38u;
    SET_GPR_U32(ctx, 31, 0x36BA40u);
    ctx->pc = 0x36BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA38u;
    // 0x36ba3c: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x36BA38u, 0x36BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA40u;
label_36ba40:
    // 0x36ba40: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x36ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x36ba44: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36ba44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36ba48: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x36BA48u;
    SET_GPR_U32(ctx, 31, 0x36BA50u);
    ctx->pc = 0x36BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA48u;
    // 0x36ba4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x36BA48u, 0x36BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA50u;
label_36ba50:
    // 0x36ba50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x36BA50u;
    {
        const bool branch_taken_0x36ba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ba50) {
            ctx->pc = 0x36BAD8u;
            goto label_36bad8;
        }
    }
    ctx->pc = 0x36BA58u;
label_36ba58:
    // 0x36ba58: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x36ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x36ba5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36ba60: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x36BA60u;
    SET_GPR_U32(ctx, 31, 0x36BA68u);
    ctx->pc = 0x36BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA60u;
    // 0x36ba64: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x36BA60u, 0x36BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA68u;
label_36ba68:
    // 0x36ba68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36ba6c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36ba70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36ba70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ba74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba78: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x36BA78u;
    SET_GPR_U32(ctx, 31, 0x36BA80u);
    ctx->pc = 0x36BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA78u;
    // 0x36ba7c: 0xafa000b4  sw          $zero, 0xB4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x36BA78u, 0x36BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA80u;
label_36ba80:
    // 0x36ba80: 0x93a50110  lbu         $a1, 0x110($sp)
    ctx->pc = 0x36ba80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36ba84: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x36ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x36ba88: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36ba8c: 0x246318b8  addiu       $v1, $v1, 0x18B8
    ctx->pc = 0x36ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6328));
    // 0x36ba90: 0x244218bc  addiu       $v0, $v0, 0x18BC
    ctx->pc = 0x36ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6332));
    // 0x36ba94: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x36ba94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36ba98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36ba9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x36ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36baa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36baa4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x36baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x36baa8: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x36baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36baac: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x36baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36bab0: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x36BAB0u;
    SET_GPR_U32(ctx, 31, 0x36BAB8u);
    ctx->pc = 0x36BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAB0u;
    // 0x36bab4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x36BAB0u, 0x36BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAB8u;
label_36bab8:
    // 0x36bab8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36babc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36babcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x36bac0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x36BAC0u;
    SET_GPR_U32(ctx, 31, 0x36BAC8u);
    ctx->pc = 0x36BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAC0u;
    // 0x36bac4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x36BAC0u, 0x36BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAC8u;
label_36bac8:
    // 0x36bac8: 0x260405a0  addiu       $a0, $s0, 0x5A0
    ctx->pc = 0x36bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x36bacc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36baccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36bad0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x36BAD0u;
    SET_GPR_U32(ctx, 31, 0x36BAD8u);
    ctx->pc = 0x36BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAD0u;
    // 0x36bad4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x36BAD0u, 0x36BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAD8u;
label_36bad8:
    // 0x36bad8: 0x868200c2  lh          $v0, 0xC2($s4)
    ctx->pc = 0x36bad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x36badc: 0xa60205e2  sh          $v0, 0x5E2($s0)
    ctx->pc = 0x36badcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 2));
    // 0x36bae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36BAE0u;
    {
        const bool branch_taken_0x36bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAE0u;
        // 0x36bae4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bae0) {
            ctx->pc = 0x36BAF0u;
            goto label_36baf0;
        }
    }
    ctx->pc = 0x36BAE8u;
label_36bae8:
    // 0x36bae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baec: 0x0  nop
    ctx->pc = 0x36baecu;
    // NOP
label_36baf0:
    // 0x36baf0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x36baf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36baf4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x36baf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36baf8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x36baf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36bafc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36bafcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36bb00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36bb00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36bb04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36bb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36bb08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36bb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36bb0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36bb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36bb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36bb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB18u;
        // 0x36bb1c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB20u;
}
