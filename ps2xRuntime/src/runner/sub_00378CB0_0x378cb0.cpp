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

// Function: sub_00378CB0
// Address: 0x378cb0 - 0x378d44
void sub_00378CB0_0x378cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378CB0_0x378cb0");
#endif

    switch (ctx->pc) {
        case 0x378cc8u: goto label_378cc8;
        default: break;
    }

    ctx->pc = 0x378cb0u;

    // 0x378cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378cbc: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x378cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x378cc0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x378CC0u;
    SET_GPR_U32(ctx, 31, 0x378CC8u);
    ctx->pc = 0x378CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378CC0u;
    // 0x378cc4: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x378CC0u, 0x378CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378CC8u;
label_378cc8:
    // 0x378cc8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378CC8u;
    {
        const bool branch_taken_0x378cc8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x378CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CC8u;
        // 0x378ccc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cc8) {
            ctx->pc = 0x378CDCu;
            goto label_378cdc;
        }
    }
    ctx->pc = 0x378CD0u;
    // 0x378cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378cd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378CD4u;
    {
        const bool branch_taken_0x378cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CD4u;
        // 0x378cd8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cd4) {
            ctx->pc = 0x378CF4u;
            goto label_378cf4;
        }
    }
    ctx->pc = 0x378CDCu;
label_378cdc:
    // 0x378cdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x378cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x378ce0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x378ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378ce8: 0x0  nop
    ctx->pc = 0x378ce8u;
    // NOP
    // 0x378cec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x378cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x378cf0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x378cf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_378cf4:
    // 0x378cf4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x378cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x378cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x378cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378cfc: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378CFCu;
    {
        const bool branch_taken_0x378cfc = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x378D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378CFCu;
        // 0x378d00: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378cfc) {
            ctx->pc = 0x378D10u;
            goto label_378d10;
        }
    }
    ctx->pc = 0x378D04u;
    // 0x378d04: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x378d04u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378D08u;
    {
        const bool branch_taken_0x378d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D08u;
        // 0x378d0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d08) {
            ctx->pc = 0x378D28u;
            goto label_378d28;
        }
    }
    ctx->pc = 0x378D10u;
label_378d10:
    // 0x378d10: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x378d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x378d14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x378d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378d1c: 0x0  nop
    ctx->pc = 0x378d1cu;
    // NOP
    // 0x378d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x378d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x378d24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x378d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_378d28:
    // 0x378d28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x378d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x378d2c: 0x0  nop
    ctx->pc = 0x378d2cu;
    // NOP
    // 0x378d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378d34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378d38: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x378d38u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x378d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x378D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D3Cu;
        // 0x378d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378D44u;
}
