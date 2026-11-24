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

// Function: sub_003A4C30
// Address: 0x3a4c30 - 0x3a4cc0
void sub_003A4C30_0x3a4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4C30_0x3a4c30");
#endif

    switch (ctx->pc) {
        case 0x3a4cb0u: goto label_3a4cb0;
        default: break;
    }

    ctx->pc = 0x3a4c30u;

    // 0x3a4c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4c38: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x3a4c38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x3a4c3c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A4C3Cu;
    {
        const bool branch_taken_0x3a4c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C3Cu;
        // 0x3a4c40: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c3c) {
            ctx->pc = 0x3A4C90u;
            goto label_3a4c90;
        }
    }
    ctx->pc = 0x3A4C44u;
    // 0x3a4c44: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3a4c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3a4c48: 0x2442dba8  addiu       $v0, $v0, -0x2458
    ctx->pc = 0x3a4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957992));
    // 0x3a4c4c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3a4c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3a4c50: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x3a4c50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a4c54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3a4c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4c58: 0x24e7fc50  addiu       $a3, $a3, -0x3B0
    ctx->pc = 0x3a4c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966352));
    // 0x3a4c5c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a4c60: 0x24a5dbb8  addiu       $a1, $a1, -0x2448
    ctx->pc = 0x3a4c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958008));
    // 0x3a4c64: 0x2463fc5c  addiu       $v1, $v1, -0x3A4
    ctx->pc = 0x3a4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966364));
    // 0x3a4c68: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x3a4c68u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 6)); ps2TraceGuestWrite(rdram, 0x92FC50u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x92FC50u, _value); } while (0);
    // 0x3a4c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4c70: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x3a4c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC58u, _value); } while (0); }
    // 0x3a4c74: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3a4c74u;
    { uint32_t bits = FAST_READ32(0x65DBB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a4c78: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3a4c78u;
    { uint32_t bits = FAST_READ32(0x65DBBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4c7c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3a4c7cu;
    { uint32_t bits = FAST_READ32(0x65DBC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4c80: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3a4c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC5Cu, _value); } while (0); }
    // 0x3a4c84: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3a4c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC60u, _value); } while (0); }
    // 0x3a4c88: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3a4c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x92FC64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FC64u, _value); } while (0); }
    // 0x3a4c8c: 0xa3828c64  sb          $v0, -0x739C($gp)
    ctx->pc = 0x3a4c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937700), (uint8_t)GPR_U32(ctx, 2));
label_3a4c90:
    // 0x3a4c90: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x3a4c90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3a4c94: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3a4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3a4c98: 0x2442fc50  addiu       $v0, $v0, -0x3B0
    ctx->pc = 0x3a4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
    // 0x3a4c9c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3a4c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3a4ca0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3a4ca4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4ca8: 0xc040250  jal         func_100940
    ctx->pc = 0x3A4CA8u;
    SET_GPR_U32(ctx, 31, 0x3A4CB0u);
    ctx->pc = 0x3A4CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CA8u;
    // 0x3a4cac: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x3A4CA8u, 0x3A4CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CB0u;
label_3a4cb0:
    // 0x3a4cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CB8u;
        // 0x3a4cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4CC0u;
}
