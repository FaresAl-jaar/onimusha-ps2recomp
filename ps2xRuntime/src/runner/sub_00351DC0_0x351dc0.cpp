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

// Function: sub_00351DC0
// Address: 0x351dc0 - 0x351fdc
void sub_00351DC0_0x351dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351DC0_0x351dc0");
#endif

    switch (ctx->pc) {
        case 0x351decu: goto label_351dec;
        case 0x351e18u: goto label_351e18;
        case 0x351e54u: goto label_351e54;
        case 0x351e78u: goto label_351e78;
        case 0x351ec0u: goto label_351ec0;
        case 0x351f58u: goto label_351f58;
        case 0x351f68u: goto label_351f68;
        case 0x351fa8u: goto label_351fa8;
        default: break;
    }

    ctx->pc = 0x351dc0u;

    // 0x351dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x351dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x351dc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x351dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351dc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x351dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x351dcc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x351dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x351dd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x351dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x351dd4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x351dd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351dd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x351dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x351ddc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x351ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x351de0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x351de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x351de4: 0xc0d342c  jal         func_34D0B0
    ctx->pc = 0x351DE4u;
    SET_GPR_U32(ctx, 31, 0x351DECu);
    ctx->pc = 0x351DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351DE4u;
    // 0x351de8: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0B0u, 0x351DE4u, 0x351DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DECu;
label_351dec:
    // 0x351dec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x351decu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x351df0: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x351df0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
    // 0x351df4: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x351df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x351df8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x351df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x351dfc: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x351dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x351e00: 0x2442f810  addiu       $v0, $v0, -0x7F0
    ctx->pc = 0x351e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965264));
    // 0x351e04: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x351e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x351e08: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x351e08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x351e0c: 0x267385e0  addiu       $s3, $s3, -0x7A20
    ctx->pc = 0x351e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936032));
    // 0x351e10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x351e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351e14: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x351e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_351e18:
    // 0x351e18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x351e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x351e1c: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x351E1Cu;
    {
        const bool branch_taken_0x351e1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x351E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E1Cu;
        // 0x351e20: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e1c) {
            ctx->pc = 0x351E68u;
            goto label_351e68;
        }
    }
    ctx->pc = 0x351E24u;
    // 0x351e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351e28: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x351E28u;
    {
        const bool branch_taken_0x351e28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x351e28) {
            ctx->pc = 0x351E60u;
            goto label_351e60;
        }
    }
    ctx->pc = 0x351E30u;
    // 0x351e30: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x351E30u;
    {
        const bool branch_taken_0x351e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e30) {
            ctx->pc = 0x351E40u;
            goto label_351e40;
        }
    }
    ctx->pc = 0x351E38u;
    // 0x351e38: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x351E38u;
    {
        const bool branch_taken_0x351e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e38) {
            ctx->pc = 0x351E80u;
            goto label_351e80;
        }
    }
    ctx->pc = 0x351E40u;
label_351e40:
    // 0x351e40: 0x142e3c  dsll32      $a1, $s4, 24
    ctx->pc = 0x351e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 24));
    // 0x351e44: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x351e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x351e48: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x351e48u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x351e4c: 0xc0ce258  jal         func_338960
    ctx->pc = 0x351E4Cu;
    SET_GPR_U32(ctx, 31, 0x351E54u);
    ctx->pc = 0x351E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E4Cu;
    // 0x351e50: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338960u, 0x351E4Cu, 0x351E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E54u;
label_351e54:
    // 0x351e54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x351E54u;
    {
        const bool branch_taken_0x351e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E54u;
        // 0x351e58: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e54) {
            ctx->pc = 0x351E80u;
            goto label_351e80;
        }
    }
    ctx->pc = 0x351E5Cu;
    // 0x351e5c: 0x0  nop
    ctx->pc = 0x351e5cu;
    // NOP
label_351e60:
    // 0x351e60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x351E60u;
    {
        const bool branch_taken_0x351e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E60u;
        // 0x351e64: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e60) {
            ctx->pc = 0x351E80u;
            goto label_351e80;
        }
    }
    ctx->pc = 0x351E68u;
label_351e68:
    // 0x351e68: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x351e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x351e6c: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x351e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x351e70: 0xc0ce250  jal         func_338940
    ctx->pc = 0x351E70u;
    SET_GPR_U32(ctx, 31, 0x351E78u);
    ctx->pc = 0x351E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E70u;
    // 0x351e74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338940u, 0x351E70u, 0x351E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E78u;
label_351e78:
    // 0x351e78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x351e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x351e7c: 0x0  nop
    ctx->pc = 0x351e7cu;
    // NOP
label_351e80:
    // 0x351e80: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x351e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x351e84: 0x2442f848  addiu       $v0, $v0, -0x7B8
    ctx->pc = 0x351e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965320));
    // 0x351e88: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x351e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x351e8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x351e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x351e90: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x351e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x351e94: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x351e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x351e98: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x351e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x351e9c: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x351e9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x351ea0: 0x92670004  lbu         $a3, 0x4($s3)
    ctx->pc = 0x351ea0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x351ea4: 0x92680005  lbu         $t0, 0x5($s3)
    ctx->pc = 0x351ea4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x351ea8: 0x92690006  lbu         $t1, 0x6($s3)
    ctx->pc = 0x351ea8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x351eac: 0x926a0007  lbu         $t2, 0x7($s3)
    ctx->pc = 0x351eacu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x351eb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x351eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x351eb4: 0x926b0008  lbu         $t3, 0x8($s3)
    ctx->pc = 0x351eb4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x351eb8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x351EB8u;
    SET_GPR_U32(ctx, 31, 0x351EC0u);
    ctx->pc = 0x351EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351EB8u;
    // 0x351ebc: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x351EB8u, 0x351EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351EC0u;
label_351ec0:
    // 0x351ec0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x351ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x351ec4: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x351ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x351ec8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x351EC8u;
    {
        const bool branch_taken_0x351ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EC8u;
        // 0x351ecc: 0x2673000a  addiu       $s3, $s3, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ec8) {
            ctx->pc = 0x351E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351e18;
        }
    }
    ctx->pc = 0x351ED0u;
    // 0x351ed0: 0x3c010103  lui         $at, 0x103
    ctx->pc = 0x351ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)259 << 16));
    // 0x351ed4: 0x34210024  ori         $at, $at, 0x24
    ctx->pc = 0x351ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36);
    // 0x351ed8: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x351ed8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x351edc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x351EDCu;
    {
        const bool branch_taken_0x351edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EDCu;
        // 0x351ee0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351edc) {
            ctx->pc = 0x351F00u;
            goto label_351f00;
        }
    }
    ctx->pc = 0x351EE4u;
    // 0x351ee4: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x351ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x351ee8: 0x34420015  ori         $v0, $v0, 0x15
    ctx->pc = 0x351ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x351eec: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x351eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x351ef0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351EF0u;
    {
        const bool branch_taken_0x351ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EF0u;
        // 0x351ef4: 0x3c02fefc  lui         $v0, 0xFEFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65276 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ef0) {
            ctx->pc = 0x351F00u;
            goto label_351f00;
        }
    }
    ctx->pc = 0x351EF8u;
    // 0x351ef8: 0x3442ffeb  ori         $v0, $v0, 0xFFEB
    ctx->pc = 0x351ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65515);
    // 0x351efc: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x351efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_351f00:
    // 0x351f00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x351f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x351f04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x351f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351f08: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x351f0c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x351f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x351f10: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x351f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
    // 0x351f14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x351f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351f18: 0x90620045  lbu         $v0, 0x45($v1)
    ctx->pc = 0x351f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 69)));
    // 0x351f1c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x351f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x351f20: 0x90620046  lbu         $v0, 0x46($v1)
    ctx->pc = 0x351f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x351f24: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x351f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x351f28: 0x84620036  lh          $v0, 0x36($v1)
    ctx->pc = 0x351f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x351f2c: 0x906b0044  lbu         $t3, 0x44($v1)
    ctx->pc = 0x351f2cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x351f30: 0x84640034  lh          $a0, 0x34($v1)
    ctx->pc = 0x351f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x351f34: 0x84660038  lh          $a2, 0x38($v1)
    ctx->pc = 0x351f34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x351f38: 0x8467003a  lh          $a3, 0x3A($v1)
    ctx->pc = 0x351f38u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x351f3c: 0x8c680030  lw          $t0, 0x30($v1)
    ctx->pc = 0x351f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x351f40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x351f44: 0x8c69003c  lw          $t1, 0x3C($v1)
    ctx->pc = 0x351f44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x351f48: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x351f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x351f4c: 0x8c6a0040  lw          $t2, 0x40($v1)
    ctx->pc = 0x351f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x351f50: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x351F50u;
    SET_GPR_U32(ctx, 31, 0x351F58u);
    ctx->pc = 0x351F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F50u;
    // 0x351f54: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x351F50u, 0x351F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F58u;
label_351f58:
    // 0x351f58: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x351f58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x351f5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x351f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351f60: 0x26108400  addiu       $s0, $s0, -0x7C00
    ctx->pc = 0x351f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935552));
    // 0x351f64: 0x0  nop
    ctx->pc = 0x351f64u;
    // NOP
label_351f68:
    // 0x351f68: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x351f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x351f6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x351f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x351f70: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x351f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x351f74: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x351f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x351f78: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x351f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x351f7c: 0x920b0014  lbu         $t3, 0x14($s0)
    ctx->pc = 0x351f7cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x351f80: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x351f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x351f84: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x351f84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x351f88: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x351f88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x351f8c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x351f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x351f90: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x351f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x351f94: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x351f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x351f98: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x351f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x351f9c: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x351f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x351fa0: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x351FA0u;
    SET_GPR_U32(ctx, 31, 0x351FA8u);
    ctx->pc = 0x351FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FA0u;
    // 0x351fa4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x351FA0u, 0x351FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FA8u;
label_351fa8:
    // 0x351fa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x351fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x351fac: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x351facu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x351fb0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x351FB0u;
    {
        const bool branch_taken_0x351fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x351FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FB0u;
        // 0x351fb4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fb0) {
            ctx->pc = 0x351F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351f68;
        }
    }
    ctx->pc = 0x351FB8u;
    // 0x351fb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x351fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x351fbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x351fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x351fc0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x351fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x351fc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x351fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x351fc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x351fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351fcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x351fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351fd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x351fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x351FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FD4u;
        // 0x351fd8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351FDCu;
}
