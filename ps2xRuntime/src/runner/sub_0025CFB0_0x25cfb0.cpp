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

// Function: sub_0025CFB0
// Address: 0x25cfb0 - 0x25d008
void sub_0025CFB0_0x25cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CFB0_0x25cfb0");
#endif

    ctx->pc = 0x25cfb0u;

    // 0x25cfb0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x25cfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x25cfb4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x25cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25cfb8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x25cfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25cfbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25cfc0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x25cfc4: 0x24635ae0  addiu       $v1, $v1, 0x5AE0
    ctx->pc = 0x25cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23264));
    // 0x25cfc8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x25cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25cfcc: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x25cfccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25cfd0: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x25cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x25cfd4: 0x70033389  pcpyld      $a2, $zero, $v1
    ctx->pc = 0x25cfd4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x25cfd8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x25cfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25cfdc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x25cfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x25cfe0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x25cfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25cfe4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x25cfe8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x25cfe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x25cfec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x25cfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x25cff0: 0xe62824  and         $a1, $a3, $a2
    ctx->pc = 0x25cff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x25cff4: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x25cff4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x25cff8: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x25cff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x25cffc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x25cffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x25d000: 0x80a85ec  j           func_2A17B0
    ctx->pc = 0x25D000u;
    ctx->pc = 0x25D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D000u;
    // 0x25d004: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    sub_002A17B0_0x2a17b0(rdram, ctx, runtime); return;
    ctx->pc = 0x25D008u;
}
