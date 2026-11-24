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

// Function: sub_00370050
// Address: 0x370050 - 0x370104
void sub_00370050_0x370050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370050_0x370050");
#endif

    switch (ctx->pc) {
        case 0x3700ccu: goto label_3700cc;
        case 0x3700e0u: goto label_3700e0;
        default: break;
    }

    ctx->pc = 0x370050u;

    // 0x370050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370054: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x370054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x370058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37005c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x37005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x370060: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x370060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x370064: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x370064u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x370068: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x370068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x37006c: 0x24c6ac10  addiu       $a2, $a2, -0x53F0
    ctx->pc = 0x37006cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945808));
    // 0x370070: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x370070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x370074: 0x2508c250  addiu       $t0, $t0, -0x3DB0
    ctx->pc = 0x370074u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951504));
    // 0x370078: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x370078u;
    { uint32_t bits = FAST_READ32(0x65AC10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37007c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x370080: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x370080u;
    { uint32_t bits = FAST_READ32(0x65AC14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370088: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x370088u;
    { uint32_t bits = FAST_READ32(0x65AC18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37008c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x370090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370094: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x370094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x370098: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x370098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37009c: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x37009cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3700a0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x3700a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3700a4: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3700a4u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3700a8: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3700a8u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3700ac: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3700acu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3700b0: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x3700b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3700b4: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x3700b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3700b8: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x3700b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x3700bc: 0xa0830114  sb          $v1, 0x114($a0)
    ctx->pc = 0x3700bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 276), (uint8_t)GPR_U32(ctx, 3));
    // 0x3700c0: 0xa0820027  sb          $v0, 0x27($a0)
    ctx->pc = 0x3700c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x3700c4: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3700C4u;
    SET_GPR_U32(ctx, 31, 0x3700CCu);
    ctx->pc = 0x3700C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3700C4u;
    // 0x3700c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3700C4u, 0x3700CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3700CCu;
label_3700cc:
    // 0x3700cc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3700ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3700d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3700d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3700d4: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x3700d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x3700d8: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x3700D8u;
    SET_GPR_U32(ctx, 31, 0x3700E0u);
    ctx->pc = 0x3700DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3700D8u;
    // 0x3700dc: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x3700D8u, 0x3700E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3700E0u;
label_3700e0:
    // 0x3700e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3700e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3700e4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3700e8: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x3700e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3700ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3700ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3700f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3700f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3700f4: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3700f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3700f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3700f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3700fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3700FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3700FCu;
        // 0x370100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3700FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370104u;
}
