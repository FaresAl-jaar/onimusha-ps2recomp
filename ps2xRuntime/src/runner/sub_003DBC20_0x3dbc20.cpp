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

// Function: sub_003DBC20
// Address: 0x3dbc20 - 0x3dbc98
void sub_003DBC20_0x3dbc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBC20_0x3dbc20");
#endif

    switch (ctx->pc) {
        case 0x3dbc3cu: goto label_3dbc3c;
        case 0x3dbc88u: goto label_3dbc88;
        default: break;
    }

    ctx->pc = 0x3dbc20u;

    // 0x3dbc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dbc24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dbc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbc2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dbc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3dbc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc34: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3DBC34u;
    SET_GPR_U32(ctx, 31, 0x3DBC3Cu);
    ctx->pc = 0x3DBC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC34u;
    // 0x3dbc38: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3DBC34u, 0x3DBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC3Cu;
label_3dbc3c:
    // 0x3dbc3c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3dbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3dbc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dbc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dbc48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dbc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbc4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3dbc4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3dbc50: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3dbc54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3dbc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3dbc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dbc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dbc5c: 0x0  nop
    ctx->pc = 0x3dbc5cu;
    // NOP
    // 0x3dbc60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3dbc60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3dbc64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dbc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3dbc68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3dbc68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3dbc6c: 0x0  nop
    ctx->pc = 0x3dbc6cu;
    // NOP
    // 0x3dbc70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3dbc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3dbc74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3dbc74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3dbc78: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3dbc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3dbc7c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3dbc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3dbc80: 0xc0f6f28  jal         func_3DBCA0
    ctx->pc = 0x3DBC80u;
    SET_GPR_U32(ctx, 31, 0x3DBC88u);
    ctx->pc = 0x3DBC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBC80u;
    // 0x3dbc84: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBCA0u, 0x3DBC80u, 0x3DBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBC88u;
label_3dbc88:
    // 0x3dbc88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dbc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbc90: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC90u;
        // 0x3dbc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBC98u;
}
