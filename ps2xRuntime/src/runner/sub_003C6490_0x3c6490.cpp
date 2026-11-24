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

// Function: sub_003C6490
// Address: 0x3c6490 - 0x3c65ac
void sub_003C6490_0x3c6490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6490_0x3c6490");
#endif

    switch (ctx->pc) {
        case 0x3c64c4u: goto label_3c64c4;
        case 0x3c650cu: goto label_3c650c;
        case 0x3c651cu: goto label_3c651c;
        case 0x3c656cu: goto label_3c656c;
        default: break;
    }

    ctx->pc = 0x3c6490u;

    // 0x3c6490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c6490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c6494: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3c6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c6498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c6498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c649c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c649cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c64a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c64a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c64a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c64a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c64a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c64ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C64ACu;
    {
        const bool branch_taken_0x3c64ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C64ACu;
        // 0x3c64b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64ac) {
            ctx->pc = 0x3C64B8u;
            goto label_3c64b8;
        }
    }
    ctx->pc = 0x3C64B4u;
    // 0x3c64b4: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x3c64b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3c64b8:
    // 0x3c64b8: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c64b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c64bc: 0xc0967c0  jal         func_259F00
    ctx->pc = 0x3C64BCu;
    SET_GPR_U32(ctx, 31, 0x3C64C4u);
    ctx->pc = 0x3C64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C64BCu;
    // 0x3c64c0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F00u, 0x3C64BCu, 0x3C64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C64C4u;
label_3c64c4:
    // 0x3c64c4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3c64c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3c64c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3c64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3c64cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c64ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c64d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c64d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c64d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c64d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c64d8: 0x862500c0  lh          $a1, 0xC0($s1)
    ctx->pc = 0x3c64d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x3c64dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3c64dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c64e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c64e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c64e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c64e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c64e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c64e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c64ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c64ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c64f0: 0x0  nop
    ctx->pc = 0x3c64f0u;
    // NOP
    // 0x3c64f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3c64f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c64f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c64f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c64fc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c64fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c6500: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3c6500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c6504: 0xc096750  jal         func_259D40
    ctx->pc = 0x3C6504u;
    SET_GPR_U32(ctx, 31, 0x3C650Cu);
    ctx->pc = 0x3C6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6504u;
    // 0x3c6508: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x3C6504u, 0x3C650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C650Cu;
label_3c650c:
    // 0x3c650c: 0xa62200c0  sh          $v0, 0xC0($s1)
    ctx->pc = 0x3c650cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c6510: 0x26240590  addiu       $a0, $s1, 0x590
    ctx->pc = 0x3c6510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
    // 0x3c6514: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3C6514u;
    SET_GPR_U32(ctx, 31, 0x3C651Cu);
    ctx->pc = 0x3C6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6514u;
    // 0x3c6518: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3C6514u, 0x3C651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C651Cu;
label_3c651c:
    // 0x3c651c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3c651cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3c6520: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x3c6520u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3c6524: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c6524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c6528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c6528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c652c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c652cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c6530: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3c6530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3c6534: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c6534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c6538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c6538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c653c: 0x0  nop
    ctx->pc = 0x3c653cu;
    // NOP
    // 0x3c6540: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3c6540u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3c6544: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c6548: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c6548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c654c: 0x0  nop
    ctx->pc = 0x3c654cu;
    // NOP
    // 0x3c6550: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3c6550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c6554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c6554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c6558: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3c6558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3c655c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x3c655cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c6560: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3c6560u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3c6564: 0xc096750  jal         func_259D40
    ctx->pc = 0x3C6564u;
    SET_GPR_U32(ctx, 31, 0x3C656Cu);
    ctx->pc = 0x3C6568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6564u;
    // 0x3c6568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x3C6564u, 0x3C656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C656Cu;
label_3c656c:
    // 0x3c656c: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x3c656cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c6570: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x3c6570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3c6574: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c6574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3c6578: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c6578u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3c657c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C657Cu;
    {
        const bool branch_taken_0x3c657c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c657c) {
            ctx->pc = 0x3C6590u;
            goto label_3c6590;
        }
    }
    ctx->pc = 0x3C6584u;
    // 0x3c6584: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C6584u;
    {
        const bool branch_taken_0x3c6584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6584u;
        // 0x3c6588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6584) {
            ctx->pc = 0x3C6598u;
            goto label_3c6598;
        }
    }
    ctx->pc = 0x3C658Cu;
    // 0x3c658c: 0x0  nop
    ctx->pc = 0x3c658cu;
    // NOP
label_3c6590:
    // 0x3c6590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c6590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6594: 0x0  nop
    ctx->pc = 0x3c6594u;
    // NOP
label_3c6598:
    // 0x3c6598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c6598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c659c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c659cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c65a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c65a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c65a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C65A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C65A4u;
        // 0x3c65a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C65A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C65ACu;
}
