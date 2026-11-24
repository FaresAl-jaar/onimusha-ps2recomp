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

// Function: sub_002AC6B0
// Address: 0x2ac6b0 - 0x2ac75c
void sub_002AC6B0_0x2ac6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC6B0_0x2ac6b0");
#endif

    switch (ctx->pc) {
        case 0x2ac6fcu: goto label_2ac6fc;
        default: break;
    }

    ctx->pc = 0x2ac6b0u;

    // 0x2ac6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac6b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ac6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac6b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac6bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ac6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ac6c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ac6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ac6c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ac6c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ac6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6cc: 0x78870020  lq          $a3, 0x20($a0)
    ctx->pc = 0x2ac6ccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ac6d0: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x2ac6d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x2ac6d4: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x2ac6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x2ac6d8: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x2ac6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x2ac6dc: 0x7c870870  sq          $a3, 0x870($a0)
    ctx->pc = 0x2ac6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 7));
    // 0x2ac6e0: 0xe48c0890  swc1        $f12, 0x890($a0)
    ctx->pc = 0x2ac6e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2192), bits); }
    // 0x2ac6e4: 0xe48d0894  swc1        $f13, 0x894($a0)
    ctx->pc = 0x2ac6e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2196), bits); }
    // 0x2ac6e8: 0xe48e0898  swc1        $f14, 0x898($a0)
    ctx->pc = 0x2ac6e8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2200), bits); }
    // 0x2ac6ec: 0xac83089c  sw          $v1, 0x89C($a0)
    ctx->pc = 0x2ac6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2204), GPR_U32(ctx, 3));
    // 0x2ac6f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ac6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac6f4: 0xc0414c0  jal         func_105300
    ctx->pc = 0x2AC6F4u;
    SET_GPR_U32(ctx, 31, 0x2AC6FCu);
    ctx->pc = 0x2AC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6F4u;
    // 0x2ac6f8: 0x26040880  addiu       $a0, $s0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x2AC6F4u, 0x2AC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6FCu;
label_2ac6fc:
    // 0x2ac6fc: 0xc6000874  lwc1        $f0, 0x874($s0)
    ctx->pc = 0x2ac6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac700: 0xc6010894  lwc1        $f1, 0x894($s0)
    ctx->pc = 0x2ac700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ac704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ac704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ac708: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC708u;
    {
        const bool branch_taken_0x2ac708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ac708) {
            ctx->pc = 0x2AC720u;
            goto label_2ac720;
        }
    }
    ctx->pc = 0x2AC710u;
    // 0x2ac710: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x2ac710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2ac714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC714u;
    {
        const bool branch_taken_0x2ac714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC714u;
        // 0x2ac718: 0xe6000884  swc1        $f0, 0x884($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac714) {
            ctx->pc = 0x2AC728u;
            goto label_2ac728;
        }
    }
    ctx->pc = 0x2AC71Cu;
    // 0x2ac71c: 0x0  nop
    ctx->pc = 0x2ac71cu;
    // NOP
label_2ac720:
    // 0x2ac720: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2ac720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2ac724: 0xe6000884  swc1        $f0, 0x884($s0)
    ctx->pc = 0x2ac724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2180), bits); }
label_2ac728:
    // 0x2ac728: 0x8e0406ac  lw          $a0, 0x6AC($s0)
    ctx->pc = 0x2ac728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x2ac72c: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x2ac72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2ac730: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x2ac730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2ac734: 0xae0406ac  sw          $a0, 0x6AC($s0)
    ctx->pc = 0x2ac734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1708), GPR_U32(ctx, 4));
    // 0x2ac738: 0x8e0406b4  lw          $a0, 0x6B4($s0)
    ctx->pc = 0x2ac738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x2ac73c: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x2ac73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2ac740: 0xae0406b4  sw          $a0, 0x6B4($s0)
    ctx->pc = 0x2ac740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 4));
    // 0x2ac744: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x2ac744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac74c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ac74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ac750: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ac750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac754: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC754u;
        // 0x2ac758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC75Cu;
}
