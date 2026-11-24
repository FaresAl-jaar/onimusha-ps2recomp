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

// Function: sub_003EF960
// Address: 0x3ef960 - 0x3efb1c
void sub_003EF960_0x3ef960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF960_0x3ef960");
#endif

    switch (ctx->pc) {
        case 0x3ef9f0u: goto label_3ef9f0;
        case 0x3efa08u: goto label_3efa08;
        case 0x3efa28u: goto label_3efa28;
        case 0x3efa44u: goto label_3efa44;
        case 0x3efab8u: goto label_3efab8;
        case 0x3efafcu: goto label_3efafc;
        default: break;
    }

    ctx->pc = 0x3ef960u;

    // 0x3ef960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ef960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ef964: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3ef964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3ef968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ef96c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ef96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ef970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ef970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ef974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ef978: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3ef978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3ef97c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3ef97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3ef980: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3ef980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3ef984: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3ef984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ef988: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3ef988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3ef98c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3ef98cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3ef990: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3ef990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ef994: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3ef994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3ef998: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3ef998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3ef99c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3ef99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ef9a0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3ef9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3ef9a4: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3ef9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3ef9a8: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3ef9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ef9ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3ef9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ef9b0: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3ef9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3ef9b4: 0x90822b56  lbu         $v0, 0x2B56($a0)
    ctx->pc = 0x3ef9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11094)));
    // 0x3ef9b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EF9B8u;
    {
        const bool branch_taken_0x3ef9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF9B8u;
        // 0x3ef9bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef9b8) {
            ctx->pc = 0x3EF9D0u;
            goto label_3ef9d0;
        }
    }
    ctx->pc = 0x3EF9C0u;
    // 0x3ef9c0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3ef9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3ef9c4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3ef9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3ef9c8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3ef9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3ef9cc: 0x0  nop
    ctx->pc = 0x3ef9ccu;
    // NOP
label_3ef9d0:
    // 0x3ef9d0: 0xae0028f4  sw          $zero, 0x28F4($s0)
    ctx->pc = 0x3ef9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10484), GPR_U32(ctx, 0));
    // 0x3ef9d4: 0x86022be2  lh          $v0, 0x2BE2($s0)
    ctx->pc = 0x3ef9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11234)));
    // 0x3ef9d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF9D8u;
    {
        const bool branch_taken_0x3ef9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef9d8) {
            ctx->pc = 0x3EF9E8u;
            goto label_3ef9e8;
        }
    }
    ctx->pc = 0x3EF9E0u;
    // 0x3ef9e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef9e4: 0xa6022be2  sh          $v0, 0x2BE2($s0)
    ctx->pc = 0x3ef9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11234), (uint16_t)GPR_U32(ctx, 2));
label_3ef9e8:
    // 0x3ef9e8: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x3EF9E8u;
    SET_GPR_U32(ctx, 31, 0x3EF9F0u);
    ctx->pc = 0x3EF9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF9E8u;
    // 0x3ef9ec: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x3EF9E8u, 0x3EF9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF9F0u;
label_3ef9f0:
    // 0x3ef9f0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3EF9F0u;
    {
        const bool branch_taken_0x3ef9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef9f0) {
            ctx->pc = 0x3EFB08u;
            goto label_3efb08;
        }
    }
    ctx->pc = 0x3EF9F8u;
    // 0x3ef9f8: 0x8e052b28  lw          $a1, 0x2B28($s0)
    ctx->pc = 0x3ef9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3ef9fc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3ef9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3efa00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3EFA00u;
    SET_GPR_U32(ctx, 31, 0x3EFA08u);
    ctx->pc = 0x3EFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFA00u;
    // 0x3efa04: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3EFA00u, 0x3EFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFA08u;
label_3efa08:
    // 0x3efa08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3efa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efa0c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EFA0Cu;
    {
        const bool branch_taken_0x3efa0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efa0c) {
            ctx->pc = 0x3EFA28u;
            goto label_3efa28;
        }
    }
    ctx->pc = 0x3EFA14u;
    // 0x3efa14: 0x92032be0  lbu         $v1, 0x2BE0($s0)
    ctx->pc = 0x3efa14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11232)));
    // 0x3efa18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EFA18u;
    {
        const bool branch_taken_0x3efa18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA18u;
        // 0x3efa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa18) {
            ctx->pc = 0x3EFA28u;
            goto label_3efa28;
        }
    }
    ctx->pc = 0x3EFA20u;
    // 0x3efa20: 0xc0fa630  jal         func_3E98C0
    ctx->pc = 0x3EFA20u;
    SET_GPR_U32(ctx, 31, 0x3EFA28u);
    ctx->pc = 0x3E98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98C0u, 0x3EFA20u, 0x3EFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFA28u;
label_3efa28:
    // 0x3efa28: 0x86032be2  lh          $v1, 0x2BE2($s0)
    ctx->pc = 0x3efa28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11234)));
    // 0x3efa2c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3EFA2Cu;
    {
        const bool branch_taken_0x3efa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3efa2c) {
            ctx->pc = 0x3EFB08u;
            goto label_3efb08;
        }
    }
    ctx->pc = 0x3EFA34u;
    // 0x3efa34: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3EFA34u;
    {
        const bool branch_taken_0x3efa34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA34u;
        // 0x3efa38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa34) {
            ctx->pc = 0x3EFB08u;
            goto label_3efb08;
        }
    }
    ctx->pc = 0x3EFA3Cu;
    // 0x3efa3c: 0xc0fa638  jal         func_3E98E0
    ctx->pc = 0x3EFA3Cu;
    SET_GPR_U32(ctx, 31, 0x3EFA44u);
    ctx->pc = 0x3E98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E98E0u, 0x3EFA3Cu, 0x3EFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFA44u;
label_3efa44:
    // 0x3efa44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3efa44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3efa48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3efa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3efa4c: 0x1464002e  bne         $v1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3EFA4Cu;
    {
        const bool branch_taken_0x3efa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3efa4c) {
            ctx->pc = 0x3EFB08u;
            goto label_3efb08;
        }
    }
    ctx->pc = 0x3EFA54u;
    // 0x3efa54: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3efa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3efa58: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3efa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3efa5c: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3efa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3efa60: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x3efa60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3efa64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3efa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3efa68: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3efa68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3efa6c: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3efa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3efa70: 0x51302  srl         $v0, $a1, 12
    ctx->pc = 0x3efa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x3efa74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3efa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3efa78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EFA78u;
    {
        const bool branch_taken_0x3efa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA78u;
        // 0x3efa7c: 0xa31018  mult        $v0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa78) {
            ctx->pc = 0x3EFAC0u;
            goto label_3efac0;
        }
    }
    ctx->pc = 0x3EFA80u;
    // 0x3efa80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3efa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3efa84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3efa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3efa88: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3efa88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3efa8c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3efa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3efa90: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3efa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3efa94: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3efa94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3efa98: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3efa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3efa9c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3efa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3efaa0: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3efaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x3efaa4: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3efaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x3efaa8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3efaa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3efaac: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3efaacu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3efab0: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x3EFAB0u;
    SET_GPR_U32(ctx, 31, 0x3EFAB8u);
    ctx->pc = 0x3EFAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFAB0u;
    // 0x3efab4: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3EFAB0u, 0x3EFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFAB8u;
label_3efab8:
    // 0x3efab8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3EFAB8u;
    {
        const bool branch_taken_0x3efab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3efab8) {
            ctx->pc = 0x3EFB00u;
            goto label_3efb00;
        }
    }
    ctx->pc = 0x3EFAC0u;
label_3efac0:
    // 0x3efac0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3efac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3efac4: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x3efac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3efac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3efac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3efacc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3efaccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3efad0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3efad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3efad4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3efad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3efad8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3efad8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3efadc: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3efadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3efae0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3efae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3efae4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x3efae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x3efae8: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x3efae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x3efaec: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3efaecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3efaf0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3efaf0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3efaf4: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x3EFAF4u;
    SET_GPR_U32(ctx, 31, 0x3EFAFCu);
    ctx->pc = 0x3EFAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFAF4u;
    // 0x3efaf8: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x3EFAF4u, 0x3EFAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFAFCu;
label_3efafc:
    // 0x3efafc: 0x0  nop
    ctx->pc = 0x3efafcu;
    // NOP
label_3efb00:
    // 0x3efb00: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3efb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3efb04: 0xa6032be2  sh          $v1, 0x2BE2($s0)
    ctx->pc = 0x3efb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11234), (uint16_t)GPR_U32(ctx, 3));
label_3efb08:
    // 0x3efb08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3efb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3efb0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3efb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3efb10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3efb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3efb14: 0x3e00008  jr          $ra
    ctx->pc = 0x3EFB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB14u;
        // 0x3efb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EFB1Cu;
}
