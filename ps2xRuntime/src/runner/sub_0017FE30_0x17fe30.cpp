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

// Function: sub_0017FE30
// Address: 0x17fe30 - 0x180300
void sub_0017FE30_0x17fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FE30_0x17fe30");
#endif

    switch (ctx->pc) {
        case 0x17fee4u: goto label_17fee4;
        case 0x17ff18u: goto label_17ff18;
        case 0x17ffa0u: goto label_17ffa0;
        case 0x180068u: goto label_180068;
        case 0x1800b8u: goto label_1800b8;
        case 0x1800e4u: goto label_1800e4;
        case 0x180110u: goto label_180110;
        case 0x18014cu: goto label_18014c;
        case 0x180178u: goto label_180178;
        case 0x1801b4u: goto label_1801b4;
        case 0x1801e0u: goto label_1801e0;
        case 0x18021cu: goto label_18021c;
        case 0x180248u: goto label_180248;
        default: break;
    }

    ctx->pc = 0x17fe30u;

    // 0x17fe30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17fe34: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17fe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17fe38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17fe3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17fe40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17fe44: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17fe48: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x17fe48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17fe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17fe50: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17fe50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17fe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17fe58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17fe58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fe60: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17fe60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fe64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fe68: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17fe68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fe70: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x17fe70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fe78: 0x106200c5  beq         $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x17FE78u;
    {
        const bool branch_taken_0x17fe78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE78u;
        // 0x17fe7c: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe78) {
            ctx->pc = 0x180190u;
            goto label_180190;
        }
    }
    ctx->pc = 0x17FE80u;
    // 0x17fe80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17fe84: 0x106200a8  beq         $v1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x17FE84u;
    {
        const bool branch_taken_0x17fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE84u;
        // 0x17fe88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe84) {
            ctx->pc = 0x180128u;
            goto label_180128;
        }
    }
    ctx->pc = 0x17FE8Cu;
    // 0x17fe8c: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x17FE8Cu;
    {
        const bool branch_taken_0x17fe8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17fe8c) {
            ctx->pc = 0x1800C0u;
            goto label_1800c0;
        }
    }
    ctx->pc = 0x17FE94u;
    // 0x17fe94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fe98: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17FE98u;
    {
        const bool branch_taken_0x17fe98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17fe98) {
            ctx->pc = 0x17FEC0u;
            goto label_17fec0;
        }
    }
    ctx->pc = 0x17FEA0u;
    // 0x17fea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FEA0u;
    {
        const bool branch_taken_0x17fea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fea0) {
            ctx->pc = 0x17FEB0u;
            goto label_17feb0;
        }
    }
    ctx->pc = 0x17FEA8u;
    // 0x17fea8: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x17FEA8u;
    {
        const bool branch_taken_0x17fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fea8) {
            ctx->pc = 0x1801F0u;
            goto label_1801f0;
        }
    }
    ctx->pc = 0x17FEB0u;
label_17feb0:
    // 0x17feb0: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x17feb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
    // 0x17feb4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x17FEB4u;
    {
        const bool branch_taken_0x17feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEB4u;
        // 0x17feb8: 0xaea00054  sw          $zero, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17feb4) {
            ctx->pc = 0x1801F0u;
            goto label_1801f0;
        }
    }
    ctx->pc = 0x17FEBCu;
    // 0x17febc: 0x0  nop
    ctx->pc = 0x17febcu;
    // NOP
label_17fec0:
    // 0x17fec0: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x17fec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x17fec4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FEC4u;
    {
        const bool branch_taken_0x17fec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEC4u;
        // 0x17fec8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fec4) {
            ctx->pc = 0x17FED8u;
            goto label_17fed8;
        }
    }
    ctx->pc = 0x17FECCu;
    // 0x17fecc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17feccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fed0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17fed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17fed4: 0x0  nop
    ctx->pc = 0x17fed4u;
    // NOP
label_17fed8:
    // 0x17fed8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x17fedc: 0xc05e664  jal         func_179990
    ctx->pc = 0x17FEDCu;
    SET_GPR_U32(ctx, 31, 0x17FEE4u);
    ctx->pc = 0x17FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FEDCu;
    // 0x17fee0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x17FEDCu, 0x17FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FEE4u;
label_17fee4:
    // 0x17fee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17fee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fee8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17FEE8u;
    {
        const bool branch_taken_0x17fee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEE8u;
        // 0x17feec: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fee8) {
            ctx->pc = 0x17FF08u;
            goto label_17ff08;
        }
    }
    ctx->pc = 0x17FEF0u;
    // 0x17fef0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x17fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x17fef4: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x17fef8: 0x24426080  addiu       $v0, $v0, 0x6080
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
    // 0x17fefc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17ff00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17ff04: 0x0  nop
    ctx->pc = 0x17ff04u;
    // NOP
label_17ff08:
    // 0x17ff08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17ff0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff10: 0xc060a50  jal         func_182940
    ctx->pc = 0x17FF10u;
    SET_GPR_U32(ctx, 31, 0x17FF18u);
    ctx->pc = 0x17FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF10u;
    // 0x17ff14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182940u, 0x17FF10u, 0x17FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF18u;
label_17ff18:
    // 0x17ff18: 0xaeb00054  sw          $s0, 0x54($s5)
    ctx->pc = 0x17ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 16));
    // 0x17ff1c: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x17ff1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x17ff20: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x17ff24: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x17ff24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x17ff28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FF28u;
    {
        const bool branch_taken_0x17ff28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF28u;
        // 0x17ff2c: 0xa05400ce  sb          $s4, 0xCE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 206), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff28) {
            ctx->pc = 0x17FF40u;
            goto label_17ff40;
        }
    }
    ctx->pc = 0x17FF30u;
    // 0x17ff30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17ff34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff38: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ff3c: 0x0  nop
    ctx->pc = 0x17ff3cu;
    // NOP
label_17ff40:
    // 0x17ff40: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x17ff40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x17ff44: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17ff48: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x17ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x17ff4c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x17ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17ff50: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ff54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ff58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17ff5c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17ff5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ff60: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x17ff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x17ff64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FF64u;
    {
        const bool branch_taken_0x17ff64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF64u;
        // 0x17ff68: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff64) {
            ctx->pc = 0x17FF78u;
            goto label_17ff78;
        }
    }
    ctx->pc = 0x17FF6Cu;
    // 0x17ff6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff70: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17ff70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ff74: 0x0  nop
    ctx->pc = 0x17ff74u;
    // NOP
label_17ff78:
    // 0x17ff78: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x17ff78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17ff7c: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x17FF7Cu;
    {
        const bool branch_taken_0x17ff7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF7Cu;
        // 0x17ff80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff7c) {
            ctx->pc = 0x180088u;
            goto label_180088;
        }
    }
    ctx->pc = 0x17FF84u;
    // 0x17ff84: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x17ff84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x17ff88: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x17FF88u;
    {
        const bool branch_taken_0x17ff88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF88u;
        // 0x17ff8c: 0x2485fff8  addiu       $a1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff88) {
            ctx->pc = 0x180040u;
            goto label_180040;
        }
    }
    ctx->pc = 0x17FF90u;
    // 0x17ff90: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x17ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17ff94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17ff94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff98: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
label_17ffa0:
    // 0x17ffa0: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x17ffa4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x17ffa8: 0x24687fff  addiu       $t0, $v1, 0x7FFF
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x17ffac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17ffb0: 0xc5382b  sltu        $a3, $a2, $a1
    ctx->pc = 0x17ffb0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17ffb4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x17ffb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17ffb8: 0xad3111c0  sw          $s1, 0x11C0($t1)
    ctx->pc = 0x17ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4544), GPR_U32(ctx, 17));
    // 0x17ffbc: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x17ffc0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ffc4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17ffc8: 0xad3123d0  sw          $s1, 0x23D0($t1)
    ctx->pc = 0x17ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 9168), GPR_U32(ctx, 17));
    // 0x17ffcc: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x17ffd0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ffd4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x17ffd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17ffd8: 0xad3135e0  sw          $s1, 0x35E0($t1)
    ctx->pc = 0x17ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 13792), GPR_U32(ctx, 17));
    // 0x17ffdc: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x17ffdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x17ffe0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ffe4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x17ffe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17ffe8: 0xad3147f0  sw          $s1, 0x47F0($t1)
    ctx->pc = 0x17ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 18416), GPR_U32(ctx, 17));
    // 0x17ffec: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x17ffecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x17fff0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x17fff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17fff4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17fff8: 0xad315a00  sw          $s1, 0x5A00($t1)
    ctx->pc = 0x17fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 23040), GPR_U32(ctx, 17));
    // 0x17fffc: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x180000: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x180000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x180004: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x180004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180008: 0xad316c10  sw          $s1, 0x6C10($t1)
    ctx->pc = 0x180008u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 27664), GPR_U32(ctx, 17));
    // 0x18000c: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x180010: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x180010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x180014: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x180014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180018: 0xad317e20  sw          $s1, 0x7E20($t1)
    ctx->pc = 0x180018u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32288), GPR_U32(ctx, 17));
    // 0x18001c: 0x8e0901e0  lw          $t1, 0x1E0($s0)
    ctx->pc = 0x18001cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x180020: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x180024: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x180024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180028: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x180028u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x18002c: 0xac319030  sw          $s1, -0x6FD0($at)
    ctx->pc = 0x18002cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 17));
    // 0x180030: 0x25031081  addiu       $v1, $t0, 0x1081
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4225));
    // 0x180034: 0x14e0ffda  bnez        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x180034u;
    {
        const bool branch_taken_0x180034 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x180038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180034u;
        // 0x180038: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180034) {
            ctx->pc = 0x17FFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ffa0;
        }
    }
    ctx->pc = 0x18003Cu;
    // 0x18003c: 0x0  nop
    ctx->pc = 0x18003cu;
    // NOP
label_180040:
    // 0x180040: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x180040u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x180044: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x180044u;
    {
        const bool branch_taken_0x180044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x180048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180044u;
        // 0x180048: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180044) {
            ctx->pc = 0x180088u;
            goto label_180088;
        }
    }
    ctx->pc = 0x18004Cu;
    // 0x18004c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x180050: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180054: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x180054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x180058: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x180058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18005c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180060: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x180060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x180064: 0x0  nop
    ctx->pc = 0x180064u;
    // NOP
label_180068:
    // 0x180068: 0x8e0301e0  lw          $v1, 0x1E0($s0)
    ctx->pc = 0x180068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x18006c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x180070: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x180070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x180074: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180078: 0xac7111c0  sw          $s1, 0x11C0($v1)
    ctx->pc = 0x180078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4544), GPR_U32(ctx, 17));
    // 0x18007c: 0x24e71210  addiu       $a3, $a3, 0x1210
    ctx->pc = 0x18007cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4624));
    // 0x180080: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180080u;
    {
        const bool branch_taken_0x180080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180080u;
        // 0x180084: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180080) {
            ctx->pc = 0x180068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180068;
        }
    }
    ctx->pc = 0x180088u;
label_180088:
    // 0x180088: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x180088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x18008c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18008Cu;
    {
        const bool branch_taken_0x18008c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18008Cu;
        // 0x180090: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18008c) {
            ctx->pc = 0x1800A0u;
            goto label_1800a0;
        }
    }
    ctx->pc = 0x180094u;
    // 0x180094: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180098: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18009c: 0x0  nop
    ctx->pc = 0x18009cu;
    // NOP
label_1800a0:
    // 0x1800a0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1800a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1800a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1800a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1800a8: 0xae1101e4  sw          $s1, 0x1E4($s0)
    ctx->pc = 0x1800a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 17));
    // 0x1800ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1800acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1800b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1800b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1800b4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1800b8:
    if (ctx->pc == 0x1800B8u) {
        ctx->pc = 0x1800B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B4u;
        // 0x1800b8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1800BCu;
        goto label_fallthrough_0x1800b4;
    }
    ctx->pc = 0x1800B4u;
    {
        const bool branch_taken_0x1800b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800B4u;
        // 0x1800b8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800b4) {
            ctx->pc = 0x1801F0u;
            goto label_1801f0;
        }
    }
label_fallthrough_0x1800b4:
    ctx->pc = 0x1800BCu;
    // 0x1800bc: 0x0  nop
    ctx->pc = 0x1800bcu;
    // NOP
label_1800c0:
    // 0x1800c0: 0x32c30003  andi        $v1, $s6, 0x3
    ctx->pc = 0x1800c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x1800c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1800C4u;
    {
        const bool branch_taken_0x1800c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800C4u;
        // 0x1800c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800c4) {
            ctx->pc = 0x1800D8u;
            goto label_1800d8;
        }
    }
    ctx->pc = 0x1800CCu;
    // 0x1800cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1800ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1800d0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1800d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1800d4: 0x0  nop
    ctx->pc = 0x1800d4u;
    // NOP
label_1800d8:
    // 0x1800d8: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1800dc: 0xc05e664  jal         func_179990
    ctx->pc = 0x1800DCu;
    SET_GPR_U32(ctx, 31, 0x1800E4u);
    ctx->pc = 0x1800E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800DCu;
    // 0x1800e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x1800DCu, 0x1800E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800E4u;
label_1800e4:
    // 0x1800e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1800e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1800E8u;
    {
        const bool branch_taken_0x1800e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1800ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800E8u;
        // 0x1800ec: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800e8) {
            ctx->pc = 0x180108u;
            goto label_180108;
        }
    }
    ctx->pc = 0x1800F0u;
    // 0x1800f0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1800f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1800f4: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x1800f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x1800f8: 0x24426060  addiu       $v0, $v0, 0x6060
    ctx->pc = 0x1800f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24672));
    // 0x1800fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1800fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x180100: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x180100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x180104: 0x0  nop
    ctx->pc = 0x180104u;
    // NOP
label_180108:
    // 0x180108: 0xc060854  jal         func_182150
    ctx->pc = 0x180108u;
    SET_GPR_U32(ctx, 31, 0x180110u);
    ctx->pc = 0x18010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180108u;
    // 0x18010c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182150u, 0x180108u, 0x180110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180110u;
label_180110:
    // 0x180110: 0xaeb00054  sw          $s0, 0x54($s5)
    ctx->pc = 0x180110u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 16));
    // 0x180114: 0x263100e0  addiu       $s1, $s1, 0xE0
    ctx->pc = 0x180114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x180118: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x18011c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18011Cu;
    {
        const bool branch_taken_0x18011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18011Cu;
        // 0x180120: 0xa05400ce  sb          $s4, 0xCE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 206), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18011c) {
            ctx->pc = 0x1801F0u;
            goto label_1801f0;
        }
    }
    ctx->pc = 0x180124u;
    // 0x180124: 0x0  nop
    ctx->pc = 0x180124u;
    // NOP
label_180128:
    // 0x180128: 0x32c30003  andi        $v1, $s6, 0x3
    ctx->pc = 0x180128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x18012c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18012Cu;
    {
        const bool branch_taken_0x18012c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18012Cu;
        // 0x180130: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18012c) {
            ctx->pc = 0x180140u;
            goto label_180140;
        }
    }
    ctx->pc = 0x180134u;
    // 0x180134: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180138: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x180138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18013c: 0x0  nop
    ctx->pc = 0x18013cu;
    // NOP
label_180140:
    // 0x180140: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x180144: 0xc05e664  jal         func_179990
    ctx->pc = 0x180144u;
    SET_GPR_U32(ctx, 31, 0x18014Cu);
    ctx->pc = 0x180148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180144u;
    // 0x180148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x180144u, 0x18014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18014Cu;
label_18014c:
    // 0x18014c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18014cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180150: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180150u;
    {
        const bool branch_taken_0x180150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x180154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180150u;
        // 0x180154: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180150) {
            ctx->pc = 0x180170u;
            goto label_180170;
        }
    }
    ctx->pc = 0x180158u;
    // 0x180158: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x180158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x18015c: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x18015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x180160: 0x244260a0  addiu       $v0, $v0, 0x60A0
    ctx->pc = 0x180160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24736));
    // 0x180164: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x180164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x180168: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x180168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18016c: 0x0  nop
    ctx->pc = 0x18016cu;
    // NOP
label_180170:
    // 0x180170: 0xc07328c  jal         func_1CCA30
    ctx->pc = 0x180170u;
    SET_GPR_U32(ctx, 31, 0x180178u);
    ctx->pc = 0x180174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180170u;
    // 0x180174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA30u, 0x180170u, 0x180178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180178u;
label_180178:
    // 0x180178: 0xaeb00054  sw          $s0, 0x54($s5)
    ctx->pc = 0x180178u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 16));
    // 0x18017c: 0x263100e0  addiu       $s1, $s1, 0xE0
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x180180: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x180180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x180184: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x180184u;
    {
        const bool branch_taken_0x180184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180184u;
        // 0x180188: 0xa05400ce  sb          $s4, 0xCE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 206), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180184) {
            ctx->pc = 0x1801F0u;
            goto label_1801f0;
        }
    }
    ctx->pc = 0x18018Cu;
    // 0x18018c: 0x0  nop
    ctx->pc = 0x18018cu;
    // NOP
label_180190:
    // 0x180190: 0x32c30003  andi        $v1, $s6, 0x3
    ctx->pc = 0x180190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x180194: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x180194u;
    {
        const bool branch_taken_0x180194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180194u;
        // 0x180198: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180194) {
            ctx->pc = 0x1801A8u;
            goto label_1801a8;
        }
    }
    ctx->pc = 0x18019Cu;
    // 0x18019c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1801a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1801a4: 0x0  nop
    ctx->pc = 0x1801a4u;
    // NOP
label_1801a8:
    // 0x1801a8: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x1801a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x1801ac: 0xc05e664  jal         func_179990
    ctx->pc = 0x1801ACu;
    SET_GPR_U32(ctx, 31, 0x1801B4u);
    ctx->pc = 0x1801B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801ACu;
    // 0x1801b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x1801ACu, 0x1801B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801B4u;
label_1801b4:
    // 0x1801b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1801b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801b8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1801B8u;
    {
        const bool branch_taken_0x1801b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801B8u;
        // 0x1801bc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801b8) {
            ctx->pc = 0x1801D8u;
            goto label_1801d8;
        }
    }
    ctx->pc = 0x1801C0u;
    // 0x1801c0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1801c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1801c4: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x1801c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x1801c8: 0x24426020  addiu       $v0, $v0, 0x6020
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24608));
    // 0x1801cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1801ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1801d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1801d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1801d4: 0x0  nop
    ctx->pc = 0x1801d4u;
    // NOP
label_1801d8:
    // 0x1801d8: 0xc060424  jal         func_181090
    ctx->pc = 0x1801D8u;
    SET_GPR_U32(ctx, 31, 0x1801E0u);
    ctx->pc = 0x1801DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801D8u;
    // 0x1801dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181090u, 0x1801D8u, 0x1801E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801E0u;
label_1801e0:
    // 0x1801e0: 0xaeb00054  sw          $s0, 0x54($s5)
    ctx->pc = 0x1801e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 16));
    // 0x1801e4: 0x263101e0  addiu       $s1, $s1, 0x1E0
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1801e8: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x1801e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1801ec: 0xa05400ce  sb          $s4, 0xCE($v0)
    ctx->pc = 0x1801ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 206), (uint8_t)GPR_U32(ctx, 20));
label_1801f0:
    // 0x1801f0: 0x32f000ff  andi        $s0, $s7, 0xFF
    ctx->pc = 0x1801f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1801f4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1801f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1801f8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1801F8u;
    {
        const bool branch_taken_0x1801f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801F8u;
        // 0x1801fc: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801f8) {
            ctx->pc = 0x180260u;
            goto label_180260;
        }
    }
    ctx->pc = 0x180200u;
    // 0x180200: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180200u;
    {
        const bool branch_taken_0x180200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180200u;
        // 0x180204: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180200) {
            ctx->pc = 0x180210u;
            goto label_180210;
        }
    }
    ctx->pc = 0x180208u;
    // 0x180208: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18020c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_180210:
    // 0x180210: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x180210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x180214: 0xc05e664  jal         func_179990
    ctx->pc = 0x180214u;
    SET_GPR_U32(ctx, 31, 0x18021Cu);
    ctx->pc = 0x180218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180214u;
    // 0x180218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179990u, 0x180214u, 0x18021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18021Cu;
label_18021c:
    // 0x18021c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18021cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180220: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x180220u;
    {
        const bool branch_taken_0x180220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x180224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180220u;
        // 0x180224: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180220) {
            ctx->pc = 0x180240u;
            goto label_180240;
        }
    }
    ctx->pc = 0x180228u;
    // 0x180228: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x18022c: 0x24636000  addiu       $v1, $v1, 0x6000
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x180230: 0x24426040  addiu       $v0, $v0, 0x6040
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24640));
    // 0x180234: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x180234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x180238: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x180238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18023c: 0x0  nop
    ctx->pc = 0x18023cu;
    // NOP
label_180240:
    // 0x180240: 0xc0606a4  jal         func_181A90
    ctx->pc = 0x180240u;
    SET_GPR_U32(ctx, 31, 0x180248u);
    ctx->pc = 0x180244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180240u;
    // 0x180244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181A90u, 0x180240u, 0x180248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180248u;
label_180248:
    // 0x180248: 0xaeb20058  sw          $s2, 0x58($s5)
    ctx->pc = 0x180248u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 18));
    // 0x18024c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180250: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x180250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x180254: 0x263101f0  addiu       $s1, $s1, 0x1F0
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x180258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180258u;
    {
        const bool branch_taken_0x180258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180258u;
        // 0x18025c: 0xa04300ce  sb          $v1, 0xCE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 206), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180258) {
            ctx->pc = 0x180268u;
            goto label_180268;
        }
    }
    ctx->pc = 0x180260u;
label_180260:
    // 0x180260: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x180260u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x180264: 0x0  nop
    ctx->pc = 0x180264u;
    // NOP
label_180268:
    // 0x180268: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x180268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x18026c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18026Cu;
    {
        const bool branch_taken_0x18026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18026c) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180274u;
    // 0x180274: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x180274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x180278: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180278u;
    {
        const bool branch_taken_0x180278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180278u;
        // 0x18027c: 0x3224003f  andi        $a0, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180278) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180280u;
    // 0x180280: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180280u;
    {
        const bool branch_taken_0x180280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x180284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180280u;
        // 0x180284: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180280) {
            ctx->pc = 0x180290u;
            goto label_180290;
        }
    }
    ctx->pc = 0x180288u;
    // 0x180288: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18028c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x18028cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_180290:
    // 0x180290: 0xac710054  sw          $s1, 0x54($v1)
    ctx->pc = 0x180290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 17));
    // 0x180294: 0x26310290  addiu       $s1, $s1, 0x290
    ctx->pc = 0x180294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_180298:
    // 0x180298: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x180298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x18029c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18029Cu;
    {
        const bool branch_taken_0x18029c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18029c) {
            ctx->pc = 0x1802C8u;
            goto label_1802c8;
        }
    }
    ctx->pc = 0x1802A4u;
    // 0x1802a4: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1802a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1802A8u;
    {
        const bool branch_taken_0x1802a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802A8u;
        // 0x1802ac: 0x32240003  andi        $a0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802a8) {
            ctx->pc = 0x1802C8u;
            goto label_1802c8;
        }
    }
    ctx->pc = 0x1802B0u;
    // 0x1802b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1802B0u;
    {
        const bool branch_taken_0x1802b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802B0u;
        // 0x1802b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802b0) {
            ctx->pc = 0x1802C0u;
            goto label_1802c0;
        }
    }
    ctx->pc = 0x1802B8u;
    // 0x1802b8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1802b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1802bc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1802c0:
    // 0x1802c0: 0xac710050  sw          $s1, 0x50($v1)
    ctx->pc = 0x1802c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 17));
    // 0x1802c4: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x1802c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_1802c8:
    // 0x1802c8: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x1802c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x1802cc: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1802d0: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x1802d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x1802d4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1802d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1802d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1802d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1802dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1802dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1802e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1802e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1802e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1802e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1802e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1802e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1802ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1802ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1802f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1802f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1802f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1802f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1802f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1802F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1802FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802F8u;
        // 0x1802fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1802F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180300u;
}
