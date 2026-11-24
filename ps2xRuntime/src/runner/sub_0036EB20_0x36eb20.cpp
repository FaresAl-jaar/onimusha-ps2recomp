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

// Function: sub_0036EB20
// Address: 0x36eb20 - 0x36eecc
void sub_0036EB20_0x36eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EB20_0x36eb20");
#endif

    switch (ctx->pc) {
        case 0x36eb3cu: goto label_36eb3c;
        case 0x36eb98u: goto label_36eb98;
        case 0x36ebc8u: goto label_36ebc8;
        case 0x36ec30u: goto label_36ec30;
        case 0x36ec40u: goto label_36ec40;
        case 0x36ec9cu: goto label_36ec9c;
        case 0x36eca4u: goto label_36eca4;
        case 0x36ece4u: goto label_36ece4;
        case 0x36ececu: goto label_36ecec;
        case 0x36ed34u: goto label_36ed34;
        case 0x36ed3cu: goto label_36ed3c;
        case 0x36ed88u: goto label_36ed88;
        case 0x36ed90u: goto label_36ed90;
        case 0x36edd4u: goto label_36edd4;
        case 0x36eddcu: goto label_36eddc;
        case 0x36ee1cu: goto label_36ee1c;
        case 0x36ee24u: goto label_36ee24;
        case 0x36ee64u: goto label_36ee64;
        case 0x36ee6cu: goto label_36ee6c;
        case 0x36eeacu: goto label_36eeac;
        case 0x36eeb4u: goto label_36eeb4;
        default: break;
    }

    ctx->pc = 0x36eb20u;

    // 0x36eb20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36eb24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36eb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eb28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36eb2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36eb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36eb30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36eb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36eb34: 0xc0dbbe8  jal         func_36EFA0
    ctx->pc = 0x36EB34u;
    SET_GPR_U32(ctx, 31, 0x36EB3Cu);
    ctx->pc = 0x36EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB34u;
    // 0x36eb38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EFA0u, 0x36EB34u, 0x36EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB3Cu;
label_36eb3c:
    // 0x36eb3c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36eb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36eb40: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x36eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x36eb44: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x36eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x36eb48: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x36eb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x36eb4c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x36eb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x36eb50: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36EB50u;
    {
        const bool branch_taken_0x36eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB50u;
        // 0x36eb54: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eb50) {
            ctx->pc = 0x36EBC8u;
            goto label_36ebc8;
        }
    }
    ctx->pc = 0x36EB58u;
    // 0x36eb58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36eb5c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x36eb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x36eb60: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x36eb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36eb64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eb68: 0x8203032c  lb          $v1, 0x32C($s0)
    ctx->pc = 0x36eb68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x36eb6c: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x36eb6cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x36eb70: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x36eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36eb74: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36eb78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36eb7c: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x36eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x36eb80: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x36eb80u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36eb84: 0x0  nop
    ctx->pc = 0x36eb84u;
    // NOP
    // 0x36eb88: 0x0  nop
    ctx->pc = 0x36eb88u;
    // NOP
    // 0x36eb8c: 0x1010  mfhi        $v0
    ctx->pc = 0x36eb8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36eb90: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36EB90u;
    SET_GPR_U32(ctx, 31, 0x36EB98u);
    ctx->pc = 0x36EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EB90u;
    // 0x36eb94: 0xa202032c  sb          $v0, 0x32C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 812), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36EB90u, 0x36EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB98u;
label_36eb98:
    // 0x36eb98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36eb9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36eba0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36eba4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36eba8: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x36eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x36ebac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ebacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ebb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ebb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ebb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ebbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ebc0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EBC0u;
    SET_GPR_U32(ctx, 31, 0x36EBC8u);
    ctx->pc = 0x36EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EBC0u;
    // 0x36ebc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EBC0u, 0x36EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EBC8u;
label_36ebc8:
    // 0x36ebc8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36ebcc: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x36ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x36ebd0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x36ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x36ebd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EBD4u;
    {
        const bool branch_taken_0x36ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBD4u;
        // 0x36ebd8: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ebd4) {
            ctx->pc = 0x36EBE8u;
            goto label_36ebe8;
        }
    }
    ctx->pc = 0x36EBDCu;
    // 0x36ebdc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x36EBDCu;
    {
        const bool branch_taken_0x36ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ebdc) {
            ctx->pc = 0x36EC38u;
            goto label_36ec38;
        }
    }
    ctx->pc = 0x36EBE4u;
    // 0x36ebe4: 0x0  nop
    ctx->pc = 0x36ebe4u;
    // NOP
label_36ebe8:
    // 0x36ebe8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x36ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x36ebec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36EBECu;
    {
        const bool branch_taken_0x36ebec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ebec) {
            ctx->pc = 0x36EC10u;
            goto label_36ec10;
        }
    }
    ctx->pc = 0x36EBF4u;
    // 0x36ebf4: 0x8203032c  lb          $v1, 0x32C($s0)
    ctx->pc = 0x36ebf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x36ebf8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36ebfc: 0x2442ab20  addiu       $v0, $v0, -0x54E0
    ctx->pc = 0x36ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
    // 0x36ec00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36ec04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ec08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36EC08u;
    {
        const bool branch_taken_0x36ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC08u;
        // 0x36ec0c: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec08) {
            ctx->pc = 0x36EC38u;
            goto label_36ec38;
        }
    }
    ctx->pc = 0x36EC10u;
label_36ec10:
    // 0x36ec10: 0x8203032c  lb          $v1, 0x32C($s0)
    ctx->pc = 0x36ec10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x36ec14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36ec18: 0x2442ab24  addiu       $v0, $v0, -0x54DC
    ctx->pc = 0x36ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945572));
    // 0x36ec1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36ec20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ec24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36ec28: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36EC28u;
    SET_GPR_U32(ctx, 31, 0x36EC30u);
    ctx->pc = 0x36EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC28u;
    // 0x36ec2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36EC28u, 0x36EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC30u;
label_36ec30:
    // 0x36ec30: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x36EC30u;
    {
        const bool branch_taken_0x36ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ec30) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36EC38u;
label_36ec38:
    // 0x36ec38: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x36EC38u;
    SET_GPR_U32(ctx, 31, 0x36EC40u);
    ctx->pc = 0x36EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC38u;
    // 0x36ec3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x36EC38u, 0x36EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC40u;
label_36ec40:
    // 0x36ec40: 0x2e210008  sltiu       $at, $s1, 0x8
    ctx->pc = 0x36ec40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x36ec44: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x36EC44u;
    {
        const bool branch_taken_0x36ec44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC44u;
        // 0x36ec48: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec44) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36EC4Cu;
    // 0x36ec4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x36ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x36ec50: 0x248418e0  addiu       $a0, $a0, 0x18E0
    ctx->pc = 0x36ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6368));
    // 0x36ec54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36ec58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ec5c: 0x600008  jr          $v1
    ctx->pc = 0x36EC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x36EC68u: goto label_36ec68;
            case 0x36ECB0u: goto label_36ecb0;
            case 0x36ECF8u: goto label_36ecf8;
            case 0x36ED48u: goto label_36ed48;
            case 0x36ED98u: goto label_36ed98;
            case 0x36EDE8u: goto label_36ede8;
            case 0x36EE30u: goto label_36ee30;
            case 0x36EE78u: goto label_36ee78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36EC64u;
    // 0x36ec64: 0x0  nop
    ctx->pc = 0x36ec64u;
    // NOP
label_36ec68:
    // 0x36ec68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ec6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ec70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ec74: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ec78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ec7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ec7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec80: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ec80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ec84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ec84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ec88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ec8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ec90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec94: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EC94u;
    SET_GPR_U32(ctx, 31, 0x36EC9Cu);
    ctx->pc = 0x36EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC94u;
    // 0x36ec98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EC94u, 0x36EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC9Cu;
label_36ec9c:
    // 0x36ec9c: 0xc0f333c  jal         func_3CCCF0
    ctx->pc = 0x36EC9Cu;
    SET_GPR_U32(ctx, 31, 0x36ECA4u);
    ctx->pc = 0x36ECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC9Cu;
    // 0x36eca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCCF0u, 0x36EC9Cu, 0x36ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECA4u;
label_36eca4:
    // 0x36eca4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x36ECA4u;
    {
        const bool branch_taken_0x36eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eca4) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36ECACu;
    // 0x36ecac: 0x0  nop
    ctx->pc = 0x36ecacu;
    // NOP
label_36ecb0:
    // 0x36ecb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ecb4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ecb8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ecbc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ecc0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ecc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ecc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecc8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ecc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36eccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ecccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ecd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ecd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ecd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ecdc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36ECDCu;
    SET_GPR_U32(ctx, 31, 0x36ECE4u);
    ctx->pc = 0x36ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ECDCu;
    // 0x36ece0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36ECDCu, 0x36ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECE4u;
label_36ece4:
    // 0x36ece4: 0xc0dbc08  jal         func_36F020
    ctx->pc = 0x36ECE4u;
    SET_GPR_U32(ctx, 31, 0x36ECECu);
    ctx->pc = 0x36ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ECE4u;
    // 0x36ece8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F020u, 0x36ECE4u, 0x36ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECECu;
label_36ecec:
    // 0x36ecec: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x36ECECu;
    {
        const bool branch_taken_0x36ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ecec) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36ECF4u;
    // 0x36ecf4: 0x0  nop
    ctx->pc = 0x36ecf4u;
    // NOP
label_36ecf8:
    // 0x36ecf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36ecfc: 0xa202001d  sb          $v0, 0x1D($s0)
    ctx->pc = 0x36ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ed00: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ed04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ed08: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ed0c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ed10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ed10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed14: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ed18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ed18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed1c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ed1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ed20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ed20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ed24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ed28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed2c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36ED2Cu;
    SET_GPR_U32(ctx, 31, 0x36ED34u);
    ctx->pc = 0x36ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED2Cu;
    // 0x36ed30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36ED2Cu, 0x36ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED34u;
label_36ed34:
    // 0x36ed34: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36ED34u;
    SET_GPR_U32(ctx, 31, 0x36ED3Cu);
    ctx->pc = 0x36ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED34u;
    // 0x36ed38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36ED34u, 0x36ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED3Cu;
label_36ed3c:
    // 0x36ed3c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x36ED3Cu;
    {
        const bool branch_taken_0x36ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ed3c) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36ED44u;
    // 0x36ed44: 0x0  nop
    ctx->pc = 0x36ed44u;
    // NOP
label_36ed48:
    // 0x36ed48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36ed48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36ed4c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x36ed4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x36ed50: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ed54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ed58: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ed5c: 0xa202001d  sb          $v0, 0x1D($s0)
    ctx->pc = 0x36ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ed60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ed60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed64: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ed68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ed68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed6c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ed70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ed70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed74: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ed74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ed78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ed78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ed7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed80: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36ED80u;
    SET_GPR_U32(ctx, 31, 0x36ED88u);
    ctx->pc = 0x36ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED80u;
    // 0x36ed84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36ED80u, 0x36ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED88u;
label_36ed88:
    // 0x36ed88: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36ED88u;
    SET_GPR_U32(ctx, 31, 0x36ED90u);
    ctx->pc = 0x36ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ED88u;
    // 0x36ed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36ED88u, 0x36ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ED90u;
label_36ed90:
    // 0x36ed90: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x36ED90u;
    {
        const bool branch_taken_0x36ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ed90) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36ED98u;
label_36ed98:
    // 0x36ed98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ed9c: 0xa202001d  sb          $v0, 0x1D($s0)
    ctx->pc = 0x36ed9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x36eda0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36eda4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36eda8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36edac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36edacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36edb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36edb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edb4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36edb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36edb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edbc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36edbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36edc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36edc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36edc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36edc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edcc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EDCCu;
    SET_GPR_U32(ctx, 31, 0x36EDD4u);
    ctx->pc = 0x36EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EDCCu;
    // 0x36edd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EDCCu, 0x36EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDD4u;
label_36edd4:
    // 0x36edd4: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36EDD4u;
    SET_GPR_U32(ctx, 31, 0x36EDDCu);
    ctx->pc = 0x36EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EDD4u;
    // 0x36edd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36EDD4u, 0x36EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EDDCu;
label_36eddc:
    // 0x36eddc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x36EDDCu;
    {
        const bool branch_taken_0x36eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36eddc) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36EDE4u;
    // 0x36ede4: 0x0  nop
    ctx->pc = 0x36ede4u;
    // NOP
label_36ede8:
    // 0x36ede8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36edec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36edecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36edf0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36edf4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36edf8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36edfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36edfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee00: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ee00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ee04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ee04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ee08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ee0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ee10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EE14u;
    SET_GPR_U32(ctx, 31, 0x36EE1Cu);
    ctx->pc = 0x36EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE14u;
    // 0x36ee18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EE14u, 0x36EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE1Cu;
label_36ee1c:
    // 0x36ee1c: 0xc0d9fdc  jal         func_367F70
    ctx->pc = 0x36EE1Cu;
    SET_GPR_U32(ctx, 31, 0x36EE24u);
    ctx->pc = 0x36EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE1Cu;
    // 0x36ee20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367F70u, 0x36EE1Cu, 0x36EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE24u;
label_36ee24:
    // 0x36ee24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x36EE24u;
    {
        const bool branch_taken_0x36ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ee24) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36EE2Cu;
    // 0x36ee2c: 0x0  nop
    ctx->pc = 0x36ee2cu;
    // NOP
label_36ee30:
    // 0x36ee30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ee34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ee38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ee3c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ee40: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ee44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ee44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee48: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ee48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ee4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ee4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ee50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ee54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ee58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EE5Cu;
    SET_GPR_U32(ctx, 31, 0x36EE64u);
    ctx->pc = 0x36EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE5Cu;
    // 0x36ee60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EE5Cu, 0x36EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE64u;
label_36ee64:
    // 0x36ee64: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36EE64u;
    SET_GPR_U32(ctx, 31, 0x36EE6Cu);
    ctx->pc = 0x36EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EE64u;
    // 0x36ee68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36EE64u, 0x36EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EE6Cu;
label_36ee6c:
    // 0x36ee6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36EE6Cu;
    {
        const bool branch_taken_0x36ee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ee6c) {
            ctx->pc = 0x36EEB8u;
            goto label_36eeb8;
        }
    }
    ctx->pc = 0x36EE74u;
    // 0x36ee74: 0x0  nop
    ctx->pc = 0x36ee74u;
    // NOP
label_36ee78:
    // 0x36ee78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ee7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ee80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ee84: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36ee88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ee8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ee8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee90: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ee90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ee94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ee94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ee98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ee9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ee9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eea0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36eea0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eea4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36EEA4u;
    SET_GPR_U32(ctx, 31, 0x36EEACu);
    ctx->pc = 0x36EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EEA4u;
    // 0x36eea8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36EEA4u, 0x36EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEACu;
label_36eeac:
    // 0x36eeac: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36EEACu;
    SET_GPR_U32(ctx, 31, 0x36EEB4u);
    ctx->pc = 0x36EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EEACu;
    // 0x36eeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36EEACu, 0x36EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEB4u;
label_36eeb4:
    // 0x36eeb4: 0x0  nop
    ctx->pc = 0x36eeb4u;
    // NOP
label_36eeb8:
    // 0x36eeb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36eeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36eebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36eebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36eec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36eec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36eec4: 0x3e00008  jr          $ra
    ctx->pc = 0x36EEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEC4u;
        // 0x36eec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EECCu;
}
