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

// Function: sub_002E8C90
// Address: 0x2e8c90 - 0x2e8f8c
void sub_002E8C90_0x2e8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8C90_0x2e8c90");
#endif

    switch (ctx->pc) {
        case 0x2e8d00u: goto label_2e8d00;
        case 0x2e8d30u: goto label_2e8d30;
        case 0x2e8e18u: goto label_2e8e18;
        case 0x2e8ea8u: goto label_2e8ea8;
        case 0x2e8f34u: goto label_2e8f34;
        default: break;
    }

    ctx->pc = 0x2e8c90u;

    // 0x2e8c90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8c98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e8c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e8c9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e8c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e8ca0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e8ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e8ca4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e8ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e8ca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e8ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cb8: 0x80840229  lb          $a0, 0x229($a0)
    ctx->pc = 0x2e8cb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 553)));
    // 0x2e8cbc: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2E8CBCu;
    {
        const bool branch_taken_0x2e8cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CBCu;
        // 0x2e8cc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8cbc) {
            ctx->pc = 0x2E8DE0u;
            goto label_2e8de0;
        }
    }
    ctx->pc = 0x2E8CC4u;
    // 0x2e8cc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8cc8: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2E8CC8u;
    {
        const bool branch_taken_0x2e8cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8cc8) {
            ctx->pc = 0x2E8DA0u;
            goto label_2e8da0;
        }
    }
    ctx->pc = 0x2E8CD0u;
    // 0x2e8cd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8CD0u;
    {
        const bool branch_taken_0x2e8cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cd0) {
            ctx->pc = 0x2E8CE0u;
            goto label_2e8ce0;
        }
    }
    ctx->pc = 0x2E8CD8u;
    // 0x2e8cd8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2E8CD8u;
    {
        const bool branch_taken_0x2e8cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8cd8) {
            ctx->pc = 0x2E8F68u;
            goto label_2e8f68;
        }
    }
    ctx->pc = 0x2E8CE0u;
label_2e8ce0:
    // 0x2e8ce0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2e8ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2e8ce4: 0x8c22cc34  lw          $v0, -0x33CC($at)
    ctx->pc = 0x2e8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x82CC34u));
    // 0x2e8ce8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e8ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e8cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cf0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e8cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e8cf4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2e8cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2e8cf8: 0xac22cc34  sw          $v0, -0x33CC($at)
    ctx->pc = 0x2e8cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x2e8cfc: 0x0  nop
    ctx->pc = 0x2e8cfcu;
    // NOP
label_2e8d00:
    // 0x2e8d00: 0x82020228  lb          $v0, 0x228($s0)
    ctx->pc = 0x2e8d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2e8d04: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8D04u;
    {
        const bool branch_taken_0x2e8d04 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2E8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D04u;
        // 0x2e8d08: 0x32640001  andi        $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d04) {
            ctx->pc = 0x2E8D20u;
            goto label_2e8d20;
        }
    }
    ctx->pc = 0x2E8D0Cu;
    // 0x2e8d0c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2e8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2e8d10: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x2e8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x2e8d14: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x2e8d14u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2e8d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8D18u;
    {
        const bool branch_taken_0x2e8d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D18u;
        // 0x2e8d1c: 0xa6230168  sh          $v1, 0x168($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d18) {
            ctx->pc = 0x2E8D28u;
            goto label_2e8d28;
        }
    }
    ctx->pc = 0x2E8D20u;
label_2e8d20:
    // 0x2e8d20: 0xa6200168  sh          $zero, 0x168($s1)
    ctx->pc = 0x2e8d20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e8d24: 0x0  nop
    ctx->pc = 0x2e8d24u;
    // NOP
label_2e8d28:
    // 0x2e8d28: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x2E8D28u;
    SET_GPR_U32(ctx, 31, 0x2E8D30u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x2E8D28u, 0x2E8D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8D30u;
label_2e8d30:
    // 0x2e8d30: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2e8d30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e8d34: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x2e8d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2e8d38: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2e8d38u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2e8d3c: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x2e8d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2e8d40: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2e8d40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2e8d44: 0x30e5000f  andi        $a1, $a3, 0xF
    ctx->pc = 0x2e8d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2e8d48: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x2e8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e8d4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e8d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e8d50: 0xa62301a8  sh          $v1, 0x1A8($s1)
    ctx->pc = 0x2e8d50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 424), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e8d54: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x2e8d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x2e8d58: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x2e8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2e8d5c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2e8d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2e8d60: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x2e8d60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8d64: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x2e8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2e8d68: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x2e8d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e8d6c: 0x71c02  srl         $v1, $a3, 16
    ctx->pc = 0x2e8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2e8d70: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2e8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e8d74: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2e8d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2e8d78: 0xa0c401e8  sb          $a0, 0x1E8($a2)
    ctx->pc = 0x2e8d78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 488), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e8d7c: 0xa0c30208  sb          $v1, 0x208($a2)
    ctx->pc = 0x2e8d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 520), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8d80: 0x2a630020  slti        $v1, $s3, 0x20
    ctx->pc = 0x2e8d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e8d84: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E8D84u;
    {
        const bool branch_taken_0x2e8d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D84u;
        // 0x2e8d88: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d84) {
            ctx->pc = 0x2E8D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8d00;
        }
    }
    ctx->pc = 0x2E8D8Cu;
    // 0x2e8d8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8d90: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x2e8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2e8d94: 0xa2040229  sb          $a0, 0x229($s0)
    ctx->pc = 0x2e8d94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 553), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e8d98: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2E8D98u;
    {
        const bool branch_taken_0x2e8d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D98u;
        // 0x2e8d9c: 0xa203022a  sb          $v1, 0x22A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 554), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8d98) {
            ctx->pc = 0x2E8F68u;
            goto label_2e8f68;
        }
    }
    ctx->pc = 0x2E8DA0u;
label_2e8da0:
    // 0x2e8da0: 0x82030228  lb          $v1, 0x228($s0)
    ctx->pc = 0x2e8da0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2e8da4: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E8DA4u;
    {
        const bool branch_taken_0x2e8da4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e8da4) {
            ctx->pc = 0x2E8DE0u;
            goto label_2e8de0;
        }
    }
    ctx->pc = 0x2E8DACu;
    // 0x2e8dac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e8dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8db0: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x2e8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2e8db4: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2e8db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2e8db8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2e8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e8dbc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2e8dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2e8dc0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2e8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2e8dc4: 0xa2000229  sb          $zero, 0x229($s0)
    ctx->pc = 0x2e8dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 553), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8dc8: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x2e8dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
    // 0x2e8dcc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e8dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e8dd0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2e8dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2e8dd4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2E8DD4u;
    {
        const bool branch_taken_0x2e8dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DD4u;
        // 0x2e8dd8: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dd4) {
            ctx->pc = 0x2E8F68u;
            goto label_2e8f68;
        }
    }
    ctx->pc = 0x2E8DDCu;
    // 0x2e8ddc: 0x0  nop
    ctx->pc = 0x2e8ddcu;
    // NOP
label_2e8de0:
    // 0x2e8de0: 0x82020228  lb          $v0, 0x228($s0)
    ctx->pc = 0x2e8de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2e8de4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8DE4u;
    {
        const bool branch_taken_0x2e8de4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2E8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DE4u;
        // 0x2e8de8: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8de4) {
            ctx->pc = 0x2E8DF8u;
            goto label_2e8df8;
        }
    }
    ctx->pc = 0x2E8DECu;
    // 0x2e8dec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8DECu;
    {
        const bool branch_taken_0x2e8dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8DECu;
        // 0x2e8df0: 0x2402ffeb  addiu       $v0, $zero, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dec) {
            ctx->pc = 0x2E8E00u;
            goto label_2e8e00;
        }
    }
    ctx->pc = 0x2E8DF4u;
    // 0x2e8df4: 0x0  nop
    ctx->pc = 0x2e8df4u;
    // NOP
label_2e8df8:
    // 0x2e8df8: 0x2403ffeb  addiu       $v1, $zero, -0x15
    ctx->pc = 0x2e8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
    // 0x2e8dfc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2e8e00:
    // 0x2e8e00: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x2e8e00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2e8e04: 0x39e3c  dsll32      $s3, $v1, 24
    ctx->pc = 0x2e8e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2e8e08: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x2e8e08u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x2e8e0c: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x2e8e0cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x2e8e10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e8e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e14: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2e8e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8e18:
    // 0x2e8e18: 0x2119021  addu        $s2, $s0, $s1
    ctx->pc = 0x2e8e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e8e1c: 0x82420208  lb          $v0, 0x208($s2)
    ctx->pc = 0x2e8e1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x2e8e20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8E20u;
    {
        const bool branch_taken_0x2e8e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E20u;
        // 0x2e8e24: 0x26430208  addiu       $v1, $s2, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e20) {
            ctx->pc = 0x2E8E38u;
            goto label_2e8e38;
        }
    }
    ctx->pc = 0x2E8E28u;
    // 0x2e8e28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e8e2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2E8E2Cu;
    {
        const bool branch_taken_0x2e8e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E2Cu;
        // 0x2e8e30: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e2c) {
            ctx->pc = 0x2E8E98u;
            goto label_2e8e98;
        }
    }
    ctx->pc = 0x2E8E34u;
    // 0x2e8e34: 0x0  nop
    ctx->pc = 0x2e8e34u;
    // NOP
label_2e8e38:
    // 0x2e8e38: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2e8e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2e8e3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8E3Cu;
    {
        const bool branch_taken_0x2e8e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8e3c) {
            ctx->pc = 0x2E8E70u;
            goto label_2e8e70;
        }
    }
    ctx->pc = 0x2E8E44u;
    // 0x2e8e44: 0x86a20168  lh          $v0, 0x168($s5)
    ctx->pc = 0x2e8e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x2e8e48: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2e8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e8e4c: 0xa6a20168  sh          $v0, 0x168($s5)
    ctx->pc = 0x2e8e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e8e50: 0x82020228  lb          $v0, 0x228($s0)
    ctx->pc = 0x2e8e50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2e8e54: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8E54u;
    {
        const bool branch_taken_0x2e8e54 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2e8e54) {
            ctx->pc = 0x2E8E98u;
            goto label_2e8e98;
        }
    }
    ctx->pc = 0x2E8E5Cu;
    // 0x2e8e5c: 0x86a20168  lh          $v0, 0x168($s5)
    ctx->pc = 0x2e8e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x2e8e60: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8E60u;
    {
        const bool branch_taken_0x2e8e60 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2e8e60) {
            ctx->pc = 0x2E8E98u;
            goto label_2e8e98;
        }
    }
    ctx->pc = 0x2E8E68u;
    // 0x2e8e68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E8E68u;
    {
        const bool branch_taken_0x2e8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E68u;
        // 0x2e8e6c: 0xa6a00168  sh          $zero, 0x168($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 360), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e68) {
            ctx->pc = 0x2E8E98u;
            goto label_2e8e98;
        }
    }
    ctx->pc = 0x2E8E70u;
label_2e8e70:
    // 0x2e8e70: 0x86a20168  lh          $v0, 0x168($s5)
    ctx->pc = 0x2e8e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x2e8e74: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2e8e78: 0xa6a20168  sh          $v0, 0x168($s5)
    ctx->pc = 0x2e8e78u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 360), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e8e7c: 0x82020228  lb          $v0, 0x228($s0)
    ctx->pc = 0x2e8e7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x2e8e80: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8E80u;
    {
        const bool branch_taken_0x2e8e80 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2e8e80) {
            ctx->pc = 0x2E8E98u;
            goto label_2e8e98;
        }
    }
    ctx->pc = 0x2E8E88u;
    // 0x2e8e88: 0x86a20168  lh          $v0, 0x168($s5)
    ctx->pc = 0x2e8e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x2e8e8c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8E8Cu;
    {
        const bool branch_taken_0x2e8e8c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2e8e8c) {
            ctx->pc = 0x2E8E98u;
            goto label_2e8e98;
        }
    }
    ctx->pc = 0x2E8E94u;
    // 0x2e8e94: 0xa6a00168  sh          $zero, 0x168($s5)
    ctx->pc = 0x2e8e94u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 360), (uint16_t)GPR_U32(ctx, 0));
label_2e8e98:
    // 0x2e8e98: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e8e9c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2e8e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2e8ea0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2E8EA0u;
    SET_GPR_U32(ctx, 31, 0x2E8EA8u);
    ctx->pc = 0x2E8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8EA0u;
    // 0x2e8ea4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2E8EA0u, 0x2E8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8EA8u;
label_2e8ea8:
    // 0x2e8ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e8ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8eac: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E8EACu;
    {
        const bool branch_taken_0x2e8eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8eac) {
            ctx->pc = 0x2E8F38u;
            goto label_2e8f38;
        }
    }
    ctx->pc = 0x2E8EB4u;
    // 0x2e8eb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e8eb8: 0x3c031818  lui         $v1, 0x1818
    ctx->pc = 0x2e8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6168 << 16));
    // 0x2e8ebc: 0x34630046  ori         $v1, $v1, 0x46
    ctx->pc = 0x2e8ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)70);
    // 0x2e8ec0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e8ec4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2e8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2e8ec8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e8ecc: 0x86aa0168  lh          $t2, 0x168($s5)
    ctx->pc = 0x2e8eccu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 360)));
    // 0x2e8ed0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2e8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2e8ed4: 0x86a901a8  lh          $t1, 0x1A8($s5)
    ctx->pc = 0x2e8ed4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 424)));
    // 0x2e8ed8: 0x34672000  ori         $a3, $v1, 0x2000
    ctx->pc = 0x2e8ed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2e8edc: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2e8edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e8ee0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e8ee4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2e8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2e8ee8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2e8ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8eec: 0x254a0700  addiu       $t2, $t2, 0x700
    ctx->pc = 0x2e8eecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1792));
    // 0x2e8ef0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2e8ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2e8ef4: 0x25290f20  addiu       $t1, $t1, 0xF20
    ctx->pc = 0x2e8ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3872));
    // 0x2e8ef8: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x2e8ef8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2e8efc: 0x94cc0  sll         $t1, $t1, 19
    ctx->pc = 0x2e8efcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 19));
    // 0x2e8f00: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2e8f00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2e8f04: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x2e8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
    // 0x2e8f08: 0xaca80014  sw          $t0, 0x14($a1)
    ctx->pc = 0x2e8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
    // 0x2e8f0c: 0x824801e8  lb          $t0, 0x1E8($s2)
    ctx->pc = 0x2e8f0cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x2e8f10: 0x84500  sll         $t0, $t0, 20
    ctx->pc = 0x2e8f10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x2e8f14: 0x35082000  ori         $t0, $t0, 0x2000
    ctx->pc = 0x2e8f14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8192);
    // 0x2e8f18: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x2e8f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x2e8f1c: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x2e8f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e8f20: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2e8f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2e8f24: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x2e8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x2e8f28: 0xa0a3000f  sb          $v1, 0xF($a1)
    ctx->pc = 0x2e8f28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8f2c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2E8F2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8F34u);
    ctx->pc = 0x2E8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F2Cu;
    // 0x2e8f30: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2E8F2Cu, 0x2E8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F34u;
label_2e8f34:
    // 0x2e8f34: 0x0  nop
    ctx->pc = 0x2e8f34u;
    // NOP
label_2e8f38:
    // 0x2e8f38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e8f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e8f3c: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x2e8f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e8f40: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2E8F40u;
    {
        const bool branch_taken_0x2e8f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F40u;
        // 0x2e8f44: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f40) {
            ctx->pc = 0x2E8E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8e18;
        }
    }
    ctx->pc = 0x2E8F48u;
    // 0x2e8f48: 0x9203022a  lbu         $v1, 0x22A($s0)
    ctx->pc = 0x2e8f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x2e8f4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e8f50: 0xa203022a  sb          $v1, 0x22A($s0)
    ctx->pc = 0x2e8f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 554), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8f54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e8f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e8f58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8F58u;
    {
        const bool branch_taken_0x2e8f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F58u;
        // 0x2e8f5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f58) {
            ctx->pc = 0x2E8F68u;
            goto label_2e8f68;
        }
    }
    ctx->pc = 0x2E8F60u;
    // 0x2e8f60: 0xa2030229  sb          $v1, 0x229($s0)
    ctx->pc = 0x2e8f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 553), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8f64: 0x0  nop
    ctx->pc = 0x2e8f64u;
    // NOP
label_2e8f68:
    // 0x2e8f68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e8f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8f6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e8f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8f70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e8f70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8f74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e8f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8f78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e8f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8f84: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F84u;
        // 0x2e8f88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8F8Cu;
}
