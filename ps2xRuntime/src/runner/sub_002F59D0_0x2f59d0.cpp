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

// Function: sub_002F59D0
// Address: 0x2f59d0 - 0x2f5cb0
void sub_002F59D0_0x2f59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F59D0_0x2f59d0");
#endif

    switch (ctx->pc) {
        case 0x2f59ecu: goto label_2f59ec;
        case 0x2f5a40u: goto label_2f5a40;
        case 0x2f5aa8u: goto label_2f5aa8;
        case 0x2f5accu: goto label_2f5acc;
        case 0x2f5af4u: goto label_2f5af4;
        case 0x2f5b70u: goto label_2f5b70;
        case 0x2f5b88u: goto label_2f5b88;
        case 0x2f5b98u: goto label_2f5b98;
        case 0x2f5bbcu: goto label_2f5bbc;
        case 0x2f5bd0u: goto label_2f5bd0;
        case 0x2f5bd8u: goto label_2f5bd8;
        case 0x2f5be4u: goto label_2f5be4;
        case 0x2f5c0cu: goto label_2f5c0c;
        case 0x2f5c20u: goto label_2f5c20;
        case 0x2f5c40u: goto label_2f5c40;
        case 0x2f5c64u: goto label_2f5c64;
        case 0x2f5c8cu: goto label_2f5c8c;
        default: break;
    }

    ctx->pc = 0x2f59d0u;

    // 0x2f59d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f59d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f59d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f59d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f59dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f59dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f59e0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2f59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2f59e4: 0xc056d10  jal         func_15B440
    ctx->pc = 0x2F59E4u;
    SET_GPR_U32(ctx, 31, 0x2F59ECu);
    ctx->pc = 0x2F59E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F59E4u;
    // 0x2f59e8: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B440u, 0x2F59E4u, 0x2F59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F59ECu;
label_2f59ec:
    // 0x2f59ec: 0x8203000c  lb          $v1, 0xC($s0)
    ctx->pc = 0x2f59ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f59f0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f59f4: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2F59F4u;
    {
        const bool branch_taken_0x2f59f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F59F4u;
        // 0x2f59f8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f59f4) {
            ctx->pc = 0x2F5C18u;
            goto label_2f5c18;
        }
    }
    ctx->pc = 0x2F59FCu;
    // 0x2f59fc: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F59FCu;
    {
        const bool branch_taken_0x2f59fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f59fc) {
            ctx->pc = 0x2F5BA0u;
            goto label_2f5ba0;
        }
    }
    ctx->pc = 0x2F5A04u;
    // 0x2f5a04: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f5a08: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F5A08u;
    {
        const bool branch_taken_0x2f5a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A08u;
        // 0x2f5a0c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a08) {
            ctx->pc = 0x2F5B40u;
            goto label_2f5b40;
        }
    }
    ctx->pc = 0x2F5A10u;
    // 0x2f5a10: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2F5A10u;
    {
        const bool branch_taken_0x2f5a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a10) {
            ctx->pc = 0x2F5B10u;
            goto label_2f5b10;
        }
    }
    ctx->pc = 0x2F5A18u;
    // 0x2f5a18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f5a1c: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F5A1Cu;
    {
        const bool branch_taken_0x2f5a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a1c) {
            ctx->pc = 0x2F5B00u;
            goto label_2f5b00;
        }
    }
    ctx->pc = 0x2F5A24u;
    // 0x2f5a24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5A24u;
    {
        const bool branch_taken_0x2f5a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a24) {
            ctx->pc = 0x2F5A38u;
            goto label_2f5a38;
        }
    }
    ctx->pc = 0x2F5A2Cu;
    // 0x2f5a2c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2F5A2Cu;
    {
        const bool branch_taken_0x2f5a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a2c) {
            ctx->pc = 0x2F5C98u;
            goto label_2f5c98;
        }
    }
    ctx->pc = 0x2F5A34u;
    // 0x2f5a34: 0x0  nop
    ctx->pc = 0x2f5a34u;
    // NOP
label_2f5a38:
    // 0x2f5a38: 0xc0bd604  jal         func_2F5810
    ctx->pc = 0x2F5A38u;
    SET_GPR_U32(ctx, 31, 0x2F5A40u);
    ctx->pc = 0x2F5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5810u, 0x2F5A38u, 0x2F5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5A40u;
label_2f5a40:
    // 0x2f5a40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f5a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f5a48: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F5A48u;
    {
        const bool branch_taken_0x2f5a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a48) {
            ctx->pc = 0x2F5B00u;
            goto label_2f5b00;
        }
    }
    ctx->pc = 0x2F5A50u;
    // 0x2f5a50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5a54: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5A54u;
    {
        const bool branch_taken_0x2f5a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A54u;
        // 0x2f5a58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a54) {
            ctx->pc = 0x2F5AA0u;
            goto label_2f5aa0;
        }
    }
    ctx->pc = 0x2F5A5Cu;
    // 0x2f5a5c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F5A5Cu;
    {
        const bool branch_taken_0x2f5a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a5c) {
            ctx->pc = 0x2F5AA0u;
            goto label_2f5aa0;
        }
    }
    ctx->pc = 0x2F5A64u;
    // 0x2f5a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5a68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5A68u;
    {
        const bool branch_taken_0x2f5a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5a68) {
            ctx->pc = 0x2F5A80u;
            goto label_2f5a80;
        }
    }
    ctx->pc = 0x2F5A70u;
    // 0x2f5a70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5A70u;
    {
        const bool branch_taken_0x2f5a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a70) {
            ctx->pc = 0x2F5A80u;
            goto label_2f5a80;
        }
    }
    ctx->pc = 0x2F5A78u;
    // 0x2f5a78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2F5A78u;
    {
        const bool branch_taken_0x2f5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5a78) {
            ctx->pc = 0x2F5B00u;
            goto label_2f5b00;
        }
    }
    ctx->pc = 0x2F5A80u;
label_2f5a80:
    // 0x2f5a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5a84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5a88: 0xa022cea9  sb          $v0, -0x3157($at)
    ctx->pc = 0x2f5a88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEA9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x81CEA9u, _value); } while (0);
    // 0x2f5a8c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f5a90: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f5a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5a98: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2F5A98u;
    {
        const bool branch_taken_0x2f5a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5A98u;
        // 0x2f5a9c: 0xa200000d  sb          $zero, 0xD($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5a98) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5AA0u;
label_2f5aa0:
    // 0x2f5aa0: 0xc0bd644  jal         func_2F5910
    ctx->pc = 0x2F5AA0u;
    SET_GPR_U32(ctx, 31, 0x2F5AA8u);
    ctx->pc = 0x2F5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5910u, 0x2F5AA0u, 0x2F5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5AA8u;
label_2f5aa8:
    // 0x2f5aa8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5aac: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2f5aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2f5ab0: 0x8c2395a8  lw          $v1, -0x6A58($at)
    ctx->pc = 0x2f5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f5ab4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2f5ab8: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x2f5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x2f5abc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f5abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5ac0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5ac4: 0xc05455c  jal         func_151570
    ctx->pc = 0x2F5AC4u;
    SET_GPR_U32(ctx, 31, 0x2F5ACCu);
    ctx->pc = 0x2F5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5AC4u;
    // 0x2f5ac8: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151570u, 0x2F5AC4u, 0x2F5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5ACCu;
label_2f5acc:
    // 0x2f5acc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5ad0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5ad4: 0xa42095a2  sh          $zero, -0x6A5E($at)
    ctx->pc = 0x2f5ad4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A2u, _value); } while (0);
    // 0x2f5ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5adc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5ae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5ae4: 0xa42095a4  sh          $zero, -0x6A5C($at)
    ctx->pc = 0x2f5ae4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
    // 0x2f5ae8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5aec: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5AECu;
    SET_GPR_U32(ctx, 31, 0x2F5AF4u);
    ctx->pc = 0x2F5AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5AECu;
    // 0x2f5af0: 0xa02295a0  sb          $v0, -0x6A60($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940064), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5AECu, 0x2F5AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5AF4u;
label_2f5af4:
    // 0x2f5af4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2F5AF4u;
    {
        const bool branch_taken_0x2f5af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5AF4u;
        // 0x2f5af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5af4) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5AFCu;
    // 0x2f5afc: 0x0  nop
    ctx->pc = 0x2f5afcu;
    // NOP
label_2f5b00:
    // 0x2f5b00: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2f5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2f5b04: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f5b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5b08: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f5b0c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2f5b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_2f5b10:
    // 0x2f5b10: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2f5b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f5b14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5b18: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2f5b18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f5b1c: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2f5b1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f5b20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5B20u;
    {
        const bool branch_taken_0x2f5b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b20) {
            ctx->pc = 0x2F5B38u;
            goto label_2f5b38;
        }
    }
    ctx->pc = 0x2F5B28u;
    // 0x2f5b28: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f5b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5b30: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f5b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5b34: 0x0  nop
    ctx->pc = 0x2f5b34u;
    // NOP
label_2f5b38:
    // 0x2f5b38: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2F5B38u;
    {
        const bool branch_taken_0x2f5b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B38u;
        // 0x2f5b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b38) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5B40u;
label_2f5b40:
    // 0x2f5b40: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2f5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5b44: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f5b44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5b48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5b4c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2f5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2f5b50: 0xac22f248  sw          $v0, -0xDB8($at)
    ctx->pc = 0x2f5b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81F248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81F248u, _value); } while (0);
    // 0x2f5b54: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5b58: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x2f5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f5b5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f5b60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F5B60u;
    {
        const bool branch_taken_0x2f5b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B60u;
        // 0x2f5b64: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b60) {
            ctx->pc = 0x2F5B90u;
            goto label_2f5b90;
        }
    }
    ctx->pc = 0x2F5B68u;
    // 0x2f5b68: 0xc052658  jal         func_149960
    ctx->pc = 0x2F5B68u;
    SET_GPR_U32(ctx, 31, 0x2F5B70u);
    ctx->pc = 0x149960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149960u, 0x2F5B68u, 0x2F5B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B70u;
label_2f5b70:
    // 0x2f5b70: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2f5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f5b74: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2f5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2f5b78: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2f5b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2f5b7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f5b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5b80: 0xc05e544  jal         func_179510
    ctx->pc = 0x2F5B80u;
    SET_GPR_U32(ctx, 31, 0x2F5B88u);
    ctx->pc = 0x2F5B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B80u;
    // 0x2f5b84: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179510u, 0x2F5B80u, 0x2F5B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B88u;
label_2f5b88:
    // 0x2f5b88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5B88u;
    {
        const bool branch_taken_0x2f5b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5b88) {
            ctx->pc = 0x2F5B98u;
            goto label_2f5b98;
        }
    }
    ctx->pc = 0x2F5B90u;
label_2f5b90:
    // 0x2f5b90: 0xc05263c  jal         func_1498F0
    ctx->pc = 0x2F5B90u;
    SET_GPR_U32(ctx, 31, 0x2F5B98u);
    ctx->pc = 0x2F5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5B90u;
    // 0x2f5b94: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498F0u, 0x2F5B90u, 0x2F5B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B98u;
label_2f5b98:
    // 0x2f5b98: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2F5B98u;
    {
        const bool branch_taken_0x2f5b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5B98u;
        // 0x2f5b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5b98) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5BA0u;
label_2f5ba0:
    // 0x2f5ba0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5ba4: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x2f5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x2f5ba8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f5ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f5bac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5BACu;
    {
        const bool branch_taken_0x2f5bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bac) {
            ctx->pc = 0x2F5BC8u;
            goto label_2f5bc8;
        }
    }
    ctx->pc = 0x2F5BB4u;
    // 0x2f5bb4: 0xc052688  jal         func_149A20
    ctx->pc = 0x2F5BB4u;
    SET_GPR_U32(ctx, 31, 0x2F5BBCu);
    ctx->pc = 0x149A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149A20u, 0x2F5BB4u, 0x2F5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BBCu;
label_2f5bbc:
    // 0x2f5bbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5BBCu;
    {
        const bool branch_taken_0x2f5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bbc) {
            ctx->pc = 0x2F5BD0u;
            goto label_2f5bd0;
        }
    }
    ctx->pc = 0x2F5BC4u;
    // 0x2f5bc4: 0x0  nop
    ctx->pc = 0x2f5bc4u;
    // NOP
label_2f5bc8:
    // 0x2f5bc8: 0xc052674  jal         func_1499D0
    ctx->pc = 0x2F5BC8u;
    SET_GPR_U32(ctx, 31, 0x2F5BD0u);
    ctx->pc = 0x1499D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1499D0u, 0x2F5BC8u, 0x2F5BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BD0u;
label_2f5bd0:
    // 0x2f5bd0: 0xc0bd644  jal         func_2F5910
    ctx->pc = 0x2F5BD0u;
    SET_GPR_U32(ctx, 31, 0x2F5BD8u);
    ctx->pc = 0x2F5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5910u, 0x2F5BD0u, 0x2F5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BD8u;
label_2f5bd8:
    // 0x2f5bd8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2f5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2f5bdc: 0xc05455c  jal         func_151570
    ctx->pc = 0x2F5BDCu;
    SET_GPR_U32(ctx, 31, 0x2F5BE4u);
    ctx->pc = 0x2F5BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5BDCu;
    // 0x2f5be0: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151570u, 0x2F5BDCu, 0x2F5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5BE4u;
label_2f5be4:
    // 0x2f5be4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5be8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5bec: 0xa42095a2  sh          $zero, -0x6A5E($at)
    ctx->pc = 0x2f5becu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A2u, _value); } while (0);
    // 0x2f5bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bf4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5bf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5bfc: 0xa42095a4  sh          $zero, -0x6A5C($at)
    ctx->pc = 0x2f5bfcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
    // 0x2f5c00: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5c04: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5C04u;
    SET_GPR_U32(ctx, 31, 0x2F5C0Cu);
    ctx->pc = 0x2F5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C04u;
    // 0x2f5c08: 0xa02295a0  sb          $v0, -0x6A60($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940064), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5C04u, 0x2F5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C0Cu;
label_2f5c0c:
    // 0x2f5c0c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F5C0Cu;
    {
        const bool branch_taken_0x2f5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C0Cu;
        // 0x2f5c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c0c) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5C14u;
    // 0x2f5c14: 0x0  nop
    ctx->pc = 0x2f5c14u;
    // NOP
label_2f5c18:
    // 0x2f5c18: 0xc0bd644  jal         func_2F5910
    ctx->pc = 0x2F5C18u;
    SET_GPR_U32(ctx, 31, 0x2F5C20u);
    ctx->pc = 0x2F5910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5910u, 0x2F5C18u, 0x2F5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C20u;
label_2f5c20:
    // 0x2f5c20: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f5c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c28: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f5c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f5c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f5c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f5c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c38: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2F5C38u;
    SET_GPR_U32(ctx, 31, 0x2F5C40u);
    ctx->pc = 0x2F5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C38u;
    // 0x2f5c3c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2F5C38u, 0x2F5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C40u;
label_2f5c40:
    // 0x2f5c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5c44: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x2f5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x2f5c48: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2f5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2f5c4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f5c50: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x2f5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x2f5c54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f5c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f5c58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5c5c: 0xc05455c  jal         func_151570
    ctx->pc = 0x2F5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2F5C64u);
    ctx->pc = 0x2F5C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C5Cu;
    // 0x2f5c60: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151570u, 0x2F5C5Cu, 0x2F5C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C64u;
label_2f5c64:
    // 0x2f5c64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5c68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5c6c: 0xa42095a2  sh          $zero, -0x6A5E($at)
    ctx->pc = 0x2f5c6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A2u, _value); } while (0);
    // 0x2f5c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c74: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5c7c: 0xa42095a4  sh          $zero, -0x6A5C($at)
    ctx->pc = 0x2f5c7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
    // 0x2f5c80: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2f5c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2f5c84: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5C84u;
    SET_GPR_U32(ctx, 31, 0x2F5C8Cu);
    ctx->pc = 0x2F5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5C84u;
    // 0x2f5c88: 0xa02295a0  sb          $v0, -0x6A60($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940064), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5C84u, 0x2F5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C8Cu;
label_2f5c8c:
    // 0x2f5c8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5C8Cu;
    {
        const bool branch_taken_0x2f5c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C8Cu;
        // 0x2f5c90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c8c) {
            ctx->pc = 0x2F5CA0u;
            goto label_2f5ca0;
        }
    }
    ctx->pc = 0x2F5C94u;
    // 0x2f5c94: 0x0  nop
    ctx->pc = 0x2f5c94u;
    // NOP
label_2f5c98:
    // 0x2f5c98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5c9c: 0x0  nop
    ctx->pc = 0x2f5c9cu;
    // NOP
label_2f5ca0:
    // 0x2f5ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CA8u;
        // 0x2f5cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5CB0u;
}
