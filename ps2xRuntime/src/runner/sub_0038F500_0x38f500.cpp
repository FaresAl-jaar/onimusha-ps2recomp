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

// Function: sub_0038F500
// Address: 0x38f500 - 0x38f600
void sub_0038F500_0x38f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F500_0x38f500");
#endif

    switch (ctx->pc) {
        case 0x38f58cu: goto label_38f58c;
        default: break;
    }

    ctx->pc = 0x38f500u;

    // 0x38f500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f504: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x38f504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x38f508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f50c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38f50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38f510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f514: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x38f514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38f518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38f518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38f51c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x38F51Cu;
    {
        const bool branch_taken_0x38f51c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F51Cu;
        // 0x38f520: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f51c) {
            ctx->pc = 0x38F538u;
            goto label_38f538;
        }
    }
    ctx->pc = 0x38F524u;
    // 0x38f524: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x38f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x38f528: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x38f528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x38f52c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38f52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38f530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38F530u;
    {
        const bool branch_taken_0x38f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F530u;
        // 0x38f534: 0xae030148  sw          $v1, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f530) {
            ctx->pc = 0x38F548u;
            goto label_38f548;
        }
    }
    ctx->pc = 0x38F538u;
label_38f538:
    // 0x38f538: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x38f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x38f53c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x38f53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x38f540: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x38f540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x38f544: 0x0  nop
    ctx->pc = 0x38f544u;
    // NOP
label_38f548:
    // 0x38f548: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x38f548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x38f54c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x38f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x38f550: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f554: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x38f554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x38f558: 0xae050148  sw          $a1, 0x148($s0)
    ctx->pc = 0x38f558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 5));
    // 0x38f55c: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x38f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x38f560: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x38f560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x38f564: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x38f564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x38f568: 0xae0028f4  sw          $zero, 0x28F4($s0)
    ctx->pc = 0x38f568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10484), GPR_U32(ctx, 0));
    // 0x38f56c: 0x92042b4c  lbu         $a0, 0x2B4C($s0)
    ctx->pc = 0x38f56cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x38f570: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38F570u;
    {
        const bool branch_taken_0x38f570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38f570) {
            ctx->pc = 0x38F598u;
            goto label_38f598;
        }
    }
    ctx->pc = 0x38F578u;
    // 0x38f578: 0x92032b3c  lbu         $v1, 0x2B3C($s0)
    ctx->pc = 0x38f578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x38f57c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F57Cu;
    {
        const bool branch_taken_0x38f57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F57Cu;
        // 0x38f580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f57c) {
            ctx->pc = 0x38F598u;
            goto label_38f598;
        }
    }
    ctx->pc = 0x38F584u;
    // 0x38f584: 0xc0e3858  jal         func_38E160
    ctx->pc = 0x38F584u;
    SET_GPR_U32(ctx, 31, 0x38F58Cu);
    ctx->pc = 0x38E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E160u, 0x38F584u, 0x38F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F58Cu;
label_38f58c:
    // 0x38f58c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38F58Cu;
    {
        const bool branch_taken_0x38f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F58Cu;
        // 0x38f590: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f58c) {
            ctx->pc = 0x38F598u;
            goto label_38f598;
        }
    }
    ctx->pc = 0x38F594u;
    // 0x38f594: 0xa2032b4c  sb          $v1, 0x2B4C($s0)
    ctx->pc = 0x38f594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11084), (uint8_t)GPR_U32(ctx, 3));
label_38f598:
    // 0x38f598: 0x92042b4c  lbu         $a0, 0x2B4C($s0)
    ctx->pc = 0x38f598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11084)));
    // 0x38f59c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f5a0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x38F5A0u;
    {
        const bool branch_taken_0x38f5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5A0u;
        // 0x38f5a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5a0) {
            ctx->pc = 0x38F5E0u;
            goto label_38f5e0;
        }
    }
    ctx->pc = 0x38F5A8u;
    // 0x38f5a8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38F5A8u;
    {
        const bool branch_taken_0x38f5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38f5a8) {
            ctx->pc = 0x38F5D0u;
            goto label_38f5d0;
        }
    }
    ctx->pc = 0x38F5B0u;
    // 0x38f5b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F5B0u;
    {
        const bool branch_taken_0x38f5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f5b0) {
            ctx->pc = 0x38F5C0u;
            goto label_38f5c0;
        }
    }
    ctx->pc = 0x38F5B8u;
    // 0x38f5b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38F5B8u;
    {
        const bool branch_taken_0x38f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f5b8) {
            ctx->pc = 0x38F5F0u;
            goto label_38f5f0;
        }
    }
    ctx->pc = 0x38F5C0u;
label_38f5c0:
    // 0x38f5c0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x38f5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x38f5c4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x38f5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x38f5c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38F5C8u;
    {
        const bool branch_taken_0x38f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5C8u;
        // 0x38f5cc: 0xa603078c  sh          $v1, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5c8) {
            ctx->pc = 0x38F5F0u;
            goto label_38f5f0;
        }
    }
    ctx->pc = 0x38F5D0u;
label_38f5d0:
    // 0x38f5d0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x38f5d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x38f5d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x38f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x38f5d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38F5D8u;
    {
        const bool branch_taken_0x38f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5D8u;
        // 0x38f5dc: 0xa603078c  sh          $v1, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f5d8) {
            ctx->pc = 0x38F5F0u;
            goto label_38f5f0;
        }
    }
    ctx->pc = 0x38F5E0u;
label_38f5e0:
    // 0x38f5e0: 0x9603078c  lhu         $v1, 0x78C($s0)
    ctx->pc = 0x38f5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x38f5e4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x38f5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x38f5e8: 0xa603078c  sh          $v1, 0x78C($s0)
    ctx->pc = 0x38f5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x38f5ec: 0x0  nop
    ctx->pc = 0x38f5ecu;
    // NOP
label_38f5f0:
    // 0x38f5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f5f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5F8u;
        // 0x38f5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F600u;
}
