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

// Function: sub_003BE230
// Address: 0x3be230 - 0x3be2f0
void sub_003BE230_0x3be230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE230_0x3be230");
#endif

    ctx->pc = 0x3be230u;

    // 0x3be230: 0x240308c7  addiu       $v1, $zero, 0x8C7
    ctx->pc = 0x3be230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be234: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3be234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3be238: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BE238u;
    {
        const bool branch_taken_0x3be238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE238u;
        // 0x3be23c: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be238) {
            ctx->pc = 0x3BE298u;
            goto label_3be298;
        }
    }
    ctx->pc = 0x3BE240u;
    // 0x3be240: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x3be240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x3be244: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3be244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x3be248: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3be248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3be24c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3be24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x3be250: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3be250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x3be254: 0x3c034591  lui         $v1, 0x4591
    ctx->pc = 0x3be254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17809 << 16));
    // 0x3be258: 0x34655000  ori         $a1, $v1, 0x5000
    ctx->pc = 0x3be258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x3be25c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x3be25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x3be260: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3be260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3be264: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3be264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3be268: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3be268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3be26c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3be26cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3be270: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3be270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3be274: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3be274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be278: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3be278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3be27c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3be27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3be280: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x3be280u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3be284: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x3be284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3be288: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x3be288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3be28c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3BE28Cu;
    {
        const bool branch_taken_0x3be28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE28Cu;
        // 0x3be290: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be28c) {
            ctx->pc = 0x3BE2E8u;
            goto label_3be2e8;
        }
    }
    ctx->pc = 0x3BE294u;
    // 0x3be294: 0x0  nop
    ctx->pc = 0x3be294u;
    // NOP
label_3be298:
    // 0x3be298: 0x3c034553  lui         $v1, 0x4553
    ctx->pc = 0x3be298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17747 << 16));
    // 0x3be29c: 0x3465f000  ori         $a1, $v1, 0xF000
    ctx->pc = 0x3be29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3be2a0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3be2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3be2a4: 0x3c034539  lui         $v1, 0x4539
    ctx->pc = 0x3be2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17721 << 16));
    // 0x3be2a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x3be2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x3be2ac: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3be2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3be2b0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3be2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3be2b4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3be2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3be2b8: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x3be2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x3be2bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3be2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3be2c0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3be2c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3be2c4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3be2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3be2c8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3be2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3be2cc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3be2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be2d0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3be2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3be2d4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3be2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3be2d8: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x3be2d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3be2dc: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x3be2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3be2e0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x3be2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3be2e4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3be2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_3be2e8:
    // 0x3be2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE2E8u;
        // 0x3be2ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE2F0u;
}
