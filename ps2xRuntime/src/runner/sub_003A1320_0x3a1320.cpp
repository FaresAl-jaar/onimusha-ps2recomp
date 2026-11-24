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

// Function: sub_003A1320
// Address: 0x3a1320 - 0x3a13e8
void sub_003A1320_0x3a1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1320_0x3a1320");
#endif

    switch (ctx->pc) {
        case 0x3a1340u: goto label_3a1340;
        case 0x3a1394u: goto label_3a1394;
        case 0x3a13dcu: goto label_3a13dc;
        default: break;
    }

    ctx->pc = 0x3a1320u;

    // 0x3a1320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a1324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a1328: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a132c: 0x844203a0  lh          $v0, 0x3A0($v0)
    ctx->pc = 0x3a132cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 928)));
    // 0x3a1330: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x3a1330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3a1334: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3a1334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3a1338: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3A1338u;
    SET_GPR_U32(ctx, 31, 0x3A1340u);
    ctx->pc = 0x3A133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1338u;
    // 0x3a133c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3A1338u, 0x3A1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1340u;
label_3a1340:
    // 0x3a1340: 0x8f858c5c  lw          $a1, -0x73A4($gp)
    ctx->pc = 0x3a1340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1344: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3a1344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3a1348: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x3a1348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3a134c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a134cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1350: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3a1350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3a1354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a1354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1358: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a1358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a135c: 0xa4a203a0  sh          $v0, 0x3A0($a1)
    ctx->pc = 0x3a135cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 928), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a1360: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1364: 0x846203a0  lh          $v0, 0x3A0($v1)
    ctx->pc = 0x3a1364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 928)));
    // 0x3a1368: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x3a1368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x3a136c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a1370: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a1370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a1374: 0x0  nop
    ctx->pc = 0x3a1374u;
    // NOP
    // 0x3a1378: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a1378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a137c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a137cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a1380: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3a1380u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3a1384: 0x0  nop
    ctx->pc = 0x3a1384u;
    // NOP
    // 0x3a1388: 0x0  nop
    ctx->pc = 0x3a1388u;
    // NOP
    // 0x3a138c: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A138Cu;
    SET_GPR_U32(ctx, 31, 0x3A1394u);
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A138Cu, 0x3A1394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1394u;
label_3a1394:
    // 0x3a1394: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x3a1394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1398: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3a1398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3a139c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3a139cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3a13a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a13a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a13a4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3a13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3a13a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a13a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a13ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a13acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a13b0: 0x848203a0  lh          $v0, 0x3A0($a0)
    ctx->pc = 0x3a13b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x3a13b4: 0x248502b0  addiu       $a1, $a0, 0x2B0
    ctx->pc = 0x3a13b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x3a13b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a13b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a13bc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3a13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a13c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a13c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a13c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a13c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a13c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3a13c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3a13cc: 0x0  nop
    ctx->pc = 0x3a13ccu;
    // NOP
    // 0x3a13d0: 0x0  nop
    ctx->pc = 0x3a13d0u;
    // NOP
    // 0x3a13d4: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3A13D4u;
    SET_GPR_U32(ctx, 31, 0x3A13DCu);
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3A13D4u, 0x3A13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A13DCu;
label_3a13dc:
    // 0x3a13dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a13dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a13e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A13E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13E0u;
        // 0x3a13e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A13E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A13E8u;
}
