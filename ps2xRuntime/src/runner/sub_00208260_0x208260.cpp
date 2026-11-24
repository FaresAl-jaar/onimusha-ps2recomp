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

// Function: sub_00208260
// Address: 0x208260 - 0x2082b4
void sub_00208260_0x208260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208260_0x208260");
#endif

    ctx->pc = 0x208260u;

    // 0x208260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208264: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x208264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20826c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x208270: 0x8c6701c8  lw          $a3, 0x1C8($v1)
    ctx->pc = 0x208270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x208274: 0x24453fff  addiu       $a1, $v0, 0x3FFF
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16383));
    // 0x208278: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20827c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x20827cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x208280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208284: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x208284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x208288: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x208288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20828c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x208290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x208298: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x208298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20829c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20829cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2082a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2082a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2082a4: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x2082a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2082a8: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x2082a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x2082ac: 0x8081d5a  j           func_207568
    ctx->pc = 0x2082ACu;
    ctx->pc = 0x2082B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2082ACu;
    // 0x2082b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207568u;
    sub_00207568_0x207568(rdram, ctx, runtime); return;
    ctx->pc = 0x2082B4u;
}
