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

// Function: sub_0035B510
// Address: 0x35b510 - 0x35b5d8
void sub_0035B510_0x35b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B510_0x35b510");
#endif

    switch (ctx->pc) {
        case 0x35b530u: goto label_35b530;
        case 0x35b584u: goto label_35b584;
        case 0x35b5ccu: goto label_35b5cc;
        default: break;
    }

    ctx->pc = 0x35b510u;

    // 0x35b510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b518: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b51c: 0x844203a0  lh          $v0, 0x3A0($v0)
    ctx->pc = 0x35b51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    // 0x35b520: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x35b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x35b524: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35b524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35b528: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35B528u;
    SET_GPR_U32(ctx, 31, 0x35B530u);
    ctx->pc = 0x35B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B528u;
    // 0x35b52c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35B528u, 0x35B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B530u;
label_35b530:
    // 0x35b530: 0x8f858bb8  lw          $a1, -0x7448($gp)
    ctx->pc = 0x35b530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b534: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x35b534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x35b538: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x35b538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35b53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b540: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x35b540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x35b544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35b544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b548: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35b548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b54c: 0xa4a203a0  sh          $v0, 0x3A0($a1)
    ctx->pc = 0x35b54cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x35b550: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b554: 0x846203a0  lh          $v0, 0x3A0($v1)
    ctx->pc = 0x35b554u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 928)));
    // 0x35b558: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x35b558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x35b55c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b560: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35b560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b564: 0x0  nop
    ctx->pc = 0x35b564u;
    // NOP
    // 0x35b568: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35b568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35b56c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35b56cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35b570: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35b570u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35b574: 0x0  nop
    ctx->pc = 0x35b574u;
    // NOP
    // 0x35b578: 0x0  nop
    ctx->pc = 0x35b578u;
    // NOP
    // 0x35b57c: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35B57Cu;
    SET_GPR_U32(ctx, 31, 0x35B584u);
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35B57Cu, 0x35B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B584u;
label_35b584:
    // 0x35b584: 0x8f848bb8  lw          $a0, -0x7448($gp)
    ctx->pc = 0x35b584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b588: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35b588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35b58c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x35b58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35b590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b594: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35b598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b59c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35b59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35b5a0: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x35b5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x35b5a4: 0x248502b0  addiu       $a1, $a0, 0x2B0
    ctx->pc = 0x35b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x35b5a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35b5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35b5ac: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x35b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35b5b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x35b5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35b5b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35b5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35b5b8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35b5b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35b5bc: 0x0  nop
    ctx->pc = 0x35b5bcu;
    // NOP
    // 0x35b5c0: 0x0  nop
    ctx->pc = 0x35b5c0u;
    // NOP
    // 0x35b5c4: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35B5C4u;
    SET_GPR_U32(ctx, 31, 0x35B5CCu);
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35B5C4u, 0x35B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5CCu;
label_35b5cc:
    // 0x35b5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5D0u;
        // 0x35b5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5D8u;
}
