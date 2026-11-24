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

// Function: sub_00339F40
// Address: 0x339f40 - 0x33a064
void sub_00339F40_0x339f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339F40_0x339f40");
#endif

    switch (ctx->pc) {
        case 0x339f74u: goto label_339f74;
        case 0x339f8cu: goto label_339f8c;
        case 0x339fb4u: goto label_339fb4;
        case 0x33a030u: goto label_33a030;
        case 0x33a04cu: goto label_33a04c;
        default: break;
    }

    ctx->pc = 0x339f40u;

    // 0x339f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x339f44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339f50: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x339f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x339f54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x339f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x339f58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x339F58u;
    {
        const bool branch_taken_0x339f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F58u;
        // 0x339f5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f58) {
            ctx->pc = 0x339F98u;
            goto label_339f98;
        }
    }
    ctx->pc = 0x339F60u;
    // 0x339f60: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x339f60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x339f64: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339f68: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339f6c: 0xc0ce34c  jal         func_338D30
    ctx->pc = 0x339F6Cu;
    SET_GPR_U32(ctx, 31, 0x339F74u);
    ctx->pc = 0x339F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F6Cu;
    // 0x339f70: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D30u, 0x339F6Cu, 0x339F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F74u;
label_339f74:
    // 0x339f74: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x339f74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x339f78: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339f7c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x339f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x339f80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339f84: 0xc0ce360  jal         func_338D80
    ctx->pc = 0x339F84u;
    SET_GPR_U32(ctx, 31, 0x339F8Cu);
    ctx->pc = 0x339F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339F84u;
    // 0x339f88: 0x2407ff81  addiu       $a3, $zero, -0x7F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D80u, 0x339F84u, 0x339F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339F8Cu;
label_339f8c:
    // 0x339f8c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x339F8Cu;
    {
        const bool branch_taken_0x339f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339f8c) {
            ctx->pc = 0x33A050u;
            goto label_33a050;
        }
    }
    ctx->pc = 0x339F94u;
    // 0x339f94: 0x0  nop
    ctx->pc = 0x339f94u;
    // NOP
label_339f98:
    // 0x339f98: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x339f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x339f9c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x339f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x339fa0: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x339fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x339fa4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x339fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x339fa8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x339fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339fac: 0xc0c923c  jal         func_3248F0
    ctx->pc = 0x339FACu;
    SET_GPR_U32(ctx, 31, 0x339FB4u);
    ctx->pc = 0x339FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339FACu;
    // 0x339fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3248F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3248F0u, 0x339FACu, 0x339FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339FB4u;
label_339fb4:
    // 0x339fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x339fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339fb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x339fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x339fbc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x339fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x339fc0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x339FC0u;
    {
        const bool branch_taken_0x339fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339FC0u;
        // 0x339fc4: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339fc0) {
            ctx->pc = 0x33A000u;
            goto label_33a000;
        }
    }
    ctx->pc = 0x339FC8u;
    // 0x339fc8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x339fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x339fcc: 0x9024f82b  lbu         $a0, -0x7D5($at)
    ctx->pc = 0x339fccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294965291)));
    // 0x339fd0: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x339fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x339fd4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x339fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x339fd8: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x339fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x339fdc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x339fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x339fe0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x339fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x339fe4: 0x0  nop
    ctx->pc = 0x339fe4u;
    // NOP
    // 0x339fe8: 0x1010  mfhi        $v0
    ctx->pc = 0x339fe8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x339fec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x339fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x339ff0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x339ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x339ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339ff8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x339ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x339ffc: 0x0  nop
    ctx->pc = 0x339ffcu;
    // NOP
label_33a000:
    // 0x33a000: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x33a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x33a004: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x33a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a008: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x33a00c: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x33a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x33a010: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x33a010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33a014: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33a014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33a018: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33a018u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a01c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x33a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x33a020: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x33a020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x33a024: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x33a024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x33a028: 0xc0ce34c  jal         func_338D30
    ctx->pc = 0x33A028u;
    SET_GPR_U32(ctx, 31, 0x33A030u);
    ctx->pc = 0x33A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A028u;
    // 0x33a02c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D30u, 0x33A028u, 0x33A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A030u;
label_33a030:
    // 0x33a030: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x33a030u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x33a034: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x33a034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x33a038: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x33a03c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x33a03cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x33a040: 0x103c03  sra         $a3, $s0, 16
    ctx->pc = 0x33a040u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 16));
    // 0x33a044: 0xc0ce360  jal         func_338D80
    ctx->pc = 0x33A044u;
    SET_GPR_U32(ctx, 31, 0x33A04Cu);
    ctx->pc = 0x33A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A044u;
    // 0x33a048: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D80u, 0x33A044u, 0x33A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A04Cu;
label_33a04c:
    // 0x33a04c: 0x0  nop
    ctx->pc = 0x33a04cu;
    // NOP
label_33a050:
    // 0x33a050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A05Cu;
        // 0x33a060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A064u;
}
