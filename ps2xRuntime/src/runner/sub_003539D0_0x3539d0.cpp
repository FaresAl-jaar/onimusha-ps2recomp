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

// Function: sub_003539D0
// Address: 0x3539d0 - 0x353b4c
void sub_003539D0_0x3539d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003539D0_0x3539d0");
#endif

    switch (ctx->pc) {
        case 0x353a30u: goto label_353a30;
        case 0x353a58u: goto label_353a58;
        case 0x353a98u: goto label_353a98;
        case 0x353adcu: goto label_353adc;
        case 0x353b10u: goto label_353b10;
        default: break;
    }

    ctx->pc = 0x3539d0u;

    // 0x3539d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3539d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3539d4: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3539d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3539d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3539d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3539dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3539dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3539e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3539e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3539e4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3539e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3539e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3539ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3539ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3539f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3539f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3539f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3539f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3539fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3539fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x353a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x353a04: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x353a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x353a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x353a0c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x353a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x353a10: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x353a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a14: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x353a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a24: 0x25083960  addiu       $t0, $t0, 0x3960
    ctx->pc = 0x353a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14688));
    // 0x353a28: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x353A28u;
    SET_GPR_U32(ctx, 31, 0x353A30u);
    ctx->pc = 0x353A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A28u;
    // 0x353a2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x353A28u, 0x353A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A30u;
label_353a30:
    // 0x353a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a34: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x353A34u;
    {
        const bool branch_taken_0x353a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A34u;
        // 0x353a38: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a34) {
            ctx->pc = 0x353B18u;
            goto label_353b18;
        }
    }
    ctx->pc = 0x353A3Cu;
    // 0x353a3c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x353a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a40: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x353a40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x353a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353a4c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x353a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x353a50: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x353A50u;
    SET_GPR_U32(ctx, 31, 0x353A58u);
    ctx->pc = 0x353A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A50u;
    // 0x353a54: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x353A50u, 0x353A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A58u;
label_353a58:
    // 0x353a58: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x353a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353a5c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353a60: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x353a60u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x353a64: 0x2442f8f0  addiu       $v0, $v0, -0x710
    ctx->pc = 0x353a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965488));
    // 0x353a68: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x353a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x353a6c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x353a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x353a70: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x353a70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353a74: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x353a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x353a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a7c: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x353a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x353a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353a84: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x353a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x353a88: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x353a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x353a8c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x353a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x353a90: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x353A90u;
    SET_GPR_U32(ctx, 31, 0x353A98u);
    ctx->pc = 0x353A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A90u;
    // 0x353a94: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x353A90u, 0x353A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A98u;
label_353a98:
    // 0x353a98: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x353a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x353a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x353a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x353aa0: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x353aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x353aa4: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x353aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x353aa8: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x353aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x353aac: 0x92820820  lbu         $v0, 0x820($s4)
    ctx->pc = 0x353aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2080)));
    // 0x353ab0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x353AB0u;
    {
        const bool branch_taken_0x353ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ab0) {
            ctx->pc = 0x353AE8u;
            goto label_353ae8;
        }
    }
    ctx->pc = 0x353AB8u;
    // 0x353ab8: 0x7a830810  lq          $v1, 0x810($s4)
    ctx->pc = 0x353ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 2064)));
    // 0x353abc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353ac0: 0x2442f8f4  addiu       $v0, $v0, -0x70C
    ctx->pc = 0x353ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965492));
    // 0x353ac4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x353ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x353ac8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x353ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x353acc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x353accu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x353ad0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x353ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353ad4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x353AD4u;
    SET_GPR_U32(ctx, 31, 0x353ADCu);
    ctx->pc = 0x353AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353AD4u;
    // 0x353ad8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x353AD4u, 0x353ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353ADCu;
label_353adc:
    // 0x353adc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x353ADCu;
    {
        const bool branch_taken_0x353adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353adc) {
            ctx->pc = 0x353B10u;
            goto label_353b10;
        }
    }
    ctx->pc = 0x353AE4u;
    // 0x353ae4: 0x0  nop
    ctx->pc = 0x353ae4u;
    // NOP
label_353ae8:
    // 0x353ae8: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x353ae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x353aec: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x353af0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x353af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x353af4: 0x2442f8f4  addiu       $v0, $v0, -0x70C
    ctx->pc = 0x353af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965492));
    // 0x353af8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x353af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x353afc: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x353afcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x353b00: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x353b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x353b04: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x353b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x353b08: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x353B08u;
    SET_GPR_U32(ctx, 31, 0x353B10u);
    ctx->pc = 0x353B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B08u;
    // 0x353b0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x353B08u, 0x353B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B10u;
label_353b10:
    // 0x353b10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x353B10u;
    {
        const bool branch_taken_0x353b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B10u;
        // 0x353b14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b10) {
            ctx->pc = 0x353B20u;
            goto label_353b20;
        }
    }
    ctx->pc = 0x353B18u;
label_353b18:
    // 0x353b18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b1c: 0x0  nop
    ctx->pc = 0x353b1cu;
    // NOP
label_353b20:
    // 0x353b20: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x353b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353b24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x353b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353b28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x353b28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353b2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x353b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353b30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x353b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353b34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x353b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353b38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x353b38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x353b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x353b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353b44: 0x3e00008  jr          $ra
    ctx->pc = 0x353B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B44u;
        // 0x353b48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353B4Cu;
}
