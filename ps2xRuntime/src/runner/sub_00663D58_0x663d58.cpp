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

// Function: sub_00663D58
// Address: 0x663d58 - 0x663e4c
void sub_00663D58_0x663d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00663D58_0x663d58");
#endif

    ctx->pc = 0x663d58u;

    // 0x663d58: 0x94a03595  lhu         $zero, 0x3595($a1)
    ctx->pc = 0x663d58u;
    SET_GPR_ZE32(ctx, 0, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 13717)));
    // 0x663d5c: 0x3fdfffff  .word       0x3FDFFFFF                   # lui         $ra, 0xFFFF # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x663d5cu;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)65535 << 16));
    // 0x663d60: 0x35afe535  ori         $t7, $t5, 0xE535
    ctx->pc = 0x663d60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)58677);
    // 0x663d64: 0x3fe00000  .word       0x3FE00000                   # lui         $zero, 0x0 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x663d64u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x663d68: 0x94a03595  lhu         $zero, 0x3595($a1)
    ctx->pc = 0x663d68u;
    SET_GPR_ZE32(ctx, 0, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 13717)));
    // 0x663d6c: 0x3fcfffff  .word       0x3FCFFFFF                   # lui         $t7, 0xFFFF # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x663d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x663d70: 0x1283a8  .word       0x001283A8                   # mfsa        $s0 # 00120380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x663d70u;
    SET_GPR_U32(ctx, 16, ctx->sa);
    // 0x663d74: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d78: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d7c: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d80: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d84: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d88: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d8c: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d90: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663d90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663d94: 0x129138  dsll        $s2, $s2, 4
    ctx->pc = 0x663d94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    // 0x663d98: 0x129138  dsll        $s2, $s2, 4
    ctx->pc = 0x663d98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    // 0x663d9c: 0x129138  dsll        $s2, $s2, 4
    ctx->pc = 0x663d9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    // 0x663da0: 0x129138  dsll        $s2, $s2, 4
    ctx->pc = 0x663da0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    // 0x663da4: 0x129138  dsll        $s2, $s2, 4
    ctx->pc = 0x663da4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    // 0x663da8: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663da8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dac: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663db0: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663db0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663db4: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663db8: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663db8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dbc: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dc0: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dc4: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dc8: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dcc: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dd0: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dd4: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dd8: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663ddc: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663de0: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663de4: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663de4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663de8: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663de8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dec: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663decu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663df0: 0x129138  dsll        $s2, $s2, 4
    ctx->pc = 0x663df0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    // 0x663df4: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663df4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663df8: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663df8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663dfc: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e00: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e04: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e08: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e0c: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e10: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e14: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e18: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e1c: 0x128398  .word       0x00128398                   # mult        $s0, $zero, $s2 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x663e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x663e20: 0x128400  sll         $s0, $s2, 16
    ctx->pc = 0x663e20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x663e24: 0x128390  .word       0x00128390                   # mfhi        $s0 # 00120380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x663e24u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x663e28: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x663e28u;
    // NOP (addi to $zero)
    // 0x663e2c: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x663e2cu;
    // NOP (addi to $zero)
    // 0x663e30: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x663e30u;
    // NOP (addi to $zero)
    // 0x663e34: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x663e34u;
    // NOP (addi to $zero)
    // 0x663e38: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x663e38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
    // 0x663e3c: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x663e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
    // 0x663e40: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x663e40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
    // 0x663e44: 0x30303030  andi        $s0, $at, 0x3030
    ctx->pc = 0x663e44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12336);
    // 0x663e48: 0x20677562  addi        $a3, $v1, 0x7562
    ctx->pc = 0x663e48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30050, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    ctx->pc = 0x663e4cu;
}
