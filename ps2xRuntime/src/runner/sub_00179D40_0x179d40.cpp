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

// Function: sub_00179D40
// Address: 0x179d40 - 0x179ef8
void sub_00179D40_0x179d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179D40_0x179d40");
#endif

    switch (ctx->pc) {
        case 0x179da0u: goto label_179da0;
        case 0x179e5cu: goto label_179e5c;
        case 0x179ed4u: goto label_179ed4;
        default: break;
    }

    ctx->pc = 0x179d40u;

    // 0x179d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179d44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x179d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x179d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179d4c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x179d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x179d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179d5c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x179d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x179d60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x179d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x179d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179D64u;
    {
        const bool branch_taken_0x179d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D64u;
        // 0x179d68: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d64) {
            ctx->pc = 0x179D78u;
            goto label_179d78;
        }
    }
    ctx->pc = 0x179D6Cu;
    // 0x179d6c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x179D6Cu;
    {
        const bool branch_taken_0x179d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D6Cu;
        // 0x179d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d6c) {
            ctx->pc = 0x179EE0u;
            goto label_179ee0;
        }
    }
    ctx->pc = 0x179D74u;
    // 0x179d74: 0x0  nop
    ctx->pc = 0x179d74u;
    // NOP
label_179d78:
    // 0x179d78: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x179d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x179d7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x179d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x179d80: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x179d80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x179d84: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x179d88: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x179d88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x179d8c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x179D8Cu;
    {
        const bool branch_taken_0x179d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179D8Cu;
        // 0x179d90: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179d8c) {
            ctx->pc = 0x179ED8u;
            goto label_179ed8;
        }
    }
    ctx->pc = 0x179D94u;
    // 0x179d94: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x179d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x179d98: 0xc05e360  jal         func_178D80
    ctx->pc = 0x179D98u;
    SET_GPR_U32(ctx, 31, 0x179DA0u);
    ctx->pc = 0x179D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D98u;
    // 0x179d9c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x179D98u, 0x179DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DA0u;
label_179da0:
    // 0x179da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x179da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179da4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179DA4u;
    {
        const bool branch_taken_0x179da4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x179da4) {
            ctx->pc = 0x179DB8u;
            goto label_179db8;
        }
    }
    ctx->pc = 0x179DACu;
    // 0x179dac: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x179DACu;
    {
        const bool branch_taken_0x179dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DACu;
        // 0x179db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dac) {
            ctx->pc = 0x179EE0u;
            goto label_179ee0;
        }
    }
    ctx->pc = 0x179DB4u;
    // 0x179db4: 0x0  nop
    ctx->pc = 0x179db4u;
    // NOP
label_179db8:
    // 0x179db8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x179db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x179dbc: 0x94670006  lhu         $a3, 0x6($v1)
    ctx->pc = 0x179dbcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x179dc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x179dc4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x179dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179dc8: 0x34450006  ori         $a1, $v0, 0x6
    ctx->pc = 0x179dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x179dcc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x179dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x179dd0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x179dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179dd4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x179dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x179dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179de0: 0x34430006  ori         $v1, $v0, 0x6
    ctx->pc = 0x179de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x179de4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x179de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x179de8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x179de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x179dec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x179decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x179df0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x179df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x179df4: 0xdc4b0000  ld          $t3, 0x0($v0)
    ctx->pc = 0x179df4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179df8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x179df8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x179dfc: 0x31623fff  andi        $v0, $t3, 0x3FFF
    ctx->pc = 0x179dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)16383);
    // 0x179e00: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x179e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179e04: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x179e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x179e08: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x179e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x179e0c: 0xb13ba  dsrl        $v0, $t3, 14
    ctx->pc = 0x179e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 14);
    // 0x179e10: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179e14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x179e14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x179e18: 0xb153a  dsrl        $v0, $t3, 20
    ctx->pc = 0x179e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 20);
    // 0x179e1c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x179e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x179e20: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x179e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179e24: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x179e24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x179e28: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x179e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179e2c: 0xb16ba  dsrl        $v0, $t3, 26
    ctx->pc = 0x179e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 26);
    // 0x179e30: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x179e30u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x179e34: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x179e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x179e38: 0xb17ba  dsrl        $v0, $t3, 30
    ctx->pc = 0x179e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 30);
    // 0x179e3c: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x179e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x179e40: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x179e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x179e44: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x179e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x179e48: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x179e48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x179e4c: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x179e4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179e50: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x179e50u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x179e54: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x179E54u;
    SET_GPR_U32(ctx, 31, 0x179E5Cu);
    ctx->pc = 0x179E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E54u;
    // 0x179e58: 0xb5c3f  dsra32      $t3, $t3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x179E54u, 0x179E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E5Cu;
label_179e5c:
    // 0x179e5c: 0x96290060  lhu         $t1, 0x60($s1)
    ctx->pc = 0x179e5cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x179e60: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x179e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x179e64: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x179e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x179e68: 0x8c4b0020  lw          $t3, 0x20($v0)
    ctx->pc = 0x179e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x179e6c: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x179e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x179e70: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x179e70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x179e74: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x179e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x179e78: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x179e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x179e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e80: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x179e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x179e84: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x179e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179e88: 0x31297fff  andi        $t1, $t1, 0x7FFF
    ctx->pc = 0x179e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32767);
    // 0x179e8c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x179e8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x179e90: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x179e94: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x179e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x179e98: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x179e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x179e9c: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x179e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x179ea0: 0x9493c  dsll32      $t1, $t1, 4
    ctx->pc = 0x179ea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 4));
    // 0x179ea4: 0x9493e  dsrl32      $t1, $t1, 4
    ctx->pc = 0x179ea4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 4));
    // 0x179ea8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x179ea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x179eac: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x179eb0: 0xfe280070  sd          $t0, 0x70($s1)
    ctx->pc = 0x179eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 8));
    // 0x179eb4: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x179eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x179eb8: 0x96280060  lhu         $t0, 0x60($s1)
    ctx->pc = 0x179eb8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x179ebc: 0x31087fff  andi        $t0, $t0, 0x7FFF
    ctx->pc = 0x179ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x179ec0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x179ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x179ec4: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x179ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x179ec8: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x179ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x179ecc: 0xc061c60  jal         func_187180
    ctx->pc = 0x179ECCu;
    SET_GPR_U32(ctx, 31, 0x179ED4u);
    ctx->pc = 0x179ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ECCu;
    // 0x179ed0: 0xfe200088  sd          $zero, 0x88($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x179ECCu, 0x179ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179ED4u;
label_179ed4:
    // 0x179ed4: 0x0  nop
    ctx->pc = 0x179ed4u;
    // NOP
label_179ed8:
    // 0x179ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179edc: 0x0  nop
    ctx->pc = 0x179edcu;
    // NOP
label_179ee0:
    // 0x179ee0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x179EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EF0u;
        // 0x179ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179EF8u;
}
