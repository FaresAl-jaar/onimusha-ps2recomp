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

// Function: sub_002B0880
// Address: 0x2b0880 - 0x2b0ce8
void sub_002B0880_0x2b0880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0880_0x2b0880");
#endif

    switch (ctx->pc) {
        case 0x2b08b0u: goto label_2b08b0;
        default: break;
    }

    ctx->pc = 0x2b0880u;

    // 0x2b0880: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b0884: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x2b0884u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b0888: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0888u;
    {
        const bool branch_taken_0x2b0888 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0888u;
        // 0x2b088c: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0888) {
            ctx->pc = 0x2B0898u;
            goto label_2b0898;
        }
    }
    ctx->pc = 0x2B0890u;
    // 0x2b0890: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x2B0890u;
    {
        const bool branch_taken_0x2b0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0890u;
        // 0x2b0894: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0890) {
            ctx->pc = 0x2B0CE0u;
            goto label_2b0ce0;
        }
    }
    ctx->pc = 0x2B0898u;
label_2b0898:
    // 0x2b0898: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x2b0898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b089c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2b089cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b08a0: 0x1020010b  beqz        $at, . + 4 + (0x10B << 2)
    ctx->pc = 0x2B08A0u;
    {
        const bool branch_taken_0x2b08a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08A0u;
        // 0x2b08a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08a0) {
            ctx->pc = 0x2B0CD0u;
            goto label_2b0cd0;
        }
    }
    ctx->pc = 0x2B08A8u;
    // 0x2b08a8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2b08a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b08ac: 0x0  nop
    ctx->pc = 0x2b08acu;
    // NOP
label_2b08b0:
    // 0x2b08b0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2b08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2b08b4: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x2b08b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b08b8: 0x10200101  beqz        $at, . + 4 + (0x101 << 2)
    ctx->pc = 0x2B08B8u;
    {
        const bool branch_taken_0x2b08b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b08b8) {
            ctx->pc = 0x2B0CC0u;
            goto label_2b0cc0;
        }
    }
    ctx->pc = 0x2B08C0u;
    // 0x2b08c0: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x2b08c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b08c4: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2b08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b08c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b08c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b08cc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2b08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b08d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2b08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b08d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B08D4u;
    {
        const bool branch_taken_0x2b08d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08D4u;
        // 0x2b08d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08d4) {
            ctx->pc = 0x2B08E8u;
            goto label_2b08e8;
        }
    }
    ctx->pc = 0x2B08DCu;
    // 0x2b08dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b08dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B08E0u;
    {
        const bool branch_taken_0x2b08e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08E0u;
        // 0x2b08e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08e0) {
            ctx->pc = 0x2B0900u;
            goto label_2b0900;
        }
    }
    ctx->pc = 0x2B08E8u;
label_2b08e8:
    // 0x2b08e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b08e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b08ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b08ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b08f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b08f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08f4: 0x0  nop
    ctx->pc = 0x2b08f4u;
    // NOP
    // 0x2b08f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b08f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b08fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b08fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b0900:
    // 0x2b0900: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x2b0900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b0904: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0904u;
    {
        const bool branch_taken_0x2b0904 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0904u;
        // 0x2b0908: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0904) {
            ctx->pc = 0x2B0918u;
            goto label_2b0918;
        }
    }
    ctx->pc = 0x2B090Cu;
    // 0x2b090c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b090cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0910u;
    {
        const bool branch_taken_0x2b0910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0910u;
        // 0x2b0914: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0910) {
            ctx->pc = 0x2B0930u;
            goto label_2b0930;
        }
    }
    ctx->pc = 0x2B0918u;
label_2b0918:
    // 0x2b0918: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b091c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b091cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0924: 0x0  nop
    ctx->pc = 0x2b0924u;
    // NOP
    // 0x2b0928: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b092c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b092cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b0930:
    // 0x2b0930: 0x0  nop
    ctx->pc = 0x2b0930u;
    // NOP
    // 0x2b0934: 0x0  nop
    ctx->pc = 0x2b0934u;
    // NOP
    // 0x2b0938: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b0938u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b093c: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2b093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b0940: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2b0940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b0944: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x2b0944u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0948: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0948u;
    {
        const bool branch_taken_0x2b0948 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0948u;
        // 0x2b094c: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0948) {
            ctx->pc = 0x2B095Cu;
            goto label_2b095c;
        }
    }
    ctx->pc = 0x2B0950u;
    // 0x2b0950: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b0950u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0954u;
    {
        const bool branch_taken_0x2b0954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0954u;
        // 0x2b0958: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0954) {
            ctx->pc = 0x2B0978u;
            goto label_2b0978;
        }
    }
    ctx->pc = 0x2B095Cu;
label_2b095c:
    // 0x2b095c: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x2b095cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b0960: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2b0960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b0964: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0968: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b096c: 0x0  nop
    ctx->pc = 0x2b096cu;
    // NOP
    // 0x2b0970: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2b0970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0974: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b0974u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2b0978:
    // 0x2b0978: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0978u;
    {
        const bool branch_taken_0x2b0978 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0978u;
        // 0x2b097c: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0978) {
            ctx->pc = 0x2B098Cu;
            goto label_2b098c;
        }
    }
    ctx->pc = 0x2B0980u;
    // 0x2b0980: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2b0980u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0984u;
    {
        const bool branch_taken_0x2b0984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0984u;
        // 0x2b0988: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0984) {
            ctx->pc = 0x2B09A4u;
            goto label_2b09a4;
        }
    }
    ctx->pc = 0x2B098Cu;
label_2b098c:
    // 0x2b098c: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2b098cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b0990: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0994: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0994u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0998: 0x0  nop
    ctx->pc = 0x2b0998u;
    // NOP
    // 0x2b099c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b099cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b09a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b09a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b09a4:
    // 0x2b09a4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b09a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b09a8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B09A8u;
    {
        const bool branch_taken_0x2b09a8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09A8u;
        // 0x2b09ac: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09a8) {
            ctx->pc = 0x2B09BCu;
            goto label_2b09bc;
        }
    }
    ctx->pc = 0x2B09B0u;
    // 0x2b09b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2b09b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b09b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B09B4u;
    {
        const bool branch_taken_0x2b09b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09B4u;
        // 0x2b09b8: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09b4) {
            ctx->pc = 0x2B09D8u;
            goto label_2b09d8;
        }
    }
    ctx->pc = 0x2B09BCu;
label_2b09bc:
    // 0x2b09bc: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2b09c0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2b09c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b09c4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b09c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b09c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b09c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b09cc: 0x0  nop
    ctx->pc = 0x2b09ccu;
    // NOP
    // 0x2b09d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b09d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b09d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b09d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b09d8:
    // 0x2b09d8: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x2b09d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b09dc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x2b09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x2b09e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b09e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b09e4: 0x0  nop
    ctx->pc = 0x2b09e4u;
    // NOP
    // 0x2b09e8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2b09e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b09ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B09ECu;
    {
        const bool branch_taken_0x2b09ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b09ec) {
            ctx->pc = 0x2B0A04u;
            goto label_2b0a04;
        }
    }
    ctx->pc = 0x2B09F4u;
    // 0x2b09f4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b09f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b09f8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b09f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b09fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B09FCu;
    {
        const bool branch_taken_0x2b09fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09FCu;
        // 0x2b0a00: 0xa3a5000c  sb          $a1, 0xC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09fc) {
            ctx->pc = 0x2B0A20u;
            goto label_2b0a20;
        }
    }
    ctx->pc = 0x2B0A04u;
label_2b0a04:
    // 0x2b0a04: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b0a04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0a08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b0a0c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b0a10: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b0a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b0a14: 0x0  nop
    ctx->pc = 0x2b0a14u;
    // NOP
    // 0x2b0a18: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0a1c: 0xa3a5000c  sb          $a1, 0xC($sp)
    ctx->pc = 0x2b0a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
label_2b0a20:
    // 0x2b0a20: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x2b0a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2b0a24: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A24u;
    {
        const bool branch_taken_0x2b0a24 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A24u;
        // 0x2b0a28: 0x90660001  lbu         $a2, 0x1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a24) {
            ctx->pc = 0x2B0A38u;
            goto label_2b0a38;
        }
    }
    ctx->pc = 0x2B0A2Cu;
    // 0x2b0a2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b0a2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0a30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0A30u;
    {
        const bool branch_taken_0x2b0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A30u;
        // 0x2b0a34: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a30) {
            ctx->pc = 0x2B0A54u;
            goto label_2b0a54;
        }
    }
    ctx->pc = 0x2B0A38u;
label_2b0a38:
    // 0x2b0a38: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x2b0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b0a3c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2b0a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b0a40: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0a44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0a44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0a48: 0x0  nop
    ctx->pc = 0x2b0a48u;
    // NOP
    // 0x2b0a4c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2b0a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0a50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b0a50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2b0a54:
    // 0x2b0a54: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A54u;
    {
        const bool branch_taken_0x2b0a54 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B0A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A54u;
        // 0x2b0a58: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a54) {
            ctx->pc = 0x2B0A68u;
            goto label_2b0a68;
        }
    }
    ctx->pc = 0x2B0A5Cu;
    // 0x2b0a5c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2b0a5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0A60u;
    {
        const bool branch_taken_0x2b0a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A60u;
        // 0x2b0a64: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a60) {
            ctx->pc = 0x2B0A80u;
            goto label_2b0a80;
        }
    }
    ctx->pc = 0x2B0A68u;
label_2b0a68:
    // 0x2b0a68: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2b0a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b0a6c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0a70: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0a70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0a74: 0x0  nop
    ctx->pc = 0x2b0a74u;
    // NOP
    // 0x2b0a78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b0a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b0a7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0a7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b0a80:
    // 0x2b0a80: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b0a80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0a84: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A84u;
    {
        const bool branch_taken_0x2b0a84 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A84u;
        // 0x2b0a88: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a84) {
            ctx->pc = 0x2B0A98u;
            goto label_2b0a98;
        }
    }
    ctx->pc = 0x2B0A8Cu;
    // 0x2b0a8c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2b0a8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0a90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0A90u;
    {
        const bool branch_taken_0x2b0a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A90u;
        // 0x2b0a94: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a90) {
            ctx->pc = 0x2B0AB4u;
            goto label_2b0ab4;
        }
    }
    ctx->pc = 0x2B0A98u;
label_2b0a98:
    // 0x2b0a98: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x2b0a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2b0a9c: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2b0a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b0aa0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0aa4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0aa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0aa8: 0x0  nop
    ctx->pc = 0x2b0aa8u;
    // NOP
    // 0x2b0aac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b0aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b0ab0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0ab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b0ab4:
    // 0x2b0ab4: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x2b0ab4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b0ab8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x2b0ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x2b0abc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b0abcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0ac0: 0x0  nop
    ctx->pc = 0x2b0ac0u;
    // NOP
    // 0x2b0ac4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2b0ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0ac8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0AC8u;
    {
        const bool branch_taken_0x2b0ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0ac8) {
            ctx->pc = 0x2B0AE0u;
            goto label_2b0ae0;
        }
    }
    ctx->pc = 0x2B0AD0u;
    // 0x2b0ad0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b0ad4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b0ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b0ad8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0AD8u;
    {
        const bool branch_taken_0x2b0ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AD8u;
        // 0x2b0adc: 0xa3a5000d  sb          $a1, 0xD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ad8) {
            ctx->pc = 0x2B0AFCu;
            goto label_2b0afc;
        }
    }
    ctx->pc = 0x2B0AE0u;
label_2b0ae0:
    // 0x2b0ae0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b0ae0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0ae4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b0ae8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0ae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b0aec: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b0aecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b0af0: 0x0  nop
    ctx->pc = 0x2b0af0u;
    // NOP
    // 0x2b0af4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0af8: 0xa3a5000d  sb          $a1, 0xD($sp)
    ctx->pc = 0x2b0af8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 5));
label_2b0afc:
    // 0x2b0afc: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2b0afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b0b00: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B00u;
    {
        const bool branch_taken_0x2b0b00 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B00u;
        // 0x2b0b04: 0x90660002  lbu         $a2, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b00) {
            ctx->pc = 0x2B0B14u;
            goto label_2b0b14;
        }
    }
    ctx->pc = 0x2B0B08u;
    // 0x2b0b08: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b0b08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0B0Cu;
    {
        const bool branch_taken_0x2b0b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B0Cu;
        // 0x2b0b10: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b0c) {
            ctx->pc = 0x2B0B30u;
            goto label_2b0b30;
        }
    }
    ctx->pc = 0x2B0B14u;
label_2b0b14:
    // 0x2b0b14: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x2b0b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b0b18: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2b0b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b0b1c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0b20: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0b20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b24: 0x0  nop
    ctx->pc = 0x2b0b24u;
    // NOP
    // 0x2b0b28: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2b0b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0b2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b0b2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2b0b30:
    // 0x2b0b30: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B30u;
    {
        const bool branch_taken_0x2b0b30 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B30u;
        // 0x2b0b34: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b30) {
            ctx->pc = 0x2B0B44u;
            goto label_2b0b44;
        }
    }
    ctx->pc = 0x2B0B38u;
    // 0x2b0b38: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2b0b38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0B3Cu;
    {
        const bool branch_taken_0x2b0b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B3Cu;
        // 0x2b0b40: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b3c) {
            ctx->pc = 0x2B0B5Cu;
            goto label_2b0b5c;
        }
    }
    ctx->pc = 0x2B0B44u;
label_2b0b44:
    // 0x2b0b44: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2b0b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b0b48: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0b4c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0b4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b50: 0x0  nop
    ctx->pc = 0x2b0b50u;
    // NOP
    // 0x2b0b54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b0b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b0b58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0b58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b0b5c:
    // 0x2b0b5c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b0b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0b60: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B60u;
    {
        const bool branch_taken_0x2b0b60 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B60u;
        // 0x2b0b64: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b60) {
            ctx->pc = 0x2B0B74u;
            goto label_2b0b74;
        }
    }
    ctx->pc = 0x2B0B68u;
    // 0x2b0b68: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2b0b68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0B6Cu;
    {
        const bool branch_taken_0x2b0b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B6Cu;
        // 0x2b0b70: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b6c) {
            ctx->pc = 0x2B0B90u;
            goto label_2b0b90;
        }
    }
    ctx->pc = 0x2B0B74u;
label_2b0b74:
    // 0x2b0b74: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x2b0b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2b0b78: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x2b0b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2b0b7c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0b80: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b0b80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b84: 0x0  nop
    ctx->pc = 0x2b0b84u;
    // NOP
    // 0x2b0b88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b0b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b0b8c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b0b90:
    // 0x2b0b90: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x2b0b90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b0b94: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x2b0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x2b0b98: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b0b98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0b9c: 0x0  nop
    ctx->pc = 0x2b0b9cu;
    // NOP
    // 0x2b0ba0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x2b0ba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0ba4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0BA4u;
    {
        const bool branch_taken_0x2b0ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0ba4) {
            ctx->pc = 0x2B0BBCu;
            goto label_2b0bbc;
        }
    }
    ctx->pc = 0x2B0BACu;
    // 0x2b0bac: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b0bb0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b0bb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b0bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0BB4u;
    {
        const bool branch_taken_0x2b0bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BB4u;
        // 0x2b0bb8: 0xa3a5000e  sb          $a1, 0xE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bb4) {
            ctx->pc = 0x2B0BD8u;
            goto label_2b0bd8;
        }
    }
    ctx->pc = 0x2B0BBCu;
label_2b0bbc:
    // 0x2b0bbc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2b0bbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0bc0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b0bc4: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0bc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b0bc8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b0bc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b0bcc: 0x0  nop
    ctx->pc = 0x2b0bccu;
    // NOP
    // 0x2b0bd0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2b0bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b0bd4: 0xa3a5000e  sb          $a1, 0xE($sp)
    ctx->pc = 0x2b0bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 5));
label_2b0bd8:
    // 0x2b0bd8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2b0bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2b0bdc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0BDCu;
    {
        const bool branch_taken_0x2b0bdc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BDCu;
        // 0x2b0be0: 0x90640003  lbu         $a0, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bdc) {
            ctx->pc = 0x2B0BF0u;
            goto label_2b0bf0;
        }
    }
    ctx->pc = 0x2B0BE4u;
    // 0x2b0be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b0be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0be8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0BE8u;
    {
        const bool branch_taken_0x2b0be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BE8u;
        // 0x2b0bec: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0be8) {
            ctx->pc = 0x2B0C0Cu;
            goto label_2b0c0c;
        }
    }
    ctx->pc = 0x2B0BF0u;
label_2b0bf0:
    // 0x2b0bf0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b0bf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b0bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b0bf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0bfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b0bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0c00: 0x0  nop
    ctx->pc = 0x2b0c00u;
    // NOP
    // 0x2b0c04: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2b0c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0c08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2b0c08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2b0c0c:
    // 0x2b0c0c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0C0Cu;
    {
        const bool branch_taken_0x2b0c0c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C0Cu;
        // 0x2b0c10: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c0c) {
            ctx->pc = 0x2B0C20u;
            goto label_2b0c20;
        }
    }
    ctx->pc = 0x2B0C14u;
    // 0x2b0c14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b0c14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0c18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0C18u;
    {
        const bool branch_taken_0x2b0c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C18u;
        // 0x2b0c1c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c18) {
            ctx->pc = 0x2B0C38u;
            goto label_2b0c38;
        }
    }
    ctx->pc = 0x2B0C20u;
label_2b0c20:
    // 0x2b0c20: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b0c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b0c24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0c28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b0c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0c2c: 0x0  nop
    ctx->pc = 0x2b0c2cu;
    // NOP
    // 0x2b0c30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b0c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b0c34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b0c34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b0c38:
    // 0x2b0c38: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2b0c38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2b0c3c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0C3Cu;
    {
        const bool branch_taken_0x2b0c3c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2B0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C3Cu;
        // 0x2b0c40: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c3c) {
            ctx->pc = 0x2B0C50u;
            goto label_2b0c50;
        }
    }
    ctx->pc = 0x2B0C44u;
    // 0x2b0c44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b0c44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0C48u;
    {
        const bool branch_taken_0x2b0c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C48u;
        // 0x2b0c4c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c48) {
            ctx->pc = 0x2B0C6Cu;
            goto label_2b0c6c;
        }
    }
    ctx->pc = 0x2B0C50u;
label_2b0c50:
    // 0x2b0c50: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2b0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2b0c54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b0c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b0c58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0c60: 0x0  nop
    ctx->pc = 0x2b0c60u;
    // NOP
    // 0x2b0c64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0c68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b0c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b0c6c:
    // 0x2b0c6c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2b0c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0c70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b0c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0c78: 0x0  nop
    ctx->pc = 0x2b0c78u;
    // NOP
    // 0x2b0c7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b0c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0c80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0C80u;
    {
        const bool branch_taken_0x2b0c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b0c80) {
            ctx->pc = 0x2B0C98u;
            goto label_2b0c98;
        }
    }
    ctx->pc = 0x2B0C88u;
    // 0x2b0c88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0c88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0c8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b0c8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b0c90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0C90u;
    {
        const bool branch_taken_0x2b0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C90u;
        // 0x2b0c94: 0xa3a3000f  sb          $v1, 0xF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c90) {
            ctx->pc = 0x2B0CB4u;
            goto label_2b0cb4;
        }
    }
    ctx->pc = 0x2B0C98u;
label_2b0c98:
    // 0x2b0c98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b0c98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b0c9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b0ca0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b0ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b0ca4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b0ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b0ca8: 0x0  nop
    ctx->pc = 0x2b0ca8u;
    // NOP
    // 0x2b0cac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0cb0: 0xa3a3000f  sb          $v1, 0xF($sp)
    ctx->pc = 0x2b0cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 3));
label_2b0cb4:
    // 0x2b0cb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B0CB4u;
    {
        const bool branch_taken_0x2b0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CB4u;
        // 0x2b0cb8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cb4) {
            ctx->pc = 0x2B0CE0u;
            goto label_2b0ce0;
        }
    }
    ctx->pc = 0x2B0CBCu;
    // 0x2b0cbc: 0x0  nop
    ctx->pc = 0x2b0cbcu;
    // NOP
label_2b0cc0:
    // 0x2b0cc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b0cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2b0cc4: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x2b0cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b0cc8: 0x1440fef9  bnez        $v0, . + 4 + (-0x107 << 2)
    ctx->pc = 0x2B0CC8u;
    {
        const bool branch_taken_0x2b0cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CC8u;
        // 0x2b0ccc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cc8) {
            ctx->pc = 0x2B08B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b08b0;
        }
    }
    ctx->pc = 0x2B0CD0u;
label_2b0cd0:
    // 0x2b0cd0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2b0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2b0cd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b0cd8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2b0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2b0cdc: 0x0  nop
    ctx->pc = 0x2b0cdcu;
    // NOP
label_2b0ce0:
    // 0x2b0ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CE0u;
        // 0x2b0ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0CE8u;
}
