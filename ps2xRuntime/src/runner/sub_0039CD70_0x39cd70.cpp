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

// Function: sub_0039CD70
// Address: 0x39cd70 - 0x39cdbc
void sub_0039CD70_0x39cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CD70_0x39cd70");
#endif

    switch (ctx->pc) {
        case 0x39cd8cu: goto label_39cd8c;
        default: break;
    }

    ctx->pc = 0x39cd70u;

    // 0x39cd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cd74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39cd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39cd7c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x39cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39cd80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39cd84: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x39CD84u;
    SET_GPR_U32(ctx, 31, 0x39CD8Cu);
    ctx->pc = 0x39CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD84u;
    // 0x39cd88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x39CD84u, 0x39CD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD8Cu;
label_39cd8c:
    // 0x39cd8c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39cd90: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x39cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x39cd94: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x39cd94u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39cd98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x39cd98u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39cd9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x39cd9cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39cda0: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x39cda0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x39cda4: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x39cda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x39cda8: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x39cda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x39cdac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39cdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cdb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39cdb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x39CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDB4u;
        // 0x39cdb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CDBCu;
}
